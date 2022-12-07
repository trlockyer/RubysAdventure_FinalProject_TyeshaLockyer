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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Ammo
struct Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CloseTutorialDialog
struct CloseTutorialDialog_t6CA7DC932BBBB8431324C105A55579517297F267;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DamageZone
struct DamageZone_tDD9B90B17109D4D955E42574D2AB86C6B147D712;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EnemyController
struct EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HardEnemyController
struct HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5;
// HealthCollectible
struct HealthCollectible_t584680E50251F9F248F6E212B0F4C2E6F04C1825;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NonPlayerCharacter
struct NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Projectile
struct Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6;
// Quests
struct Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// RubyController
struct RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
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
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIHealthBar
struct UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3600BC3E7695287AA97A682A262409C191755207;
IL2CPP_EXTERN_C String_t* _stringLiteral485F7840A75277C7D76C4F7907AFAC50388099AE;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral696AD91D885CCC0095DBD664EE32D3A75C8616C5;
IL2CPP_EXTERN_C String_t* _stringLiteral740E3B3010E24B8D4772086FCB435D0693CC2E80;
IL2CPP_EXTERN_C String_t* _stringLiteral768225881ED3A47F01037524E17768FE6AD0A335;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C;
IL2CPP_EXTERN_C String_t* _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8;
IL2CPP_EXTERN_C String_t* _stringLiteralA0D91FE27B46431BDA1A889AC9D6FD7F18D8039B;
IL2CPP_EXTERN_C String_t* _stringLiteralB98A2829BFF163F9D7A7F89D9CA3D62D65033358;
IL2CPP_EXTERN_C String_t* _stringLiteralC14434915C247BF2C63C596EA8744B7C001546AF;
IL2CPP_EXTERN_C String_t* _stringLiteralCC9B33F97AAC6E5005DC884523FEF49CFCCC7717;
IL2CPP_EXTERN_C String_t* _stringLiteralE24DBD6BDC2C431FF9C6F4ABFF2627F8309F25AD;
IL2CPP_EXTERN_C String_t* _stringLiteralFC594AA16018C9298B4AF96B76BCBCF175D9FEC2;
IL2CPP_EXTERN_C const RuntimeMethod* CloseTutorialDialog_CloseDialogBox_m9E157A1D8CE73CA6EDC0E2E4E29720697BE79E92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m96CAC8736966651D1D682678C759A2D6BA5D6B9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5_m915AD4C4329AD096A8384D71619B5F3A8F7D5847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A_m8F0C09061CC9ABD2A03E142F71F8C31440984ABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisQuests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18_mCCC0AAA19FDB79F501C7A90B39F26AE05D4C945D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mE84A1A4D45C025B500C006FD82053DD2C5DD90DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PauseMenu_TogglePauseMenu_mC6D34A242DF741AF1EC1430E372E81D666A1C444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PauseMenu_loadNewScene_m83F6094A8FF5531063F97F1BFAE5449A8AB5461F_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Ammo
struct Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Ammo::GameOverMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameOverMenu_4;
	// System.Boolean Ammo::gameOverState
	bool ___gameOverState_5;
};

struct Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE_StaticFields
{
	// System.Int32 Ammo::currentAmmo
	int32_t ___currentAmmo_6;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CloseTutorialDialog
struct CloseTutorialDialog_t6CA7DC932BBBB8431324C105A55579517297F267  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CloseTutorialDialog::dialogBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dialogBox_4;
};

// DamageZone
struct DamageZone_tDD9B90B17109D4D955E42574D2AB86C6B147D712  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// EnemyController
struct EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyController::speed
	float ___speed_4;
	// System.Boolean EnemyController::vertical
	bool ___vertical_5;
	// System.Single EnemyController::changeTime
	float ___changeTime_6;
	// UnityEngine.Rigidbody2D EnemyController::rigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidbody2D_7;
	// System.Single EnemyController::timer
	float ___timer_8;
	// System.Int32 EnemyController::direction
	int32_t ___direction_9;
	// System.Boolean EnemyController::broken
	bool ___broken_10;
	// UnityEngine.Animator EnemyController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_11;
	// UnityEngine.ParticleSystem EnemyController::smokeEffect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___smokeEffect_12;
	// UnityEngine.GameObject EnemyController::cogCollision
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cogCollision_13;
	// UnityEngine.AudioSource EnemyController::enemeyAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___enemeyAudio_14;
	// UnityEngine.AudioClip EnemyController::fixAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___fixAudioClip_15;
	// UnityEngine.GameObject EnemyController::questObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___questObject_16;
};

// HardEnemyController
struct HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HardEnemyController::speed
	float ___speed_4;
	// System.Boolean HardEnemyController::vertical
	bool ___vertical_5;
	// System.Single HardEnemyController::changeTime
	float ___changeTime_6;
	// UnityEngine.Rigidbody2D HardEnemyController::rigidbody2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidbody2D_7;
	// System.Single HardEnemyController::timer
	float ___timer_8;
	// System.Int32 HardEnemyController::direction
	int32_t ___direction_9;
	// System.Boolean HardEnemyController::broken
	bool ___broken_10;
	// UnityEngine.Animator HardEnemyController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_11;
	// UnityEngine.ParticleSystem HardEnemyController::smokeEffect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___smokeEffect_12;
	// UnityEngine.GameObject HardEnemyController::cogCollision
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cogCollision_13;
	// UnityEngine.AudioSource HardEnemyController::enemeyAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___enemeyAudio_14;
	// UnityEngine.AudioClip HardEnemyController::fixAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___fixAudioClip_15;
	// UnityEngine.GameObject HardEnemyController::questObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___questObject_16;
};

// HealthCollectible
struct HealthCollectible_t584680E50251F9F248F6E212B0F4C2E6F04C1825  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip HealthCollectible::collectedClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___collectedClip_4;
};

// NonPlayerCharacter
struct NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip NonPlayerCharacter::musicClipOne
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___musicClipOne_4;
	// UnityEngine.AudioSource NonPlayerCharacter::musicSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___musicSource_5;
	// System.Single NonPlayerCharacter::displayTime
	float ___displayTime_6;
	// UnityEngine.GameObject NonPlayerCharacter::dialogBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dialogBox_7;
	// System.Single NonPlayerCharacter::timerDisplay
	float ___timerDisplay_8;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseMenu::pauseMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenu_4;
	// UnityEngine.AudioSource PauseMenu::musicSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___musicSource_5;
	// UnityEngine.AudioClip PauseMenu::musicClipOne
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___musicClipOne_6;
	// UnityEngine.UI.Button PauseMenu::btn_Restart
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_Restart_7;
	// UnityEngine.UI.Button PauseMenu::btn_goRestart
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_goRestart_8;
};

// Projectile
struct Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D Projectile::rigidbody2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidbody2d_4;
	// UnityEngine.AudioSource Projectile::projectileAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___projectileAudio_5;
	// UnityEngine.AudioClip Projectile::cogCollideClip_01
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___cogCollideClip_01_6;
	// UnityEngine.AudioClip Projectile::cogCollideClip_02
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___cogCollideClip_02_7;
	// System.Boolean Projectile::selfDestruct
	bool ___selfDestruct_8;
	// System.Boolean Projectile::selfDestructing
	bool ___selfDestructing_9;
	// System.Boolean Projectile::disableCollider2D
	bool ___disableCollider2D_10;
	// System.Single Projectile::timeToDestroy
	float ___timeToDestroy_11;
};

// Quests
struct Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Quests::questAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___questAudio_4;
	// UnityEngine.AudioClip Quests::questAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___questAudioClip_5;
	// UnityEngine.GameObject[] Quests::botQuestBots
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___botQuestBots_6;
	// System.Int32 Quests::botQuest_BotsLeft
	int32_t ___botQuest_BotsLeft_7;
	// UnityEngine.GameObject Quests::botCounter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___botCounter_8;
	// UnityEngine.GameObject Quests::dialogBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dialogBox_9;
	// System.Single Quests::timerDisplay
	float ___timerDisplay_10;
};

// RubyController
struct RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RubyController::speed
	float ___speed_5;
	// System.Int32 RubyController::maxHealth
	int32_t ___maxHealth_6;
	// System.Single RubyController::timeInvincible
	float ___timeInvincible_7;
	// System.Int32 RubyController::currentHealth
	int32_t ___currentHealth_8;
	// System.Boolean RubyController::isInvincible
	bool ___isInvincible_9;
	// System.Single RubyController::invincibleTimer
	float ___invincibleTimer_10;
	// UnityEngine.GameObject RubyController::projectilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectilePrefab_11;
	// TMPro.TextMeshProUGUI RubyController::ammoText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___ammoText_12;
	// UnityEngine.Rigidbody2D RubyController::rigidbody2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidbody2d_14;
	// UnityEngine.Animator RubyController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_15;
	// UnityEngine.Vector2 RubyController::lookDirection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lookDirection_16;
	// UnityEngine.AudioSource RubyController::characterAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___characterAudio_17;
	// UnityEngine.AudioClip RubyController::cogThrowClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___cogThrowClip_18;
	// UnityEngine.AudioClip RubyController::playerHitClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___playerHitClip_19;
	// UnityEngine.AudioClip RubyController::playerRunning
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___playerRunning_20;
	// System.Boolean RubyController::startedRunning
	bool ___startedRunning_21;
	// System.Boolean RubyController::isRunning
	bool ___isRunning_22;
	// UnityEngine.GameObject RubyController::walkingAudioObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___walkingAudioObject_23;
	// UnityEngine.AudioSource RubyController::runningAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___runningAudio_24;
	// UnityEngine.UI.Image RubyController::damageImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___damageImage_25;
	// UnityEngine.Color RubyController::damageFlashColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___damageFlashColor_26;
	// System.Single RubyController::damageFlashSpeed
	float ___damageFlashSpeed_27;
	// System.Boolean RubyController::characterDamaged
	bool ___characterDamaged_28;
	// System.Boolean RubyController::characterHealed
	bool ___characterHealed_29;
	// UnityEngine.UI.Image RubyController::healImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___healImage_30;
	// UnityEngine.Color RubyController::healFlashColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___healFlashColor_31;
	// System.Single RubyController::healFlashSpeed
	float ___healFlashSpeed_32;
	// UnityEngine.GameObject RubyController::GameOverMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameOverMenu_33;
	// System.Boolean RubyController::gameOverState
	bool ___gameOverState_34;
	// System.Single RubyController::horizontal
	float ___horizontal_35;
	// System.Single RubyController::vertical
	float ___vertical_36;
};

struct RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_StaticFields
{
	// System.Int32 RubyController::currentAmmo
	int32_t ___currentAmmo_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIHealthBar
struct UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image UIHealthBar::mask
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___mask_5;
	// System.Single UIHealthBar::originalSize
	float ___originalSize_6;
};

struct UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_StaticFields
{
	// UIHealthBar UIHealthBar::<instance>k__BackingField
	UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* ___U3CinstanceU3Ek__BackingField_4;
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<RubyController>()
inline RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void RubyController::AmmoUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_AmmoUp_m02E907261D27E14FA65D2C538308ACD00F6C200D (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void RubyController::ChangeHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_ChangeHealth_m1979C353BD6CBF2BD5376D2F5C25FCE1A50DACFD (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<RubyController>()
inline RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* GameObject_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mE84A1A4D45C025B500C006FD82053DD2C5DD90DF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Rigidbody2D::set_simulated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void EnemyController::enemyOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_enemyOneShot_mBFAC32040ED75729920C6BD4B4CE646F788F0B6B (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Quests>()
inline Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* GameObject_GetComponent_TisQuests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18_mCCC0AAA19FDB79F501C7A90B39F26AE05D4C945D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Quests::BotFixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_BotFixed_mDAB668A08AF4EDCAABDF30399E8BB6E4884D2BC9 (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void HardEnemyController::enemyOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardEnemyController_enemyOneShot_mFD0D4C0BED4015EF54B127CA7441C091CF2D9B0F (HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Int32 RubyController::get_health()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RubyController_get_health_m17FD25986C3500ACABBD6199E71E5F1426C09DEF_inline (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) ;
// System.Void RubyController::characterOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_characterOneShot_m91B817F984E2FBD4EFC41A1EE3184BE2B6A62853 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Projectile::DestroyProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_DestroyProjectile_mD43747147CB810F89B645EAF6F829FD7D9F30476 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<EnemyController>()
inline EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* Component_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m96CAC8736966651D1D682678C759A2D6BA5D6B9C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void EnemyController::Fix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Fix_m63BF0FF1CFE178CA94B44F0D444E0E7EB776F7E9 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HardEnemyController>()
inline HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* Component_GetComponent_TisHardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5_m915AD4C4329AD096A8384D71619B5F3A8F7D5847 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void HardEnemyController::Fix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardEnemyController_Fix_m26CC5A7680E602F68F1BFDE828D280C37A492512 (HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void Quests::UpdateBotCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_UpdateBotCounter_m8756B9D92F40A0010B03CD781F8744E51125C263 (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, const RuntimeMethod* method) ;
// System.Void Quests::QuestOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_QuestOneShot_mC967DDA01185C1F899A9C1FAE925BD2FDDAD309D (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void Quests::UpdateBotCounter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_UpdateBotCounter_m72ABA66AB2B8C9BC01BBBE4D1E2A3875A10F60DF (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, String_t* ___s0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void RubyController::AmmoCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_AmmoCounter_m3F28534B22E9DEC38E1FF69C1C8C073917B8C1E5 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Set(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Set_m42A76E817B65A9626E1F5E900EB67F037B3E1ED0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___newX0, float ___newY1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Int32 RubyController::get_ammo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RubyController_get_ammo_m84223D52B84CAEFAB75D16A01B151EA6692A98D1_inline (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) ;
// System.Void RubyController::Launch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_Launch_mCBFE8A372897F12F44AB2F5F1739BB4FBF9DB050 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___layerNames0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<NonPlayerCharacter>()
inline NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* Component_GetComponent_TisNonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A_m8F0C09061CC9ABD2A03E142F71F8C31440984ABA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void NonPlayerCharacter::DisplayDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonPlayerCharacter_DisplayDialog_m7D656B57DE2AC52D02A689C0E7231EEBE964F8AA (NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* __this, const RuntimeMethod* method) ;
// System.Void RubyController::DamagaeFlash(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_DamagaeFlash_m3F46B4483788634B43516AD880BE7A8663B387F1 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, bool ___damaged0, const RuntimeMethod* method) ;
// System.Void RubyController::HealFlash(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_HealFlash_mE2A777C1F825BB894A5912DB9C33930548FD81F1 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, bool ___healed0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// UIHealthBar UIHealthBar::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* UIHealthBar_get_instance_mDEAA94410B515DBE4CDC7025375B5433B6AB6CB1_inline (const RuntimeMethod* method) ;
// System.Void UIHealthBar::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBar_SetValue_m8E4C4D6F4D7E1C3C99283FE92D73AF1D9F480883 (UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Projectile>()
inline Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Projectile::Launch(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Launch_m1FBBD2E78F0B34277B0A88CAD2BDF3E5D6BD70D1 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, float ___force1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UIHealthBar::set_instance(UIHealthBar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIHealthBar_set_instance_m2146214ECF454C66446389D5BF39379EABD3A97C_inline (UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, int32_t ___axis0, float ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
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
// System.Int32 Ammo::get_ammo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ammo_get_ammo_m1924D8ABE05C22F06029BE58A595C60FE8D280DF (Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ammo { get { return currentAmmo; } }
		int32_t L_0 = ((Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE_StaticFields*)il2cpp_codegen_static_fields_for(Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE_il2cpp_TypeInfo_var))->___currentAmmo_6;
		return L_0;
	}
}
// System.Void Ammo::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ammo_OnTriggerEnter2D_mC6DCF8EC8E9DCC0C2089385D7A707EC7FF61E35C (Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* V_0 = NULL;
	{
		// RubyController controller = other.GetComponent<RubyController>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_1;
		L_1 = Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2(L_0, Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2_RuntimeMethod_var);
		V_0 = L_1;
		// if (controller != null)
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// controller.AmmoUp();
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_4 = V_0;
		RubyController_AmmoUp_m02E907261D27E14FA65D2C538308ACD00F6C200D(L_4, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0021:
	{
		// if (currentAmmo == 0)
		int32_t L_6 = ((Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE_StaticFields*)il2cpp_codegen_static_fields_for(Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE_il2cpp_TypeInfo_var))->___currentAmmo_6;
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		// GameOverMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___GameOverMenu_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// gameOverState = true;
		__this->___gameOverState_5 = (bool)1;
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Ammo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ammo__ctor_m45C17AA82DC94E70508AD2458F7845F5EB679BE0 (Ammo_t538FCE3D2D71F87A6917DA0656D48CFF42C4E6FE* __this, const RuntimeMethod* method) 
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
// System.Void CloseTutorialDialog::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseTutorialDialog_Start_mC0578982FFB8980CC8F54DAB8420BD71EB16B83C (CloseTutorialDialog_t6CA7DC932BBBB8431324C105A55579517297F267* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloseTutorialDialog_CloseDialogBox_m9E157A1D8CE73CA6EDC0E2E4E29720697BE79E92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Button>().onClick.AddListener(CloseDialogBox);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)CloseTutorialDialog_CloseDialogBox_m9E157A1D8CE73CA6EDC0E2E4E29720697BE79E92_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void CloseTutorialDialog::CloseDialogBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseTutorialDialog_CloseDialogBox_m9E157A1D8CE73CA6EDC0E2E4E29720697BE79E92 (CloseTutorialDialog_t6CA7DC932BBBB8431324C105A55579517297F267* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(dialogBox);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___dialogBox_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void CloseTutorialDialog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseTutorialDialog__ctor_mF9CB254F663AD8E9B498201527825A3A18E0F8E8 (CloseTutorialDialog_t6CA7DC932BBBB8431324C105A55579517297F267* __this, const RuntimeMethod* method) 
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
// System.Void DamageZone::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageZone_OnTriggerStay2D_m8639F5A453EE2580C4981AD4F275A7E6329B07EC (DamageZone_tDD9B90B17109D4D955E42574D2AB86C6B147D712* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* V_0 = NULL;
	{
		// RubyController controller = other.GetComponent<RubyController>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_1;
		L_1 = Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2(L_0, Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2_RuntimeMethod_var);
		V_0 = L_1;
		// if (controller != null)
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// controller.ChangeHealth(-1);
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_4 = V_0;
		RubyController_ChangeHealth_m1979C353BD6CBF2BD5376D2F5C25FCE1A50DACFD(L_4, (-1), NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void DamageZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageZone__ctor_mBEC7FFC89FC1CF12D5BD61D3D8C95E99D3159D19 (DamageZone_tDD9B90B17109D4D955E42574D2AB86C6B147D712* __this, const RuntimeMethod* method) 
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
// System.Void EnemyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Start_mD47FA99710AFEDA91637E73B4109FC0125032604 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3600BC3E7695287AA97A682A262409C191755207);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigidbody2D_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody2D_7), (void*)L_0);
		// timer = changeTime;
		float L_1 = __this->___changeTime_6;
		__this->___timer_8 = L_1;
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_11), (void*)L_2);
		// enemeyAudio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___enemeyAudio_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemeyAudio_14), (void*)L_3);
		// questObject = GameObject.Find("Quests");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral3600BC3E7695287AA97A682A262409C191755207, NULL);
		__this->___questObject_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___questObject_16), (void*)L_4);
		// }
		return;
	}
}
// System.Void EnemyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Update_mD4EAAD97042453D8F3F5D623882F24366451F7ED (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98A2829BFF163F9D7A7F89D9CA3D62D65033358);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE24DBD6BDC2C431FF9C6F4ABFF2627F8309F25AD);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!broken)
		bool L_0 = __this->___broken_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// timer -= Time.deltaTime;
		float L_1 = __this->___timer_8;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (timer < 0)
		float L_3 = __this->___timer_8;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// direction = -direction;
		int32_t L_4 = __this->___direction_9;
		__this->___direction_9 = ((-L_4));
		// timer = changeTime;
		float L_5 = __this->___changeTime_6;
		__this->___timer_8 = L_5;
	}

IL_0041:
	{
		// Vector2 position = rigidbody2D.position;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rigidbody2D_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_6, NULL);
		V_0 = L_7;
		// if (vertical)
		bool L_8 = __this->___vertical_5;
		if (!L_8)
		{
			goto IL_00a5;
		}
	}
	{
		// position.y = position.y + Time.deltaTime * speed * direction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___y_1;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12 = __this->___speed_4;
		int32_t L_13 = __this->___direction_9;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), ((float)L_13)))));
		// animator.SetFloat("Move X", 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___animator_11;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_14, _stringLiteralE24DBD6BDC2C431FF9C6F4ABFF2627F8309F25AD, (0.0f), NULL);
		// animator.SetFloat("Move Y", direction);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___animator_11;
		int32_t L_16 = __this->___direction_9;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_15, _stringLiteralB98A2829BFF163F9D7A7F89D9CA3D62D65033358, ((float)L_16), NULL);
		goto IL_00f3;
	}

IL_00a5:
	{
		// position.x = position.x + Time.deltaTime * speed * direction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		float L_18 = L_17.___x_0;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_20 = __this->___speed_4;
		int32_t L_21 = __this->___direction_9;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_19, L_20)), ((float)L_21)))));
		// animator.SetFloat("Move X", direction);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->___animator_11;
		int32_t L_23 = __this->___direction_9;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_22, _stringLiteralE24DBD6BDC2C431FF9C6F4ABFF2627F8309F25AD, ((float)L_23), NULL);
		// animator.SetFloat("Move Y", 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_11;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_24, _stringLiteralB98A2829BFF163F9D7A7F89D9CA3D62D65033358, (0.0f), NULL);
	}

IL_00f3:
	{
		// rigidbody2D.MovePosition(position);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_25 = __this->___rigidbody2D_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_0;
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_25, L_26, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_OnCollisionEnter2D_mDA76F070AA6CEBEA977689C64D0AC905E9BAF686 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mE84A1A4D45C025B500C006FD82053DD2C5DD90DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* V_0 = NULL;
	{
		// RubyController player = other.gameObject.GetComponent<RubyController>();
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_2;
		L_2 = GameObject_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mE84A1A4D45C025B500C006FD82053DD2C5DD90DF(L_1, GameObject_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mE84A1A4D45C025B500C006FD82053DD2C5DD90DF_RuntimeMethod_var);
		V_0 = L_2;
		// if (player != null)
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// player.ChangeHealth(-1);
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_5 = V_0;
		RubyController_ChangeHealth_m1979C353BD6CBF2BD5376D2F5C25FCE1A50DACFD(L_5, (-1), NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void EnemyController::Fix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Fix_m63BF0FF1CFE178CA94B44F0D444E0E7EB776F7E9 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisQuests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18_mCCC0AAA19FDB79F501C7A90B39F26AE05D4C945D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral696AD91D885CCC0095DBD664EE32D3A75C8616C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject cogCollisionObject = Instantiate(cogCollision, rigidbody2D.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cogCollision_13;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rigidbody2D_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// broken = false;
		__this->___broken_10 = (bool)0;
		// rigidbody2D.simulated = false;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rigidbody2D_7;
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_6, (bool)0, NULL);
		// animator.SetTrigger("Fixed");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_11;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_7, _stringLiteral696AD91D885CCC0095DBD664EE32D3A75C8616C5, NULL);
		// smokeEffect.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___smokeEffect_12;
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_8, NULL);
		// enemeyAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___enemeyAudio_14;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_9, NULL);
		// enemyOneShot(fixAudioClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = __this->___fixAudioClip_15;
		EnemyController_enemyOneShot_mBFAC32040ED75729920C6BD4B4CE646F788F0B6B(__this, L_10, NULL);
		// questObject.GetComponent<Quests>().BotFixed();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___questObject_16;
		Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* L_12;
		L_12 = GameObject_GetComponent_TisQuests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18_mCCC0AAA19FDB79F501C7A90B39F26AE05D4C945D(L_11, GameObject_GetComponent_TisQuests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18_mCCC0AAA19FDB79F501C7A90B39F26AE05D4C945D_RuntimeMethod_var);
		Quests_BotFixed_mDAB668A08AF4EDCAABDF30399E8BB6E4884D2BC9(L_12, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::enemyOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_enemyOneShot_mBFAC32040ED75729920C6BD4B4CE646F788F0B6B (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	{
		// enemeyAudio.PlayOneShot(clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___enemeyAudio_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController__ctor_m984FF7EBF9BF2923A09FA943862B8941E9FFECCD (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 3.0f;
		__this->___speed_4 = (3.0f);
		// public float changeTime = 3.0f;
		__this->___changeTime_6 = (3.0f);
		// int direction = 1;
		__this->___direction_9 = 1;
		// bool broken = true;
		__this->___broken_10 = (bool)1;
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
// System.Void HardEnemyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardEnemyController_Start_mB9B6F500C9972BA82FDDF65E12861AB492FF03EA (HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3600BC3E7695287AA97A682A262409C191755207);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigidbody2D_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody2D_7), (void*)L_0);
		// timer = changeTime;
		float L_1 = __this->___changeTime_6;
		__this->___timer_8 = L_1;
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_11), (void*)L_2);
		// enemeyAudio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___enemeyAudio_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemeyAudio_14), (void*)L_3);
		// questObject = GameObject.Find("Quests");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral3600BC3E7695287AA97A682A262409C191755207, NULL);
		__this->___questObject_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___questObject_16), (void*)L_4);
		// }
		return;
	}
}
// System.Void HardEnemyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardEnemyController_Update_m705C97D553BBB5BD9BD7E5E287EE7E455D76ACC2 (HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98A2829BFF163F9D7A7F89D9CA3D62D65033358);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE24DBD6BDC2C431FF9C6F4ABFF2627F8309F25AD);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!broken)
		bool L_0 = __this->___broken_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// timer -= Time.deltaTime;
		float L_1 = __this->___timer_8;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_8 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (timer < 0)
		float L_3 = __this->___timer_8;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// direction = -direction;
		int32_t L_4 = __this->___direction_9;
		__this->___direction_9 = ((-L_4));
		// timer = changeTime;
		float L_5 = __this->___changeTime_6;
		__this->___timer_8 = L_5;
	}

IL_0041:
	{
		// Vector2 position = rigidbody2D.position;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rigidbody2D_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_6, NULL);
		V_0 = L_7;
		// if (vertical)
		bool L_8 = __this->___vertical_5;
		if (!L_8)
		{
			goto IL_00a5;
		}
	}
	{
		// position.y = position.y + Time.deltaTime * speed * direction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___y_1;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12 = __this->___speed_4;
		int32_t L_13 = __this->___direction_9;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, L_12)), ((float)L_13)))));
		// animator.SetFloat("Move X", 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___animator_11;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_14, _stringLiteralE24DBD6BDC2C431FF9C6F4ABFF2627F8309F25AD, (0.0f), NULL);
		// animator.SetFloat("Move Y", direction);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___animator_11;
		int32_t L_16 = __this->___direction_9;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_15, _stringLiteralB98A2829BFF163F9D7A7F89D9CA3D62D65033358, ((float)L_16), NULL);
		goto IL_00f3;
	}

IL_00a5:
	{
		// position.x = position.x + Time.deltaTime * speed * direction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		float L_18 = L_17.___x_0;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_20 = __this->___speed_4;
		int32_t L_21 = __this->___direction_9;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_19, L_20)), ((float)L_21)))));
		// animator.SetFloat("Move X", direction);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->___animator_11;
		int32_t L_23 = __this->___direction_9;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_22, _stringLiteralE24DBD6BDC2C431FF9C6F4ABFF2627F8309F25AD, ((float)L_23), NULL);
		// animator.SetFloat("Move Y", 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_11;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_24, _stringLiteralB98A2829BFF163F9D7A7F89D9CA3D62D65033358, (0.0f), NULL);
	}

IL_00f3:
	{
		// rigidbody2D.MovePosition(position);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_25 = __this->___rigidbody2D_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_0;
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_25, L_26, NULL);
		// }
		return;
	}
}
// System.Void HardEnemyController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardEnemyController_OnCollisionEnter2D_m53C299DCBD1873D08D56FDEAA2F1BA8076F9EA1B (HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mE84A1A4D45C025B500C006FD82053DD2C5DD90DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* V_0 = NULL;
	{
		// RubyController player = other.gameObject.GetComponent<RubyController>();
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_2;
		L_2 = GameObject_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mE84A1A4D45C025B500C006FD82053DD2C5DD90DF(L_1, GameObject_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mE84A1A4D45C025B500C006FD82053DD2C5DD90DF_RuntimeMethod_var);
		V_0 = L_2;
		// if (player != null)
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// player.ChangeHealth(-2);
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_5 = V_0;
		RubyController_ChangeHealth_m1979C353BD6CBF2BD5376D2F5C25FCE1A50DACFD(L_5, ((int32_t)-2), NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void HardEnemyController::Fix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardEnemyController_Fix_m26CC5A7680E602F68F1BFDE828D280C37A492512 (HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisQuests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18_mCCC0AAA19FDB79F501C7A90B39F26AE05D4C945D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral696AD91D885CCC0095DBD664EE32D3A75C8616C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject cogCollisionObject = Instantiate(cogCollision, rigidbody2D.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cogCollision_13;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rigidbody2D_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// broken = false;
		__this->___broken_10 = (bool)0;
		// rigidbody2D.simulated = false;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rigidbody2D_7;
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_6, (bool)0, NULL);
		// animator.SetTrigger("Fixed");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_11;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_7, _stringLiteral696AD91D885CCC0095DBD664EE32D3A75C8616C5, NULL);
		// smokeEffect.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___smokeEffect_12;
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_8, NULL);
		// enemeyAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___enemeyAudio_14;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_9, NULL);
		// enemyOneShot(fixAudioClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = __this->___fixAudioClip_15;
		HardEnemyController_enemyOneShot_mFD0D4C0BED4015EF54B127CA7441C091CF2D9B0F(__this, L_10, NULL);
		// questObject.GetComponent<Quests>().BotFixed();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___questObject_16;
		Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* L_12;
		L_12 = GameObject_GetComponent_TisQuests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18_mCCC0AAA19FDB79F501C7A90B39F26AE05D4C945D(L_11, GameObject_GetComponent_TisQuests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18_mCCC0AAA19FDB79F501C7A90B39F26AE05D4C945D_RuntimeMethod_var);
		Quests_BotFixed_mDAB668A08AF4EDCAABDF30399E8BB6E4884D2BC9(L_12, NULL);
		// }
		return;
	}
}
// System.Void HardEnemyController::enemyOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardEnemyController_enemyOneShot_mFD0D4C0BED4015EF54B127CA7441C091CF2D9B0F (HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	{
		// enemeyAudio.PlayOneShot(clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___enemeyAudio_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void HardEnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardEnemyController__ctor_m77FDE9CD4FD959F6FA17668AF507A9B65444CA19 (HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 3.0f;
		__this->___speed_4 = (3.0f);
		// public float changeTime = 3.0f;
		__this->___changeTime_6 = (3.0f);
		// int direction = 1;
		__this->___direction_9 = 1;
		// bool broken = true;
		__this->___broken_10 = (bool)1;
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
// System.Void HealthCollectible::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCollectible_OnTriggerEnter2D_m4FDB690C9905B99FB2343243B953F365DFF44EB6 (HealthCollectible_t584680E50251F9F248F6E212B0F4C2E6F04C1825* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* V_0 = NULL;
	{
		// RubyController controller = other.GetComponent<RubyController>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_1;
		L_1 = Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2(L_0, Component_GetComponent_TisRubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_mB3445F8DE8DB99703F45E0A92B2A2FE6D8EEE1B2_RuntimeMethod_var);
		V_0 = L_1;
		// if (controller != null)
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// if (controller.health < controller.maxHealth)
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_4 = V_0;
		int32_t L_5;
		L_5 = RubyController_get_health_m17FD25986C3500ACABBD6199E71E5F1426C09DEF_inline(L_4, NULL);
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_6 = V_0;
		int32_t L_7 = L_6->___maxHealth_6;
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_003c;
		}
	}
	{
		// controller.ChangeHealth(1);
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_8 = V_0;
		RubyController_ChangeHealth_m1979C353BD6CBF2BD5376D2F5C25FCE1A50DACFD(L_8, 1, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
		// controller.characterOneShot(collectedClip);
		RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* L_10 = V_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = __this->___collectedClip_4;
		RubyController_characterOneShot_m91B817F984E2FBD4EFC41A1EE3184BE2B6A62853(L_10, L_11, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void HealthCollectible::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthCollectible__ctor_m12358E849AA9B58B3D1ACBD327AD7ABF4124829C (HealthCollectible_t584680E50251F9F248F6E212B0F4C2E6F04C1825* __this, const RuntimeMethod* method) 
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
// System.Void NonPlayerCharacter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonPlayerCharacter_Start_mE4EF1AF2ECDFB9A68196A51B025E105E1FD9F19F (NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* __this, const RuntimeMethod* method) 
{
	{
		// dialogBox.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___dialogBox_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// timerDisplay = -1.0f;
		__this->___timerDisplay_8 = (-1.0f);
		// }
		return;
	}
}
// System.Void NonPlayerCharacter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonPlayerCharacter_Update_mA678996FD3F8B86A1DBCFEB897DE59E5F8C907BE (NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.X))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)120), NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// musicSource.clip = musicClipOne;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___musicSource_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___musicClipOne_4;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_1, L_2, NULL);
		// musicSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___musicSource_5;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_0025:
	{
		// if (timerDisplay >= 0)
		float L_4 = __this->___timerDisplay_8;
		if ((!(((float)L_4) >= ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// timerDisplay -= Time.deltaTime;
		float L_5 = __this->___timerDisplay_8;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timerDisplay_8 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		// if (timerDisplay < 0)
		float L_7 = __this->___timerDisplay_8;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// dialogBox.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___dialogBox_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void NonPlayerCharacter::DisplayDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonPlayerCharacter_DisplayDialog_m7D656B57DE2AC52D02A689C0E7231EEBE964F8AA (NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* __this, const RuntimeMethod* method) 
{
	{
		// timerDisplay = displayTime;
		float L_0 = __this->___displayTime_6;
		__this->___timerDisplay_8 = L_0;
		// dialogBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___dialogBox_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void NonPlayerCharacter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonPlayerCharacter__ctor_mED116625B7E1C97F73FAE84C5BADBFA539383412 (NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* __this, const RuntimeMethod* method) 
{
	{
		// public float displayTime = 4.0f;
		__this->___displayTime_6 = (4.0f);
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
// System.Void PauseMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Start_m4BBF1E67B42A2E936C792E83778ADCD87DE3C80E (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_TogglePauseMenu_mC6D34A242DF741AF1EC1430E372E81D666A1C444_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_loadNewScene_m83F6094A8FF5531063F97F1BFAE5449A8AB5461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Button>().onClick.AddListener(TogglePauseMenu);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)PauseMenu_TogglePauseMenu_mC6D34A242DF741AF1EC1430E372E81D666A1C444_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// btn_Restart.onClick.AddListener(loadNewScene);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___btn_Restart_7;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)PauseMenu_loadNewScene_m83F6094A8FF5531063F97F1BFAE5449A8AB5461F_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// pauseMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___pauseMenu_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// btn_goRestart.onClick.AddListener(loadNewScene);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___btn_goRestart_8;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)PauseMenu_loadNewScene_m83F6094A8FF5531063F97F1BFAE5449A8AB5461F_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::TogglePauseMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_TogglePauseMenu_mC6D34A242DF741AF1EC1430E372E81D666A1C444 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// if (pauseMenu.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenu_4;
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// pauseMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pauseMenu_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		return;
	}

IL_001a:
	{
		// pauseMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___pauseMenu_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// musicSource.clip = musicClipOne;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___musicSource_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___musicClipOne_6;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_5, NULL);
		// musicSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___musicSource_5;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::loadNewScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_loadNewScene_m83F6094A8FF5531063F97F1BFAE5449A8AB5461F (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainScene", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, 0, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
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
// System.Void Projectile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Awake_m12ADD9C3E81141584C8879C9ECB35F6C89E9FEB2 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigidbody2d_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody2d_4), (void*)L_0);
		// projectileAudio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___projectileAudio_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileAudio_5), (void*)L_1);
		// projectileAudio.volume = 0.35f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___projectileAudio_5;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_2, (0.349999994f), NULL);
		// projectileAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___projectileAudio_5;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// }
		return;
	}
}
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m6E056CDE2DC25EDBA5DA3F4D9B9B9A69EC656737 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (transform.position.magnitude > 1000.0f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(1000.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// selfDestruct = true;
		__this->___selfDestruct_8 = (bool)1;
	}

IL_0021:
	{
		// DestroyProjectile();
		Projectile_DestroyProjectile_mD43747147CB810F89B645EAF6F829FD7D9F30476(__this, NULL);
		// }
		return;
	}
}
// System.Void Projectile::DestroyProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_DestroyProjectile_mD43747147CB810F89B645EAF6F829FD7D9F30476 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (selfDestruct && !selfDestructing)
		bool L_0 = __this->___selfDestruct_8;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->___selfDestructing_9;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// selfDestructing = true;
		__this->___selfDestructing_9 = (bool)1;
	}

IL_0017:
	{
		// if (selfDestruct && selfDestructing)
		bool L_2 = __this->___selfDestruct_8;
		if (!L_2)
		{
			goto IL_007c;
		}
	}
	{
		bool L_3 = __this->___selfDestructing_9;
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// timeToDestroy = timeToDestroy - Time.deltaTime;
		float L_4 = __this->___timeToDestroy_11;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeToDestroy_11 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// if (timeToDestroy < 1)
		float L_6 = __this->___timeToDestroy_11;
		if ((!(((float)L_6) < ((float)(1.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// GetComponent<Renderer>().material.color = Color.Lerp(GetComponent<Renderer>().material.color, Color.clear, Time.deltaTime / timeToDestroy);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_10, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_14 = __this->___timeToDestroy_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_11, L_12, ((float)(L_13/L_14)), NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_15, NULL);
	}

IL_007c:
	{
		// if(timeToDestroy < 0)
		float L_16 = __this->___timeToDestroy_11;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_17, NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Projectile::Launch(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Launch_m1FBBD2E78F0B34277B0A88CAD2BDF3E5D6BD70D1 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, float ___force1, const RuntimeMethod* method) 
{
	{
		// rigidbody2d.AddForce(direction * force);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigidbody2d_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___direction0;
		float L_2 = ___force1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Projectile::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnCollisionEnter2D_m8D5A050EAB1FB30E0547A8C8D9CB5AF962905413 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m96CAC8736966651D1D682678C759A2D6BA5D6B9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5_m915AD4C4329AD096A8384D71619B5F3A8F7D5847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* V_0 = NULL;
	HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* V_1 = NULL;
	{
		// if (Random.Range(0, 2) == 0)
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// projectileAudio.PlayOneShot(cogCollideClip_01);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___projectileAudio_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___cogCollideClip_01_6;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_1, L_2, NULL);
		goto IL_002d;
	}

IL_001c:
	{
		// projectileAudio.PlayOneShot(cogCollideClip_02);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___projectileAudio_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___cogCollideClip_02_7;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
	}

IL_002d:
	{
		// EnemyController e = other.collider.GetComponent<EnemyController>();
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_5 = ___other0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6;
		L_6 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_5, NULL);
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_7;
		L_7 = Component_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m96CAC8736966651D1D682678C759A2D6BA5D6B9C(L_6, Component_GetComponent_TisEnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A_m96CAC8736966651D1D682678C759A2D6BA5D6B9C_RuntimeMethod_var);
		V_0 = L_7;
		// if (e != null)
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// e.Fix();
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_10 = V_0;
		EnemyController_Fix_m63BF0FF1CFE178CA94B44F0D444E0E7EB776F7E9(L_10, NULL);
	}

IL_0048:
	{
		// selfDestruct = true;
		__this->___selfDestruct_8 = (bool)1;
		// DestroyProjectile();
		Projectile_DestroyProjectile_mD43747147CB810F89B645EAF6F829FD7D9F30476(__this, NULL);
		// HardEnemyController h = other.collider.GetComponent<HardEnemyController>();
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_11 = ___other0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_12;
		L_12 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_11, NULL);
		HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* L_13;
		L_13 = Component_GetComponent_TisHardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5_m915AD4C4329AD096A8384D71619B5F3A8F7D5847(L_12, Component_GetComponent_TisHardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5_m915AD4C4329AD096A8384D71619B5F3A8F7D5847_RuntimeMethod_var);
		V_1 = L_13;
		// if (h != null)
		HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		// h.Fix();
		HardEnemyController_t82185E009001197F0A3C52E7661EBA5DFF34B1D5* L_16 = V_1;
		HardEnemyController_Fix_m26CC5A7680E602F68F1BFDE828D280C37A492512(L_16, NULL);
	}

IL_0070:
	{
		// selfDestruct = true;
		__this->___selfDestruct_8 = (bool)1;
		// DestroyProjectile();
		Projectile_DestroyProjectile_mD43747147CB810F89B645EAF6F829FD7D9F30476(__this, NULL);
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m9CB69FCF9C97712F4578D9686861E9694A270A58 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
{
	{
		// float timeToDestroy = 2.0f;
		__this->___timeToDestroy_11 = (2.0f);
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
// System.Void Quests::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_Start_mDF671E436FCDAE5AA4714EA29DDA169541BC9DFF (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral740E3B3010E24B8D4772086FCB435D0693CC2E80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// botQuestBots = GameObject.FindGameObjectsWithTag("Bots");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral740E3B3010E24B8D4772086FCB435D0693CC2E80, NULL);
		__this->___botQuestBots_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___botQuestBots_6), (void*)L_0);
		// botQuest_BotsLeft = botQuestBots.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___botQuestBots_6;
		__this->___botQuest_BotsLeft_7 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// questAudio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___questAudio_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___questAudio_4), (void*)L_2);
		// questAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___questAudio_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// UpdateBotCounter();
		Quests_UpdateBotCounter_m8756B9D92F40A0010B03CD781F8744E51125C263(__this, NULL);
		// }
		return;
	}
}
// System.Void Quests::QuestOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_QuestOneShot_mC967DDA01185C1F899A9C1FAE925BD2FDDAD309D (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	{
		// questAudio.PlayOneShot(clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___questAudio_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Quests::BotFixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_BotFixed_mDAB668A08AF4EDCAABDF30399E8BB6E4884D2BC9 (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768225881ED3A47F01037524E17768FE6AD0A335);
		s_Il2CppMethodInitialized = true;
	}
	{
		// botQuest_BotsLeft--;
		int32_t L_0 = __this->___botQuest_BotsLeft_7;
		__this->___botQuest_BotsLeft_7 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// UpdateBotCounter();
		Quests_UpdateBotCounter_m8756B9D92F40A0010B03CD781F8744E51125C263(__this, NULL);
		// if (botQuest_BotsLeft == 0)
		int32_t L_1 = __this->___botQuest_BotsLeft_7;
		if (L_1)
		{
			goto IL_003f;
		}
	}
	{
		// QuestOneShot(questAudioClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___questAudioClip_5;
		Quests_QuestOneShot_mC967DDA01185C1F899A9C1FAE925BD2FDDAD309D(__this, L_2, NULL);
		// UpdateBotCounter("Quest Complete");
		Quests_UpdateBotCounter_m72ABA66AB2B8C9BC01BBBE4D1E2A3875A10F60DF(__this, _stringLiteral768225881ED3A47F01037524E17768FE6AD0A335, NULL);
		// dialogBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___dialogBox_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Quests::UpdateBotCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_UpdateBotCounter_m8756B9D92F40A0010B03CD781F8744E51125C263 (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// botCounter.GetComponent<TMPro.TextMeshProUGUI>().text = botQuest_BotsLeft.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___botCounter_8;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_0, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		int32_t* L_2 = (&__this->___botQuest_BotsLeft_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void Quests::UpdateBotCounter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_UpdateBotCounter_m72ABA66AB2B8C9BC01BBBE4D1E2A3875A10F60DF (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// botCounter.GetComponent<TMPro.TextMeshProUGUI>().text = s;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___botCounter_8;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_0, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		String_t* L_2 = ___s0;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Quests::DisplayDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests_DisplayDialog_m971BAE7A24C2D1889D8D592EB159B0EF0064A46D (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// botQuest_BotsLeft--;
		int32_t L_0 = __this->___botQuest_BotsLeft_7;
		__this->___botQuest_BotsLeft_7 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// dialogBox.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___dialogBox_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// botCounter.GetComponent<TMPro.TextMeshProUGUI>().text = botQuest_BotsLeft.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___botCounter_8;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3;
		L_3 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_2, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		int32_t* L_4 = (&__this->___botQuest_BotsLeft_7);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_5);
		// if (botQuest_BotsLeft >= 0)
		int32_t L_6 = __this->___botQuest_BotsLeft_7;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		// dialogBox.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___dialogBox_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_004a:
	{
		// if (botQuest_BotsLeft == 0)
		int32_t L_8 = __this->___botQuest_BotsLeft_7;
		if (L_8)
		{
			goto IL_005e;
		}
	}
	{
		// dialogBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___dialogBox_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void Quests::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quests__ctor_m42E05656C46455AD13F78DAA6D135AC7F40F074B (Quests_t8B8FDC9A663DB42426834A479FAA33003F9BBD18* __this, const RuntimeMethod* method) 
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
// System.Int32 RubyController::get_health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RubyController_get_health_m17FD25986C3500ACABBD6199E71E5F1426C09DEF (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	{
		// public int health { get { return currentHealth; } }
		int32_t L_0 = __this->___currentHealth_8;
		return L_0;
	}
}
// System.Int32 RubyController::get_ammo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RubyController_get_ammo_m84223D52B84CAEFAB75D16A01B151EA6692A98D1 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ammo { get { return currentAmmo; } }
		int32_t L_0 = ((RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_StaticFields*)il2cpp_codegen_static_fields_for(RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var))->___currentAmmo_13;
		return L_0;
	}
}
// System.Void RubyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_Start_m9C15E34D7B9403AB957282D4E00100E9B710AA22 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0D91FE27B46431BDA1A889AC9D6FD7F18D8039B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigidbody2d_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody2d_14), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_15), (void*)L_1);
		// currentHealth = maxHealth;
		int32_t L_2 = __this->___maxHealth_6;
		__this->___currentHealth_8 = L_2;
		// characterAudio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___characterAudio_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characterAudio_17), (void*)L_3);
		// currentAmmo = 20;
		((RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_StaticFields*)il2cpp_codegen_static_fields_for(RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var))->___currentAmmo_13 = ((int32_t)20);
		// walkingAudioObject = transform.Find(N).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteralA0D91FE27B46431BDA1A889AC9D6FD7F18D8039B, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___walkingAudioObject_23 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkingAudioObject_23), (void*)L_6);
		// runningAudio = walkingAudioObject.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___walkingAudioObject_23;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8;
		L_8 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_7, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___runningAudio_24 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runningAudio_24), (void*)L_8);
		// }
		return;
	}
}
// System.Void RubyController::characterOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_characterOneShot_m91B817F984E2FBD4EFC41A1EE3184BE2B6A62853 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	{
		// characterAudio.PlayOneShot(clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___characterAudio_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void RubyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_Update_mC080E53CA22E922E69C2EA07E0E2D6604B3CA2BC (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A_m8F0C09061CC9ABD2A03E142F71F8C31440984ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC9B33F97AAC6E5005DC884523FEF49CFCCC7717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC594AA16018C9298B4AF96B76BCBCF175D9FEC2);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* V_3 = NULL;
	{
		// AmmoCounter();
		RubyController_AmmoCounter_m3F28534B22E9DEC38E1FF69C1C8C073917B8C1E5(__this, NULL);
		// if (!gameOverState)
		bool L_0 = __this->___gameOverState_34;
		if (L_0)
		{
			goto IL_0299;
		}
	}
	{
		// horizontal = Input.GetAxis("Horizontal");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___horizontal_35 = L_1;
		// vertical = Input.GetAxis("Vertical");
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		__this->___vertical_36 = L_2;
		// Vector2 position = rigidbody2d.position;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rigidbody2d_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_3, NULL);
		V_0 = L_4;
		// position.x = position.x + speed * horizontal * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___x_0;
		float L_7 = __this->___speed_5;
		float L_8 = __this->___horizontal_35;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_7, L_8)), L_9))));
		// position.y = position.y + speed * vertical * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___y_1;
		float L_12 = __this->___speed_5;
		float L_13 = __this->___vertical_36;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, L_13)), L_14))));
		// Vector2 move = new Vector2(horizontal, vertical);
		float L_15 = __this->___horizontal_35;
		float L_16 = __this->___vertical_36;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_15, L_16, NULL);
		// if (!Mathf.Approximately(move.x, 0.0f) || !Mathf.Approximately(move.y, 0.0f))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		float L_18 = L_17.___x_0;
		bool L_19;
		L_19 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_18, (0.0f), NULL);
		if (!L_19)
		{
			goto IL_00b6;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		float L_21 = L_20.___y_1;
		bool L_22;
		L_22 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_21, (0.0f), NULL);
		if (L_22)
		{
			goto IL_00e1;
		}
	}

IL_00b6:
	{
		// lookDirection.Set(move.x, move.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___lookDirection_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		float L_25 = L_24.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		float L_27 = L_26.___y_1;
		Vector2_Set_m42A76E817B65A9626E1F5E900EB67F037B3E1ED0_inline(L_23, L_25, L_27, NULL);
		// lookDirection.Normalize();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->___lookDirection_16);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_28, NULL);
		// startedRunning = true;
		__this->___startedRunning_21 = (bool)1;
		goto IL_011e;
	}

IL_00e1:
	{
		// else if (Mathf.Approximately(move.x, 0.0f) || Mathf.Approximately(move.y, 0.0f))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
		float L_30 = L_29.___x_0;
		bool L_31;
		L_31 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_30, (0.0f), NULL);
		if (L_31)
		{
			goto IL_0105;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_1;
		float L_33 = L_32.___y_1;
		bool L_34;
		L_34 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_33, (0.0f), NULL);
		if (!L_34)
		{
			goto IL_011e;
		}
	}

IL_0105:
	{
		// isRunning = false;
		__this->___isRunning_22 = (bool)0;
		// startedRunning = false;
		__this->___startedRunning_21 = (bool)0;
		// runningAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_35 = __this->___runningAudio_24;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_35, NULL);
	}

IL_011e:
	{
		// if (startedRunning && !isRunning)
		bool L_36 = __this->___startedRunning_21;
		if (!L_36)
		{
			goto IL_0140;
		}
	}
	{
		bool L_37 = __this->___isRunning_22;
		if (L_37)
		{
			goto IL_0140;
		}
	}
	{
		// isRunning = true;
		__this->___isRunning_22 = (bool)1;
		// runningAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_38 = __this->___runningAudio_24;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_38, NULL);
	}

IL_0140:
	{
		// animator.SetFloat("Look X", lookDirection.x);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_39 = __this->___animator_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (&__this->___lookDirection_16);
		float L_41 = L_40->___x_0;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_39, _stringLiteralFC594AA16018C9298B4AF96B76BCBCF175D9FEC2, L_41, NULL);
		// animator.SetFloat("Look Y", lookDirection.y);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42 = __this->___animator_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___lookDirection_16);
		float L_44 = L_43->___y_1;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_42, _stringLiteralCC9B33F97AAC6E5005DC884523FEF49CFCCC7717, L_44, NULL);
		// animator.SetFloat("Speed", move.magnitude);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_45 = __this->___animator_15;
		float L_46;
		L_46 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_45, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_46, NULL);
		// position = position + move * speed * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_1;
		float L_49 = __this->___speed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_48, L_49, NULL);
		float L_51;
		L_51 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_50, L_51, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_47, L_52, NULL);
		V_0 = L_53;
		// rigidbody2d.MovePosition(position);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_54 = __this->___rigidbody2d_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_0;
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_54, L_55, NULL);
		// if (isInvincible)
		bool L_56 = __this->___isInvincible_9;
		if (!L_56)
		{
			goto IL_01e4;
		}
	}
	{
		// invincibleTimer -= Time.deltaTime;
		float L_57 = __this->___invincibleTimer_10;
		float L_58;
		L_58 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___invincibleTimer_10 = ((float)il2cpp_codegen_subtract(L_57, L_58));
		// if (invincibleTimer < 0)
		float L_59 = __this->___invincibleTimer_10;
		if ((!(((float)L_59) < ((float)(0.0f)))))
		{
			goto IL_01e4;
		}
	}
	{
		// isInvincible = false;
		__this->___isInvincible_9 = (bool)0;
	}

IL_01e4:
	{
		// if (Input.GetKeyDown(KeyCode.C) && ammo > 0)
		bool L_60;
		L_60 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)99), NULL);
		if (!L_60)
		{
			goto IL_0214;
		}
	}
	{
		int32_t L_61;
		L_61 = RubyController_get_ammo_m84223D52B84CAEFAB75D16A01B151EA6692A98D1_inline(__this, NULL);
		if ((((int32_t)L_61) <= ((int32_t)0)))
		{
			goto IL_0214;
		}
	}
	{
		// currentAmmo--;
		int32_t L_62 = ((RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_StaticFields*)il2cpp_codegen_static_fields_for(RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var))->___currentAmmo_13;
		((RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_StaticFields*)il2cpp_codegen_static_fields_for(RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var))->___currentAmmo_13 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		// characterOneShot(cogThrowClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_63 = __this->___cogThrowClip_18;
		RubyController_characterOneShot_m91B817F984E2FBD4EFC41A1EE3184BE2B6A62853(__this, L_63, NULL);
		// Launch();
		RubyController_Launch_mCBFE8A372897F12F44AB2F5F1739BB4FBF9DB050(__this, NULL);
	}

IL_0214:
	{
		// if (Input.GetKeyDown(KeyCode.X))
		bool L_64;
		L_64 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)120), NULL);
		if (!L_64)
		{
			goto IL_028b;
		}
	}
	{
		// RaycastHit2D hit = Physics2D.Raycast(rigidbody2d.position + Vector2.up * 0.2f, lookDirection, 1.5f, LayerMask.GetMask("NPC"));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_65 = __this->___rigidbody2d_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_65, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		L_67 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
		L_68 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_67, (0.200000003f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		L_69 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_66, L_68, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = __this->___lookDirection_16;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		ArrayElementTypeCheck (L_72, _stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C);
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7FDAD2EDFD927C3BC792AEA17BD4352000FEA47C);
		int32_t L_73;
		L_73 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_72, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_74;
		L_74 = Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F(L_69, L_70, (1.5f), L_73, NULL);
		V_2 = L_74;
		// if (hit.collider != null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_75;
		L_75 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_75, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_76)
		{
			goto IL_028b;
		}
	}
	{
		// NonPlayerCharacter character = hit.collider.GetComponent<NonPlayerCharacter>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_77;
		L_77 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_2), NULL);
		NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* L_78;
		L_78 = Component_GetComponent_TisNonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A_m8F0C09061CC9ABD2A03E142F71F8C31440984ABA(L_77, Component_GetComponent_TisNonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A_m8F0C09061CC9ABD2A03E142F71F8C31440984ABA_RuntimeMethod_var);
		V_3 = L_78;
		// if (character != null)
		NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* L_79 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_79, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_80)
		{
			goto IL_028b;
		}
	}
	{
		// character.DisplayDialog();
		NonPlayerCharacter_tE7F65B6E2B8A6FB52170B8EF96C602AB58A58B1A* L_81 = V_3;
		NonPlayerCharacter_DisplayDialog_m7D656B57DE2AC52D02A689C0E7231EEBE964F8AA(L_81, NULL);
	}

IL_028b:
	{
		// DamagaeFlash(false);
		RubyController_DamagaeFlash_m3F46B4483788634B43516AD880BE7A8663B387F1(__this, (bool)0, NULL);
		// HealFlash(false);
		RubyController_HealFlash_mE2A777C1F825BB894A5912DB9C33930548FD81F1(__this, (bool)0, NULL);
	}

IL_0299:
	{
		// }
		return;
	}
}
// System.Void RubyController::ChangeHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_ChangeHealth_m1979C353BD6CBF2BD5376D2F5C25FCE1A50DACFD (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	{
		// if (!gameOverState)
		bool L_0 = __this->___gameOverState_34;
		if (L_0)
		{
			goto IL_00b5;
		}
	}
	{
		// if (amount < 0)
		int32_t L_1 = ___amount0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// if (isInvincible)
		bool L_2 = __this->___isInvincible_9;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// isInvincible = true;
		__this->___isInvincible_9 = (bool)1;
		// invincibleTimer = timeInvincible;
		float L_3 = __this->___timeInvincible_7;
		__this->___invincibleTimer_10 = L_3;
	}

IL_002b:
	{
		// if (amount < 0)
		int32_t L_4 = ___amount0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// characterOneShot(playerHitClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___playerHitClip_19;
		RubyController_characterOneShot_m91B817F984E2FBD4EFC41A1EE3184BE2B6A62853(__this, L_5, NULL);
		// characterDamaged = true;
		__this->___characterDamaged_28 = (bool)1;
		goto IL_004f;
	}

IL_0044:
	{
		// else if (amount > 0)
		int32_t L_6 = ___amount0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		// characterHealed = true;
		__this->___characterHealed_29 = (bool)1;
	}

IL_004f:
	{
		// DamagaeFlash(characterDamaged);
		bool L_7 = __this->___characterDamaged_28;
		RubyController_DamagaeFlash_m3F46B4483788634B43516AD880BE7A8663B387F1(__this, L_7, NULL);
		// HealFlash(characterHealed);
		bool L_8 = __this->___characterHealed_29;
		RubyController_HealFlash_mE2A777C1F825BB894A5912DB9C33930548FD81F1(__this, L_8, NULL);
		// currentHealth = Mathf.Clamp(currentHealth + amount, 0, maxHealth);
		int32_t L_9 = __this->___currentHealth_8;
		int32_t L_10 = ___amount0;
		int32_t L_11 = __this->___maxHealth_6;
		int32_t L_12;
		L_12 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_add(L_9, L_10)), 0, L_11, NULL);
		__this->___currentHealth_8 = L_12;
		// UIHealthBar.instance.SetValue(currentHealth / (float)maxHealth);
		UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* L_13;
		L_13 = UIHealthBar_get_instance_mDEAA94410B515DBE4CDC7025375B5433B6AB6CB1_inline(NULL);
		int32_t L_14 = __this->___currentHealth_8;
		int32_t L_15 = __this->___maxHealth_6;
		UIHealthBar_SetValue_m8E4C4D6F4D7E1C3C99283FE92D73AF1D9F480883(L_13, ((float)(((float)L_14)/((float)L_15))), NULL);
		// if (currentHealth == 0)
		int32_t L_16 = __this->___currentHealth_8;
		if (L_16)
		{
			goto IL_00b5;
		}
	}
	{
		// GameOverMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___GameOverMenu_33;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// gameOverState = true;
		__this->___gameOverState_34 = (bool)1;
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void RubyController::Launch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_Launch_mCBFE8A372897F12F44AB2F5F1739BB4FBF9DB050 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC14434915C247BF2C63C596EA8744B7C001546AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject projectileObject = Instantiate(projectilePrefab, rigidbody2d.position + Vector2.up * 0.5f, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___projectilePrefab_11;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rigidbody2d_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_2, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Projectile projectile = projectileObject.GetComponent<Projectile>();
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_9;
		L_9 = GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183(L_8, GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var);
		// projectile.Launch(lookDirection, 400);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___lookDirection_16;
		Projectile_Launch_m1FBBD2E78F0B34277B0A88CAD2BDF3E5D6BD70D1(L_9, L_10, (400.0f), NULL);
		// animator.SetTrigger("Launch");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_11, _stringLiteralC14434915C247BF2C63C596EA8744B7C001546AF, NULL);
		// }
		return;
	}
}
// System.Void RubyController::DamagaeFlash(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_DamagaeFlash_m3F46B4483788634B43516AD880BE7A8663B387F1 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, bool ___damaged0, const RuntimeMethod* method) 
{
	{
		// if (damaged)
		bool L_0 = ___damaged0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// damageImage.color = damageFlashColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___damageImage_25;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___damageFlashColor_26;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		goto IL_0042;
	}

IL_0016:
	{
		// damageImage.color = Color.Lerp(damageImage.color, Color.clear, Time.deltaTime / damageFlashSpeed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___damageImage_25;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___damageImage_25;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8 = __this->___damageFlashSpeed_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_5, L_6, ((float)(L_7/L_8)), NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_9);
	}

IL_0042:
	{
		// characterDamaged = false;
		__this->___characterDamaged_28 = (bool)0;
		// }
		return;
	}
}
// System.Void RubyController::HealFlash(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_HealFlash_mE2A777C1F825BB894A5912DB9C33930548FD81F1 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, bool ___healed0, const RuntimeMethod* method) 
{
	{
		// if (healed)
		bool L_0 = ___healed0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// healImage.color = healFlashColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___healImage_30;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___healFlashColor_31;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		goto IL_0042;
	}

IL_0016:
	{
		// healImage.color = Color.Lerp(healImage.color, Color.clear, Time.deltaTime / healFlashSpeed);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___healImage_30;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___healImage_30;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8 = __this->___healFlashSpeed_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_5, L_6, ((float)(L_7/L_8)), NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_9);
	}

IL_0042:
	{
		// characterHealed= false;
		__this->___characterHealed_29 = (bool)0;
		// }
		return;
	}
}
// System.Void RubyController::AmmoCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_AmmoCounter_m3F28534B22E9DEC38E1FF69C1C8C073917B8C1E5 (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral485F7840A75277C7D76C4F7907AFAC50388099AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ammoText.text = "Cogs: " + currentAmmo;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___ammoText_12;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_StaticFields*)il2cpp_codegen_static_fields_for(RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var))->___currentAmmo_13), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral485F7840A75277C7D76C4F7907AFAC50388099AE, L_1, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void RubyController::AmmoUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController_AmmoUp_m02E907261D27E14FA65D2C538308ACD00F6C200D (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentAmmo = currentAmmo + 5;
		int32_t L_0 = ((RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_StaticFields*)il2cpp_codegen_static_fields_for(RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var))->___currentAmmo_13;
		((RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_StaticFields*)il2cpp_codegen_static_fields_for(RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var))->___currentAmmo_13 = ((int32_t)il2cpp_codegen_add(L_0, 5));
		// }
		return;
	}
}
// System.Void RubyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RubyController__ctor_mC611888675D6C3D06B98E544EF9C775C61BD091B (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 3.0f;
		__this->___speed_5 = (3.0f);
		// public int maxHealth = 5;
		__this->___maxHealth_6 = 5;
		// public float timeInvincible = 2.0f;
		__this->___timeInvincible_7 = (2.0f);
		// Vector2 lookDirection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___lookDirection_16 = L_0;
		// public float damageFlashSpeed = 0.5f;
		__this->___damageFlashSpeed_27 = (0.5f);
		// public float healFlashSpeed = 0.5f;
		__this->___healFlashSpeed_32 = (0.5f);
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
// UIHealthBar UIHealthBar::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* UIHealthBar_get_instance_mDEAA94410B515DBE4CDC7025375B5433B6AB6CB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIHealthBar instance { get; private set; }
		UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* L_0 = ((UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_StaticFields*)il2cpp_codegen_static_fields_for(UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UIHealthBar::set_instance(UIHealthBar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBar_set_instance_m2146214ECF454C66446389D5BF39379EABD3A97C (UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIHealthBar instance { get; private set; }
		UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* L_0 = ___value0;
		((UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_StaticFields*)il2cpp_codegen_static_fields_for(UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_StaticFields*)il2cpp_codegen_static_fields_for(UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void UIHealthBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBar_Awake_m7EBA3B339C9617339D3097B12DC8C24119818C39 (UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* __this, const RuntimeMethod* method) 
{
	{
		// instance = this;
		UIHealthBar_set_instance_m2146214ECF454C66446389D5BF39379EABD3A97C_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void UIHealthBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBar_Start_m2C4E947FCAB2873676666EE717DD77009543CFCC (UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// originalSize = mask.rectTransform.rect.width;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___mask_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		__this->___originalSize_6 = L_3;
		// }
		return;
	}
}
// System.Void UIHealthBar::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBar_SetValue_m8E4C4D6F4D7E1C3C99283FE92D73AF1D9F480883 (UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// mask.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, originalSize * value);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___mask_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		float L_2 = __this->___originalSize_6;
		float L_3 = ___value0;
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_1, 0, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void UIHealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBar__ctor_m2778C5B550E014EEA9E93ECE7042A5E5E9CD721F (UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RubyController_get_health_m17FD25986C3500ACABBD6199E71E5F1426C09DEF_inline (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	{
		// public int health { get { return currentHealth; } }
		int32_t L_0 = __this->___currentHealth_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Set_m42A76E817B65A9626E1F5E900EB67F037B3E1ED0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___newX0, float ___newY1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_0 = L_0;
		float L_1 = ___newY1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RubyController_get_ammo_m84223D52B84CAEFAB75D16A01B151EA6692A98D1_inline (RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ammo { get { return currentAmmo; } }
		int32_t L_0 = ((RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_StaticFields*)il2cpp_codegen_static_fields_for(RubyController_tBB7EDCFD805F0949AAFC9FFF544EBF891ED67CAA_il2cpp_TypeInfo_var))->___currentAmmo_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* UIHealthBar_get_instance_mDEAA94410B515DBE4CDC7025375B5433B6AB6CB1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIHealthBar instance { get; private set; }
		UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* L_0 = ((UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_StaticFields*)il2cpp_codegen_static_fields_for(UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIHealthBar_set_instance_m2146214ECF454C66446389D5BF39379EABD3A97C_inline (UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIHealthBar instance { get; private set; }
		UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45* L_0 = ___value0;
		((UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_StaticFields*)il2cpp_codegen_static_fields_for(UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_StaticFields*)il2cpp_codegen_static_fields_for(UIHealthBar_tFA2114FBF8DFDE69DE0F47752AB0F17000D87B45_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
