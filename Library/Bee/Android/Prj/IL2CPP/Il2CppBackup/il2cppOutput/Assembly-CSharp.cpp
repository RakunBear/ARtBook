#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<System.Byte[]>>
struct Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>>
struct Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F;
// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F;
// System.Action`1<Firebase.Storage.DownloadState>
struct Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ZXing.Result>
struct Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6;
// System.Action`1<ZXing.ResultPoint>
struct Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// System.Action`1<Firebase.Storage.UploadState>
struct Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>
struct Dictionary_2_t6B2D56F200C03AE40F453FB3EFF2F2200DA34044;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.IProgress`1<Firebase.Storage.DownloadState>
struct IProgress_1_t2C34C9040351AC8D93BBF40BBEF6974B9F6379D5;
// System.IProgress`1<Firebase.Storage.UploadState>
struct IProgress_1_t62330E5743A56FE85EFF7A65AD1B8340D8533FB7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.Mat>
struct List_1_t658E3C431BA7FDF30CD393A43C448012592EE831;
// System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>
struct List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct List_1_t23F59D024DFD759F7295EBC6C25BD5F56992C950;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.String,System.Byte[]>
struct SerializableDictionary_2_t43C5D129793FC3216489482F7A8B933128D7F0A8;
// Firebase.Storage.StorageProgress`1<Firebase.Storage.DownloadState>
struct StorageProgress_1_t9508C56782D1B24C4F6E39A08FABB7A3DFE1E161;
// Firebase.Storage.StorageProgress`1<System.Object>
struct StorageProgress_1_t8D1AECD2DDC816BCEA5A528339506DFC5A2C5FD9;
// Firebase.Storage.StorageProgress`1<Firebase.Storage.UploadState>
struct StorageProgress_1_t83B8245748D55F1E37B32C976A36D62B7E2AC8F8;
// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>
struct Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.XR.ARFoundation.ARAnchor[]
struct ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
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
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// OpenCVForUnity.CoreModule.Mat[]
struct MatU5BU5D_tFE2BA7336110CADD12198EFE8E9CBDBCFE890BC9;
// OpenCVForUnity.CoreModule.MatOfPoint[]
struct MatOfPointU5BU5D_t5F1282E8AF898909E0A8FA045F9DC9F0D7ABE037;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// OpenCVForUnity.CoreModule.Point[]
struct PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
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
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// AndroidPermissionCallback
struct AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67;
// AndroidPermissionsManager
struct AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraRenderEvent
struct CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CreateFBList
struct CreateFBList_tB0113EC6C6FCF9E04911AA16CDA3C93A21688324;
// DataBox
struct DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912;
// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A;
// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D;
// ZXing.Common.DecodingOptions
struct DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// OpenCVForUnity.DisposableObject
struct DisposableObject_t80A982D8DD51A4FAC07BC026740796005D3FA69E;
// DocScan
struct DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875;
// Firebase.Storage.DownloadState
struct DownloadState_tEEE10B9954757DC1A3FCDB34BDA68A66B6DB89E7;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// FirebaseConnection
struct FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960;
// Firebase.Storage.FirebaseStorage
struct FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1;
// Firebase.Storage.FirebaseStorageInternal
struct FirebaseStorageInternal_tD6FAEA0321B7D20A820BB25CDC18EFE11F282145;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.XR.ARSubsystems.IReferenceImageLibrary
struct IReferenceImageLibrary_t2F76E7A6C336CA322762A89CA2B00CAEA09FC476;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569;
// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D;
// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1;
// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F;
// Firebase.Database.InternalQuery
struct InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// LobbyManager
struct LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797;
// OpenCVForUnity.CoreModule.Mat
struct Mat_t63C614C1527F3B965A572FEA6C95C5552E219875;
// OpenCVForUnity.CoreModule.MatOfInt
struct MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE;
// OpenCVForUnity.CoreModule.MatOfPoint
struct MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE;
// OpenCVForUnity.CoreModule.MatOfPoint2f
struct MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// Firebase.Storage.MetadataChange
struct MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A;
// Firebase.Storage.MetadataInternal
struct MetadataInternal_tD7FA31D207CA851452109FF780FE05B26EC63A05;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Firebase.Storage.Internal.ModuleLogger
struct ModuleLogger_tC5B741625D75BCB0E54696B8C07E113E68C93D97;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary
struct MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8;
// Navigation
struct Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// OpenCVForUnity.CoreModule.Point
struct Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// PreviewScan
struct PreviewScan_t2475026AE7698ACA093C3E490C91289788F3B399;
// QRCodeDetectController
struct QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104;
// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// ReadQRCode
struct ReadQRCode_t4544083189C582CBE8568DF87F763D170C736B8E;
// ZXing.Reader
struct Reader_t1A9C7CADF7A2C1EDCB670DAA63F259E7B798FE4C;
// ReaderManager
struct ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F;
// OpenCVForUnity.CoreModule.Rect
struct Rect_tBE1B7FF0DEE1265DD66FED309EB53E20F8333C82;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF;
// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary
struct RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SaveWriteTexture
struct SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097;
// OpenCVForUnity.CoreModule.Scalar
struct Scalar_tE735F77B112DB70B398114EC1C89E947307001D7;
// ScanSceneManager
struct ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A;
// SceneLoad
struct SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// OpenCVForUnity.CoreModule.Size
struct Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Firebase.Storage.StorageMetadata
struct StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099;
// Firebase.Storage.StorageReference
struct StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019;
// Firebase.Storage.StorageReferenceInternal
struct StorageReferenceInternal_t400CD0CF0BE9054DBAF3387B5D281C915B1234A4;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Temp
struct Temp_t73656C78FC7C614000959679D544AF43FDB0BD13;
// TestManager
struct TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// Firebase.Storage.Internal.TransferState
struct TransferState_t5CB7C19F194B0CEE4AB51206DB482F26A78E550D;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Firebase.Storage.UploadState
struct UploadState_t6B87C49409111DB6BF258284429CF077E49DB28B;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// WriteManager
struct WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// OpenCVForUnity.CoreModule.Core/MinMaxLocResult
struct MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7;
// FirebaseConnection/<>c
struct U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135;
// FirebaseConnection/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30;
// FirebaseConnection/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4;
// FirebaseConnection/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139;
// FirebaseConnection/<LoadBytes>d__13
struct U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08;
// FirebaseConnection/<LoadList>d__14
struct U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8;
// FirebaseConnection/<UpdateList>d__12
struct U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// ReaderManager/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1;
// ReaderManager/<>c__DisplayClass21_1
struct U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE;
// ReaderManager/<SetRawInit>d__17
struct U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// TestManager/<SetRawInit>d__9
struct U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995;

IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t658E3C431BA7FDF30CD393A43C448012592EE831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tBE1B7FF0DEE1265DD66FED309EB53E20F8333C82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageProgress_1_t83B8245748D55F1E37B32C976A36D62B7E2AC8F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageProgress_1_t9508C56782D1B24C4F6E39A08FABB7A3DFE1E161_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteral163E615278B2AE83873F54F03D93170DAB900F53;
IL2CPP_EXTERN_C String_t* _stringLiteral1679B0111995A46561748EC18432C07E3B85F2BD;
IL2CPP_EXTERN_C String_t* _stringLiteral1FC7943DD76F3F96334A4F0C277C83B7E229EE84;
IL2CPP_EXTERN_C String_t* _stringLiteral2BB25C8DC7EA48E78B84C1E42EC8050DD777C23C;
IL2CPP_EXTERN_C String_t* _stringLiteral3B609FAEDCE97F530AF5F787E52BB9C8DA59E114;
IL2CPP_EXTERN_C String_t* _stringLiteral422457F901751FA3B57100A103387F681147FE63;
IL2CPP_EXTERN_C String_t* _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral52E7F480095E63B137D469C30D2AB7ECA192CDDA;
IL2CPP_EXTERN_C String_t* _stringLiteral650F80C11F87CA414C2A5A21A477E1CBFD820D47;
IL2CPP_EXTERN_C String_t* _stringLiteral66C8218D1627932C49B43BA3A848F674EA0C33ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6D7836CA675C3A618A16F9B062B65399971595BC;
IL2CPP_EXTERN_C String_t* _stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860;
IL2CPP_EXTERN_C String_t* _stringLiteral793A509D769F73CB7DFD6BD20D25476599F22346;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87;
IL2CPP_EXTERN_C String_t* _stringLiteral7F52DB53D604195B4FC3A8234C3B19619090FB2D;
IL2CPP_EXTERN_C String_t* _stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB79D6EAB3A258DC9D18EF5DD8FB4729D900340;
IL2CPP_EXTERN_C String_t* _stringLiteral9D062ADDC236A0E19766B86CD37A95E48E93B174;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralC1511CA01A938B35921AECC90BF29E6F98BB4AB6;
IL2CPP_EXTERN_C String_t* _stringLiteralC199F22C2CB642C6E285585F4A788B6D7FE92931;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D7AA0495D0D9744597253028E2C43F57A23599;
IL2CPP_EXTERN_C String_t* _stringLiteralE31FE94D0AAFEAD10A6D831EBC5CD45742B874A8;
IL2CPP_EXTERN_C String_t* _stringLiteralFAB3283D83D120FBC0AE635BE6138FBB7970851C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFEED4E15CAE7C78EC40E1F5B861BB5D65134C6B3;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mB6914DCCE1C19DA35F5A7EEA7FEB0693AEF0A4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DocScan_OnPostRender_mFC9B9632FA10CF500A37CD9BE18EAC4EE40D6EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB1152B218770A51AC23E18B0C8A71015E34938F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC914690C8223EBE53868DCD253449254995F80B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m666F26F74FEE4B55645E1F4314F6A0F58B09333E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD67579F73150DFC55BB8588B38C47842B0A24CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m590C630D2ABB67E64933067BF658EFF075AFF9C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD9C51BD4F2CBEF843AA01F95E6CF0C13CD9EA434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mE77056BB2254A3C176DC7A9FEFA36B73CA2A643D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m05CE30C4C39607A0CF3C2FA755112BA44C7521D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m686090083B8AB2BDF88AA74F38D9A47DC759FFB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m098CB6A17DEEB5F6FC0606A4B50532267C600A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA67C7052183E50327DCA02E41A74553418202F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCD8E8C1E1307972D1C7053B19EE030EA2E3D2FE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyManager_U3CStartU3Eb__7_0_m6706D6F60E9ED0BA330A6E7FE6FC8254876EECB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyManager_U3CStartU3Eb__7_1_mB31C3141EB5EC15AF4B4DEE43580E77FFB25F5AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyManager_U3CStartU3Eb__7_2_mC215A96FCD0208F721EC8148208BA1BDBE2DBDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MatUtils_copyFromMat_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3C07B531686A13F8AE5F5A768D628B12E5C49F8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128_m8642BFCCC974B2CAFC1431475D75B1BB0D1D54CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PreviewScan_U3CStartU3Eb__9_0_m29EFBBB9996C8A3406C7D2DB0FAFC253233A6F25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodeDetectController_OnPostRender_m6C3D9B4D0B25E834CBEFCD9842762A696B740A7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodeDetectController_Update_m7DF04141A5AA6F81A5EA64ABE0B45F24B1DC1D64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReaderManager_U3CSetRawInitU3Eb__17_0_mBF18CD93EE09946994483C490D9185DE64821E7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReaderManager_U3CStartU3Eb__16_0_mA65B8ADAEFDC2A9E2DAE1E96ED10A383411C6D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaveWriteTexture_U3CStartU3Eb__7_0_m667B0081B2FD8516BD48229EEB419939DF9846DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaveWriteTexture_U3CStartU3Eb__7_1_m46A03E62ECD45BC4EE2AFC3B07F16473291D9C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaveWriteTexture_U3CStartU3Eb__7_2_mC507AA3E5CA68D01E8B3908E3D723A669C69DEA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageProgress_1__ctor_mC466EDE99F4F49BC074EFBB69335E7242E055E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageProgress_1__ctor_mD46A390B6DA10715807B4E614CD9D242295345BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m50422B9DE23F0109C7119A4FB229B30B8C7117BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisStorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099_m8A026AC83350DCE43CB1230A93FC350A4F315DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m031394788113E40263A8EEBC8B505FA024A6377C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m34F7ABAD9CBC92591FEC2AD4001EBA1DF9539A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m9AF50FF9577BEB04961F8E61F740CCEF43A43FD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_mCC697EA9316278EB9734A0AB03CF147AD43345F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TestManager_U3CSetRawInitU3Eb__9_0_m08845BD408EBC1A6744DE142B4D4104B1675E450_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadBytesU3Ed__13_System_Collections_IEnumerator_Reset_mFC5C799253CE7B091D016A426DE84ECCFB528BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadListU3Ed__14_System_Collections_IEnumerator_Reset_mCA82C304A3BD12D5A93B2E47AE567F4AC29AB063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetRawInitU3Ed__17_System_Collections_IEnumerator_Reset_mE5916FFB9FF8D533C4B21BBBB5A853F0AA5AF3E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetRawInitU3Ed__9_System_Collections_IEnumerator_Reset_m2E697A5F5E64A03CE027C18430EA089A42AF43C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLoadBytesU3Eb__13_1_m65F2B2926A436905FCA283F229637C12201863DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUploadBytesU3Eb__11_0_m4C3FE7F34CBF90225F4C5E87074E331D7D3E454E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUploadBytesU3Eb__11_1_mA114D642F60AA825BB99A5EBE784D2F62AB60020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CUpdateListU3Eb__0_m886A55E0437CFE575D97251162689B4952E020C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CUpdateListU3Eb__1_m4F9E3E51C7ABAC47D376A90ED8203AD14416EDCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__0_mE75C7B005B75EE778339FDEAEB2BDB60401B89CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__2_m2B1A8ACE92615602575DA597FC15393D226DFB4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__3_mCB3FF83AB1EEC2FF7563E0B67B72D7671FE45F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CLoadListU3Eb__0_m2F06D28E00889B91D2FDBDA93BA5ED3D127421F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CLoadListU3Eb__1_m1B7D059A0B9A6EBF23CEDC3A67C38CA7A096F761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_1_U3CSetListU3Eb__0_mAD8741186A71012920AD31B5C7FD522D3ED82691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateListU3Ed__12_System_Collections_IEnumerator_Reset_mD85C2EEE50925EE3C61C819B381AF5DB6FCC4BB8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.Mat>
struct List_1_t658E3C431BA7FDF30CD393A43C448012592EE831  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MatU5BU5D_tFE2BA7336110CADD12198EFE8E9CBDBCFE890BC9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>
struct List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MatOfPointU5BU5D_t5F1282E8AF898909E0A8FA045F9DC9F0D7ABE037* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Firebase.Storage.StorageProgress`1<Firebase.Storage.DownloadState>
struct StorageProgress_1_t9508C56782D1B24C4F6E39A08FABB7A3DFE1E161  : public RuntimeObject
{
	// System.Action`1<T> Firebase.Storage.StorageProgress`1::reportCallback
	Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* ___reportCallback_0;
};

// Firebase.Storage.StorageProgress`1<Firebase.Storage.UploadState>
struct StorageProgress_1_t83B8245748D55F1E37B32C976A36D62B7E2AC8F8  : public RuntimeObject
{
	// System.Action`1<T> Firebase.Storage.StorageProgress`1::reportCallback
	Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* ___reportCallback_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// AndroidPermissionsManager
struct AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628  : public RuntimeObject
{
};

// ZXing.BarcodeReaderGeneric
struct BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254  : public RuntimeObject
{
	// ZXing.Reader ZXing.BarcodeReaderGeneric::reader
	RuntimeObject* ___reader_2;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric::createRGBLuminanceSource
	Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364* ___createRGBLuminanceSource_3;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric::createBinarizer
	Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1* ___createBinarizer_4;
	// System.Boolean ZXing.BarcodeReaderGeneric::usePreviousState
	bool ___usePreviousState_5;
	// ZXing.Common.DecodingOptions ZXing.BarcodeReaderGeneric::options
	DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB* ___options_6;
	// System.Action`1<ZXing.ResultPoint> ZXing.BarcodeReaderGeneric::explicitResultPointFound
	Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF* ___explicitResultPointFound_7;
	// System.Action`1<ZXing.Result> ZXing.BarcodeReaderGeneric::ResultFound
	Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6* ___ResultFound_8;
	// System.Boolean ZXing.BarcodeReaderGeneric::<AutoRotate>k__BackingField
	bool ___U3CAutoRotateU3Ek__BackingField_9;
	// System.Boolean ZXing.BarcodeReaderGeneric::<TryInverted>k__BackingField
	bool ___U3CTryInvertedU3Ek__BackingField_10;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// OpenCVForUnity.CoreModule.CvType
struct CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E  : public RuntimeObject
{
};

// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A  : public RuntimeObject
{
	// Firebase.Database.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::parentSnapshot
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___parentSnapshot_2;
	// Firebase.Database.DataSnapshot/DataSnapshotList Firebase.Database.DataSnapshot::parentList
	DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___parentList_3;
};

// OpenCVForUnity.DisposableObject
struct DisposableObject_t80A982D8DD51A4FAC07BC026740796005D3FA69E  : public RuntimeObject
{
	// System.Boolean OpenCVForUnity.DisposableObject::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
	// System.Boolean OpenCVForUnity.DisposableObject::<IsEnabledDispose>k__BackingField
	bool ___U3CIsEnabledDisposeU3Ek__BackingField_1;
};

// Firebase.Storage.DownloadState
struct DownloadState_tEEE10B9954757DC1A3FCDB34BDA68A66B6DB89E7  : public RuntimeObject
{
	// Firebase.Storage.Internal.TransferState Firebase.Storage.DownloadState::<State>k__BackingField
	TransferState_t5CB7C19F194B0CEE4AB51206DB482F26A78E550D* ___U3CStateU3Ek__BackingField_0;
};

// DrawTool
struct DrawTool_t104D1F602AE3F0FC3EC20B4458FA04C428CA5A51  : public RuntimeObject
{
};

// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960  : public RuntimeObject
{
	// Firebase.Database.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___internalDatabase_2;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_3;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___U3CAppU3Ek__BackingField_4;
};

// Firebase.Storage.FirebaseStorage
struct FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1  : public RuntimeObject
{
	// Firebase.Storage.FirebaseStorageInternal Firebase.Storage.FirebaseStorage::storageInternal
	FirebaseStorageInternal_tD6FAEA0321B7D20A820BB25CDC18EFE11F282145* ___storageInternal_1;
	// Firebase.FirebaseApp Firebase.Storage.FirebaseStorage::firebaseApp
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___firebaseApp_2;
	// System.String Firebase.Storage.FirebaseStorage::instanceKey
	String_t* ___instanceKey_3;
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::<Logger>k__BackingField
	ModuleLogger_tC5B741625D75BCB0E54696B8C07E113E68C93D97* ___U3CLoggerU3Ek__BackingField_5;
};

// Firebase.Storage.MetadataChange
struct MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A  : public RuntimeObject
{
	// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::metadata
	StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* ___metadata_0;
};

// OpenCVForUnity.CoreModule.Point
struct Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682  : public RuntimeObject
{
	// System.Double OpenCVForUnity.CoreModule.Point::x
	double ___x_0;
	// System.Double OpenCVForUnity.CoreModule.Point::y
	double ___y_1;
};

// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED  : public RuntimeObject
{
	// Firebase.Database.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* ___childListener_3;
};

// OpenCVForUnity.CoreModule.Rect
struct Rect_tBE1B7FF0DEE1265DD66FED309EB53E20F8333C82  : public RuntimeObject
{
	// System.Int32 OpenCVForUnity.CoreModule.Rect::x
	int32_t ___x_0;
	// System.Int32 OpenCVForUnity.CoreModule.Rect::y
	int32_t ___y_1;
	// System.Int32 OpenCVForUnity.CoreModule.Rect::width
	int32_t ___width_2;
	// System.Int32 OpenCVForUnity.CoreModule.Rect::height
	int32_t ___height_3;
};

// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF  : public RuntimeObject
{
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;
	// System.Int32 ZXing.Result::<NumBits>k__BackingField
	int32_t ___U3CNumBitsU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary
struct RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF  : public RuntimeObject
{
};

// OpenCVForUnity.CoreModule.Scalar
struct Scalar_tE735F77B112DB70B398114EC1C89E947307001D7  : public RuntimeObject
{
	// System.Double[] OpenCVForUnity.CoreModule.Scalar::val
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___val_0;
};

// OpenCVForUnity.CoreModule.Size
struct Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC  : public RuntimeObject
{
	// System.Double OpenCVForUnity.CoreModule.Size::width
	double ___width_0;
	// System.Double OpenCVForUnity.CoreModule.Size::height
	double ___height_1;
};

// Firebase.Storage.StorageReference
struct StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019  : public RuntimeObject
{
	// Firebase.Storage.FirebaseStorage Firebase.Storage.StorageReference::firebaseStorage
	FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1* ___firebaseStorage_0;
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.StorageReference::<Logger>k__BackingField
	ModuleLogger_tC5B741625D75BCB0E54696B8C07E113E68C93D97* ___U3CLoggerU3Ek__BackingField_1;
	// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReference::<Internal>k__BackingField
	StorageReferenceInternal_t400CD0CF0BE9054DBAF3387B5D281C915B1234A4* ___U3CInternalU3Ek__BackingField_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
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

// Firebase.Storage.UploadState
struct UploadState_t6B87C49409111DB6BF258284429CF077E49DB28B  : public RuntimeObject
{
	// Firebase.Storage.Internal.TransferState Firebase.Storage.UploadState::<State>k__BackingField
	TransferState_t5CB7C19F194B0CEE4AB51206DB482F26A78E550D* ___U3CStateU3Ek__BackingField_0;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// OpenCVForUnity.CoreModule.Core/MinMaxLocResult
struct MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A  : public RuntimeObject
{
	// System.Double OpenCVForUnity.CoreModule.Core/MinMaxLocResult::minVal
	double ___minVal_0;
	// System.Double OpenCVForUnity.CoreModule.Core/MinMaxLocResult::maxVal
	double ___maxVal_1;
	// OpenCVForUnity.CoreModule.Point OpenCVForUnity.CoreModule.Core/MinMaxLocResult::minLoc
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* ___minLoc_2;
	// OpenCVForUnity.CoreModule.Point OpenCVForUnity.CoreModule.Core/MinMaxLocResult::maxLoc
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* ___maxLoc_3;
};

// FirebaseConnection/<>c
struct U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135  : public RuntimeObject
{
};

// FirebaseConnection/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30  : public RuntimeObject
{
	// System.Boolean FirebaseConnection/<>c__DisplayClass12_0::isLoad
	bool ___isLoad_0;
};

// FirebaseConnection/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4  : public RuntimeObject
{
	// System.Int64 FirebaseConnection/<>c__DisplayClass13_0::target_bytelength
	int64_t ___target_bytelength_0;
	// UnityEngine.Texture2D FirebaseConnection/<>c__DisplayClass13_0::targetTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___targetTexture_1;
	// System.Boolean FirebaseConnection/<>c__DisplayClass13_0::isLoad
	bool ___isLoad_2;
};

// FirebaseConnection/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139  : public RuntimeObject
{
	// FirebaseConnection FirebaseConnection/<>c__DisplayClass14_0::<>4__this
	FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* ___U3CU3E4__this_0;
	// System.Boolean FirebaseConnection/<>c__DisplayClass14_0::isLoad
	bool ___isLoad_1;
};

// FirebaseConnection/<LoadBytes>d__13
struct U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08  : public RuntimeObject
{
	// System.Int32 FirebaseConnection/<LoadBytes>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseConnection/<LoadBytes>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Texture2D FirebaseConnection/<LoadBytes>d__13::targetTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___targetTexture_2;
	// FirebaseConnection FirebaseConnection/<LoadBytes>d__13::<>4__this
	FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* ___U3CU3E4__this_3;
	// System.String FirebaseConnection/<LoadBytes>d__13::path
	String_t* ___path_4;
	// FirebaseConnection/<>c__DisplayClass13_0 FirebaseConnection/<LoadBytes>d__13::<>8__1
	U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* ___U3CU3E8__1_5;
};

// FirebaseConnection/<LoadList>d__14
struct U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8  : public RuntimeObject
{
	// System.Int32 FirebaseConnection/<LoadList>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseConnection/<LoadList>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FirebaseConnection FirebaseConnection/<LoadList>d__14::<>4__this
	FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* ___U3CU3E4__this_2;
	// System.String FirebaseConnection/<LoadList>d__14::folder
	String_t* ___folder_3;
	// ReaderManager FirebaseConnection/<LoadList>d__14::readerManager
	ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* ___readerManager_4;
};

// FirebaseConnection/<UpdateList>d__12
struct U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4  : public RuntimeObject
{
	// System.Int32 FirebaseConnection/<UpdateList>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseConnection/<UpdateList>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String FirebaseConnection/<UpdateList>d__12::fileName
	String_t* ___fileName_2;
	// FirebaseConnection FirebaseConnection/<UpdateList>d__12::<>4__this
	FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* ___U3CU3E4__this_3;
	// System.String FirebaseConnection/<UpdateList>d__12::folder
	String_t* ___folder_4;
};

// ReaderManager/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1  : public RuntimeObject
{
	// System.String ReaderManager/<>c__DisplayClass21_0::folder
	String_t* ___folder_0;
	// ReaderManager ReaderManager/<>c__DisplayClass21_0::<>4__this
	ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* ___U3CU3E4__this_1;
};

// ReaderManager/<SetRawInit>d__17
struct U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE  : public RuntimeObject
{
	// System.Int32 ReaderManager/<SetRawInit>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ReaderManager/<SetRawInit>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ReaderManager ReaderManager/<SetRawInit>d__17::<>4__this
	ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* ___U3CU3E4__this_2;
};

// TestManager/<SetRawInit>d__9
struct U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805  : public RuntimeObject
{
	// System.Int32 TestManager/<SetRawInit>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestManager/<SetRawInit>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TestManager TestManager/<SetRawInit>d__9::<>4__this
	TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>
struct Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.Mat>
struct Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t658E3C431BA7FDF30CD393A43C448012592EE831* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.MatOfPoint>
struct Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<System.Byte>
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
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

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>
struct Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* ___m_result_22;
};

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC 
{
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_pinvoke
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_com
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB  : public BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::createLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___createLuminanceSource_12;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D  : public Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED
{
	// Firebase.Database.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___U3CDatabaseU3Ek__BackingField_5;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary
struct MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8  : public RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF
{
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

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
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

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
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

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// OpenCVForUnity.DisposableOpenCVObject
struct DisposableOpenCVObject_t3F651F810DE91A77E5073556138D35D7439C31DE  : public DisposableObject_t80A982D8DD51A4FAC07BC026740796005D3FA69E
{
	// System.IntPtr OpenCVForUnity.DisposableOpenCVObject::nativeObj
	intptr_t ___nativeObj_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// Firebase.Storage.StorageMetadata
struct StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099  : public RuntimeObject
{
	// Firebase.Storage.StorageReference Firebase.Storage.StorageMetadata::storageReference
	StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* ___storageReference_1;
	// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::<Internal>k__BackingField
	MetadataInternal_tD7FA31D207CA851452109FF780FE05B26EC63A05* ___U3CInternalU3Ek__BackingField_2;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
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

// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::<dimensions>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::<planeCount>k__BackingField
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_5;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::<timestamp>k__BackingField
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_pinvoke
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_com
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// ReaderManager/<>c__DisplayClass21_1
struct U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE  : public RuntimeObject
{
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> ReaderManager/<>c__DisplayClass21_1::item
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___item_0;
	// ReaderManager/<>c__DisplayClass21_0 ReaderManager/<>c__DisplayClass21_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* ___CSU24U3CU3E8__locals1_1;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
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

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.XR.ARSubsystems.AddReferenceImageJobState
struct AddReferenceImageJobState_tCF90A84092F3D2A7536D1D28C9E6EC0D7F53937A 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.AddReferenceImageJobState::m_Handle
	intptr_t ___m_Handle_0;
	// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary UnityEngine.XR.ARSubsystems.AddReferenceImageJobState::m_Library
	MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* ___m_Library_1;
	// Unity.Jobs.JobHandle UnityEngine.XR.ARSubsystems.AddReferenceImageJobState::<jobHandle>k__BackingField
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___U3CjobHandleU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.AddReferenceImageJobState
struct AddReferenceImageJobState_tCF90A84092F3D2A7536D1D28C9E6EC0D7F53937A_marshaled_pinvoke
{
	intptr_t ___m_Handle_0;
	MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* ___m_Library_1;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___U3CjobHandleU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.AddReferenceImageJobState
struct AddReferenceImageJobState_tCF90A84092F3D2A7536D1D28C9E6EC0D7F53937A_marshaled_com
{
	intptr_t ___m_Handle_0;
	MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* ___m_Library_1;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___U3CjobHandleU3Ek__BackingField_2;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// AndroidPermissionCallback
struct AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<System.String> AndroidPermissionCallback::OnPermissionGrantedAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnPermissionGrantedAction_4;
	// System.Action`1<System.String> AndroidPermissionCallback::OnPermissionDeniedAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnPermissionDeniedAction_5;
	// System.Action`1<System.String> AndroidPermissionCallback::OnPermissionDeniedAndDontAskAgainAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnPermissionDeniedAndDontAskAgainAction_6;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// OpenCVForUnity.CoreModule.Mat
struct Mat_t63C614C1527F3B965A572FEA6C95C5552E219875  : public DisposableOpenCVObject_t3F651F810DE91A77E5073556138D35D7439C31DE
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// System.Action`1<System.Threading.Tasks.Task`1<System.Byte[]>>
struct Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>>
struct Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074  : public MulticastDelegate_t
{
};

// System.Action`1<Firebase.Storage.DownloadState>
struct Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// System.Action`1<Firebase.Storage.UploadState>
struct Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// OpenCVForUnity.CoreModule.MatOfInt
struct MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE  : public Mat_t63C614C1527F3B965A572FEA6C95C5552E219875
{
};

// OpenCVForUnity.CoreModule.MatOfPoint
struct MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE  : public Mat_t63C614C1527F3B965A572FEA6C95C5552E219875
{
};

// OpenCVForUnity.CoreModule.MatOfPoint2f
struct MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8  : public Mat_t63C614C1527F3B965A572FEA6C95C5552E219875
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
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

// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.String,System.Byte[]> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_DataStore
	SerializableDictionary_2_t43C5D129793FC3216489482F7A8B933128D7F0A8* ___m_DataStore_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_Images
	List_1_t23F59D024DFD759F7295EBC6C25BD5F56992C950* ___m_Images_7;
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

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
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

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
	// UnityEngine.Material ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_FeatheredPlaneMaterial_9;
};

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AnchorCreator::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> AnchorCreator::m_AnchorPoints
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___m_AnchorPoints_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager AnchorCreator::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_7;
	// UnityEngine.XR.ARFoundation.ARAnchorManager AnchorCreator::m_AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___m_AnchorManager_8;
	// UnityEngine.XR.ARFoundation.ARPlaneManager AnchorCreator::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_9;
};

// CameraRenderEvent
struct CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera CameraRenderEvent::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// System.Action CameraRenderEvent::OnPostRenderEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnPostRenderEvent_5;
};

// CreateFBList
struct CreateFBList_tB0113EC6C6FCF9E04911AA16CDA3C93A21688324  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DataBox
struct DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture2D DataBox::scanTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___scanTexture_5;
	// System.String DataBox::QRString
	String_t* ___QRString_6;
	// UnityEngine.Vector2 DataBox::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_7;
	// UnityEngine.Vector2 DataBox::pos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos_8;
};

// DocScan
struct DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ScanSceneManager DocScan::ScanSceneManager
	ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A* ___ScanSceneManager_4;
	// System.Boolean DocScan::grabScreenshot
	bool ___grabScreenshot_5;
	// CameraRenderEvent DocScan::cam
	CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* ___cam_6;
	// UnityEngine.UI.RawImage DocScan::camImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___camImage_7;
	// UnityEngine.UI.RawImage DocScan::scanImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___scanImage_8;
	// UnityEngine.Texture2D DocScan::_camtexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____camtexture_9;
	// UnityEngine.Texture2D DocScan::finalTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___finalTexture_10;
	// System.Int32 DocScan::screenShotWidth
	int32_t ___screenShotWidth_11;
	// System.Int32 DocScan::screenShotHeight
	int32_t ___screenShotHeight_12;
	// System.Boolean DocScan::isScan
	bool ___isScan_13;
	// OpenCVForUnity.CoreModule.Mat DocScan::yuvMat
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___yuvMat_14;
	// OpenCVForUnity.CoreModule.Mat DocScan::yMat
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___yMat_15;
	// OpenCVForUnity.CoreModule.Mat DocScan::inputDisplayAreaMat
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___inputDisplayAreaMat_16;
	// OpenCVForUnity.CoreModule.Mat DocScan::outputDisplayAreaMat
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___outputDisplayAreaMat_17;
	// OpenCVForUnity.CoreModule.Scalar DocScan::CONTOUR_COLOR
	Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* ___CONTOUR_COLOR_18;
};

// FirebaseConnection
struct FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FirebaseConnection::loadingPopup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loadingPopup_5;
	// UnityEngine.GameObject FirebaseConnection::uploadPopup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uploadPopup_6;
	// Firebase.Storage.FirebaseStorage FirebaseConnection::storage
	FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1* ___storage_7;
	// Firebase.Storage.StorageReference FirebaseConnection::storageRef
	StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* ___storageRef_8;
	// Firebase.Database.DatabaseReference FirebaseConnection::databaseRef
	DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* ___databaseRef_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> FirebaseConnection::curruntDic
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___curruntDic_10;
};

// LobbyManager
struct LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button LobbyManager::GoScanButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___GoScanButton_4;
	// UnityEngine.UI.Button LobbyManager::GoReadButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___GoReadButton_5;
	// UnityEngine.UI.Button LobbyManager::GoPaintButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___GoPaintButton_6;
	// UnityEngine.UI.Button LobbyManager::GoHomeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___GoHomeButton_7;
	// UnityEngine.UI.Button LobbyManager::GoBookButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___GoBookButton_8;
	// UnityEngine.UI.Button LobbyManager::GoProfileButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___GoProfileButton_9;
	// UnityEngine.UI.Button LobbyManager::GoMenuButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___GoMenuButton_10;
};

// Navigation
struct Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Navigation::navigationPoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___navigationPoints_4;
};

// PreviewScan
struct PreviewScan_t2475026AE7698ACA093C3E490C91289788F3B399  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.CanvasScaler PreviewScan::canvasScaler
	CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* ___canvasScaler_4;
	// DocScan PreviewScan::docScan
	DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* ___docScan_5;
	// UnityEngine.UI.Button PreviewScan::confirmButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___confirmButton_6;
	// UnityEngine.UI.RawImage PreviewScan::rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___rawImage_7;
	// UnityEngine.RectTransform PreviewScan::originRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___originRect_8;
	// System.Single PreviewScan::originWidth
	float ___originWidth_9;
	// System.Single PreviewScan::originHeight
	float ___originHeight_10;
	// UnityEngine.Vector2 PreviewScan::originAnchoredPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___originAnchoredPosition_11;
	// System.Boolean PreviewScan::isFull
	bool ___isFull_12;
};

// QRCodeDetectController
struct QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OpenCVForUnity.CoreModule.Mat QRCodeDetectController::grayMat
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___grayMat_4;
	// OpenCVForUnity.CoreModule.Mat QRCodeDetectController::points
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___points_5;
	// System.Collections.Generic.List`1<System.String> QRCodeDetectController::decodedInfo
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___decodedInfo_6;
	// System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.Mat> QRCodeDetectController::straightQrcode
	List_1_t658E3C431BA7FDF30CD393A43C448012592EE831* ___straightQrcode_7;
	// ReaderManager QRCodeDetectController::ReaderManager
	ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* ___ReaderManager_8;
	// CameraRenderEvent QRCodeDetectController::cam
	CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* ___cam_9;
	// UnityEngine.UI.RawImage QRCodeDetectController::camImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___camImage_10;
	// UnityEngine.Texture2D QRCodeDetectController::_camtexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____camtexture_11;
	// UnityEngine.XR.ARFoundation.ARCameraManager QRCodeDetectController::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_12;
	// UnityEngine.Texture2D QRCodeDetectController::tex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex_13;
	// System.Int32 QRCodeDetectController::screenShotWidth
	int32_t ___screenShotWidth_14;
	// System.Int32 QRCodeDetectController::screenShotHeight
	int32_t ___screenShotHeight_15;
	// System.Boolean QRCodeDetectController::grabScreenshot
	bool ___grabScreenshot_16;
	// System.Boolean QRCodeDetectController::grabQr
	bool ___grabQr_17;
	// System.Boolean QRCodeDetectController::grabPaper
	bool ___grabPaper_18;
	// OpenCVForUnity.CoreModule.Scalar QRCodeDetectController::CONTOUR_COLOR
	Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* ___CONTOUR_COLOR_19;
	// OpenCVForUnity.CoreModule.Mat QRCodeDetectController::yuvMat
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___yuvMat_20;
	// OpenCVForUnity.CoreModule.Mat QRCodeDetectController::yMat
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___yMat_21;
	// System.String QRCodeDetectController::_qrText
	String_t* ____qrText_22;
	// System.Boolean QRCodeDetectController::hasPaper
	bool ___hasPaper_23;
};

// ReadQRCode
struct ReadQRCode_t4544083189C582CBE8568DF87F763D170C736B8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARCameraManager ReadQRCode::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_4;
	// UnityEngine.UI.Text ReadQRCode::txt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txt_5;
};

// ReaderManager
struct ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// QRCodeDetectController ReaderManager::QRCodeDetectController
	QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* ___QRCodeDetectController_4;
	// UnityEngine.UI.RawImage ReaderManager::raw
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___raw_5;
	// UnityEngine.Texture2D ReaderManager::ReadTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___ReadTexture_6;
	// TMPro.TextMeshProUGUI ReaderManager::qrGuideText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___qrGuideText_7;
	// UnityEngine.GameObject ReaderManager::reReadingButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___reReadingButton_8;
	// UnityEngine.GameObject ReaderManager::FbList
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FbList_9;
	// UnityEngine.GameObject ReaderManager::listTextPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___listTextPrefab_10;
	// UnityEngine.GameObject ReaderManager::TrackingUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TrackingUI_11;
	// UnityEngine.UI.RawImage ReaderManager::TrackingRaw
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___TrackingRaw_12;
	// UnityEngine.UI.Button ReaderManager::TrackingConfirm
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___TrackingConfirm_13;
	// UnityEngine.Texture2D ReaderManager::_getTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____getTexture_14;
	// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary ReaderManager::library
	RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* ___library_15;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager ReaderManager::m_TrackedImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___m_TrackedImageManager_16;
};

// SaveWriteTexture
struct SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WriteManager SaveWriteTexture::WriteManager
	WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* ___WriteManager_4;
	// UnityEngine.UI.Button SaveWriteTexture::ShowUploadWindowButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ShowUploadWindowButton_5;
	// UnityEngine.GameObject SaveWriteTexture::UploadWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UploadWindow_6;
	// UnityEngine.UI.Button SaveWriteTexture::UploadButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___UploadButton_7;
	// UnityEngine.UI.Button SaveWriteTexture::CancleButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___CancleButton_8;
	// TMPro.TMP_InputField SaveWriteTexture::FolderText
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___FolderText_9;
	// TMPro.TMP_InputField SaveWriteTexture::FileText
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___FileText_10;
};

// ScanSceneManager
struct ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DocScan ScanSceneManager::DocScan
	DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* ___DocScan_4;
	// UnityEngine.GameObject ScanSceneManager::ResultObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ResultObject_5;
	// UnityEngine.GameObject ScanSceneManager::shotButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shotButton_6;
};

// SceneLoad
struct SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SceneLoad::num
	int32_t ___num_4;
};

// Temp
struct Temp_t73656C78FC7C614000959679D544AF43FDB0BD13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage Temp::camImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___camImage_4;
	// UnityEngine.XR.ARFoundation.ARCameraManager Temp::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_5;
};

// TestManager
struct TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TestManager::targetObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObj_4;
	// UnityEngine.UI.RawImage TestManager::raw
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___raw_5;
	// UnityEngine.Texture2D TestManager::ReadTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___ReadTexture_6;
	// TMPro.TextMeshProUGUI TestManager::tete
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___tete_7;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager TestManager::m_TrackedImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___m_TrackedImageManager_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WriteManager
struct WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage WriteManager::scanImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___scanImage_4;
	// UnityEngine.UI.RawImage WriteManager::writeImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___writeImage_5;
	// UnityEngine.Texture2D WriteManager::writeTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___writeTexture_6;
	// UnityEngine.Canvas WriteManager::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_7;
	// UnityEngine.UI.Toggle WriteManager::penToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___penToggle_8;
	// UnityEngine.UI.Toggle WriteManager::eraserToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___eraserToggle_9;
	// System.Boolean WriteManager::isDraw
	bool ___isDraw_10;
	// System.Boolean WriteManager::isEraser
	bool ___isEraser_11;
	// System.Int32 WriteManager::eraserTickness
	int32_t ___eraserTickness_12;
	// System.Boolean WriteManager::drawing
	bool ___drawing_13;
	// UnityEngine.Color[] WriteManager::clean_colours_array
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___clean_colours_array_14;
	// UnityEngine.Vector2 WriteManager::preMousePos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___preMousePos_15;
	// UnityEngine.UI.GraphicRaycaster WriteManager::m_Raycaster
	GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* ___m_Raycaster_16;
	// UnityEngine.EventSystems.PointerEventData WriteManager::m_PointerEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_PointerEventData_17;
	// UnityEngine.EventSystems.EventSystem WriteManager::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_18;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5  : public SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
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

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4  : public ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_SerializedLibrary
	XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___m_SerializedLibrary_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_MaxNumberOfMovingImages
	int32_t ___m_MaxNumberOfMovingImages_15;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_TrackedImagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TrackedImagePrefab_16;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedImageManager::trackedImagesChanged
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___trackedImagesChanged_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_ReferenceImages
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___m_ReferenceImages_18;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_10;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_37;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_38;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>

// System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.Mat>
struct List_1_t658E3C431BA7FDF30CD393A43C448012592EE831_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MatU5BU5D_tFE2BA7336110CADD12198EFE8E9CBDBCFE890BC9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.Mat>

// System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>
struct List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MatOfPointU5BU5D_t5F1282E8AF898909E0A8FA045F9DC9F0D7ABE037* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// Firebase.Storage.StorageProgress`1<Firebase.Storage.DownloadState>

// Firebase.Storage.StorageProgress`1<Firebase.Storage.DownloadState>

// Firebase.Storage.StorageProgress`1<Firebase.Storage.UploadState>

// Firebase.Storage.StorageProgress`1<Firebase.Storage.UploadState>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// AndroidPermissionsManager
struct AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_StaticFields
{
	// UnityEngine.AndroidJavaObject AndroidPermissionsManager::m_Activity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_Activity_0;
	// UnityEngine.AndroidJavaObject AndroidPermissionsManager::m_PermissionService
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_PermissionService_1;
};

// AndroidPermissionsManager

// OpenCVForUnity.CoreModule.CvType
struct CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields
{
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8UC1
	int32_t ___CV_8UC1_9;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8UC2
	int32_t ___CV_8UC2_10;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8UC3
	int32_t ___CV_8UC3_11;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8UC4
	int32_t ___CV_8UC4_12;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8SC1
	int32_t ___CV_8SC1_13;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8SC2
	int32_t ___CV_8SC2_14;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8SC3
	int32_t ___CV_8SC3_15;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_8SC4
	int32_t ___CV_8SC4_16;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16UC1
	int32_t ___CV_16UC1_17;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16UC2
	int32_t ___CV_16UC2_18;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16UC3
	int32_t ___CV_16UC3_19;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16UC4
	int32_t ___CV_16UC4_20;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16SC1
	int32_t ___CV_16SC1_21;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16SC2
	int32_t ___CV_16SC2_22;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16SC3
	int32_t ___CV_16SC3_23;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16SC4
	int32_t ___CV_16SC4_24;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32SC1
	int32_t ___CV_32SC1_25;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32SC2
	int32_t ___CV_32SC2_26;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32SC3
	int32_t ___CV_32SC3_27;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32SC4
	int32_t ___CV_32SC4_28;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32FC1
	int32_t ___CV_32FC1_29;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32FC2
	int32_t ___CV_32FC2_30;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32FC3
	int32_t ___CV_32FC3_31;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_32FC4
	int32_t ___CV_32FC4_32;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_64FC1
	int32_t ___CV_64FC1_33;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_64FC2
	int32_t ___CV_64FC2_34;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_64FC3
	int32_t ___CV_64FC3_35;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_64FC4
	int32_t ___CV_64FC4_36;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16FC1
	int32_t ___CV_16FC1_37;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16FC2
	int32_t ___CV_16FC2_38;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16FC3
	int32_t ___CV_16FC3_39;
	// System.Int32 OpenCVForUnity.CoreModule.CvType::CV_16FC4
	int32_t ___CV_16FC4_40;
};

// OpenCVForUnity.CoreModule.CvType

// Firebase.Database.DataSnapshot

// Firebase.Database.DataSnapshot

// OpenCVForUnity.DisposableObject

// OpenCVForUnity.DisposableObject

// Firebase.Storage.DownloadState

// Firebase.Storage.DownloadState

// DrawTool

// DrawTool

// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* ___databases_5;
};

// Firebase.Database.FirebaseDatabase

// Firebase.Storage.FirebaseStorage
struct FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage> Firebase.Storage.FirebaseStorage::storageByInstanceKey
	Dictionary_2_t6B2D56F200C03AE40F453FB3EFF2F2200DA34044* ___storageByInstanceKey_0;
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::logger
	ModuleLogger_tC5B741625D75BCB0E54696B8C07E113E68C93D97* ___logger_4;
	// System.Reflection.FieldInfo Firebase.Storage.FirebaseStorage::pathFieldInfo
	FieldInfo_t* ___pathFieldInfo_6;
	// System.Reflection.FieldInfo Firebase.Storage.FirebaseStorage::cachedToString
	FieldInfo_t* ___cachedToString_7;
};

// Firebase.Storage.FirebaseStorage

// Firebase.Storage.MetadataChange

// Firebase.Storage.MetadataChange

// OpenCVForUnity.CoreModule.Point

// OpenCVForUnity.CoreModule.Point

// Firebase.Database.Query

// Firebase.Database.Query

// OpenCVForUnity.CoreModule.Rect

// OpenCVForUnity.CoreModule.Rect

// ZXing.Result

// ZXing.Result

// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary

// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary

// OpenCVForUnity.CoreModule.Scalar

// OpenCVForUnity.CoreModule.Scalar

// OpenCVForUnity.CoreModule.Size

// OpenCVForUnity.CoreModule.Size

// Firebase.Storage.StorageReference

// Firebase.Storage.StorageReference

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Firebase.Storage.UploadState

// Firebase.Storage.UploadState

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// OpenCVForUnity.CoreModule.Core/MinMaxLocResult

// OpenCVForUnity.CoreModule.Core/MinMaxLocResult

// FirebaseConnection/<>c
struct U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields
{
	// FirebaseConnection/<>c FirebaseConnection/<>c::<>9
	U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* ___U3CU3E9_0;
	// System.Action`1<Firebase.Storage.UploadState> FirebaseConnection/<>c::<>9__11_0
	Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* ___U3CU3E9__11_0_1;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>> FirebaseConnection/<>c::<>9__11_1
	Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* ___U3CU3E9__11_1_2;
	// System.Action`1<Firebase.Storage.DownloadState> FirebaseConnection/<>c::<>9__13_1
	Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* ___U3CU3E9__13_1_3;
};

// FirebaseConnection/<>c

// FirebaseConnection/<>c__DisplayClass12_0

// FirebaseConnection/<>c__DisplayClass12_0

// FirebaseConnection/<>c__DisplayClass13_0

// FirebaseConnection/<>c__DisplayClass13_0

// FirebaseConnection/<>c__DisplayClass14_0

// FirebaseConnection/<>c__DisplayClass14_0

// FirebaseConnection/<LoadBytes>d__13

// FirebaseConnection/<LoadBytes>d__13

// FirebaseConnection/<LoadList>d__14

// FirebaseConnection/<LoadList>d__14

// FirebaseConnection/<UpdateList>d__12

// FirebaseConnection/<UpdateList>d__12

// ReaderManager/<>c__DisplayClass21_0

// ReaderManager/<>c__DisplayClass21_0

// ReaderManager/<SetRawInit>d__17

// ReaderManager/<SetRawInit>d__17

// TestManager/<SetRawInit>d__9

// TestManager/<SetRawInit>d__9

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>

// System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.Mat>

// System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.Mat>

// System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.MatOfPoint>

// System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.MatOfPoint>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeSlice`1<System.Byte>

// Unity.Collections.NativeSlice`1<System.Byte>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// System.Threading.Tasks.Task`1<System.Byte[]>

// System.Threading.Tasks.Task`1<System.Byte[]>

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>

// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>

// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_StaticFields
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::defaultCreateLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___defaultCreateLuminanceSource_11;
};

// ZXing.BarcodeReader

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// UnityEngine.Color

// UnityEngine.Color

// Firebase.Database.DatabaseReference

// Firebase.Database.DatabaseReference

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary

// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Unity.Jobs.JobHandle

// Unity.Jobs.JobHandle

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// Firebase.Storage.StorageMetadata
struct StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099_StaticFields
{
	// System.DateTime Firebase.Storage.StorageMetadata::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_0;
};

// Firebase.Storage.StorageMetadata

// UnityEngine.Touch

// UnityEngine.Touch

// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate UnityEngine.XR.ARSubsystems.XRCpuImage::s_OnAsyncConversionCompleteDelegate
	OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995* ___s_OnAsyncConversionCompleteDelegate_2;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// ReaderManager/<>c__DisplayClass21_1

// ReaderManager/<>c__DisplayClass21_1

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams

// UnityEngine.XR.ARSubsystems.AddReferenceImageJobState

// UnityEngine.XR.ARSubsystems.AddReferenceImageJobState

// System.AggregateException

// System.AggregateException

// AndroidPermissionCallback

// AndroidPermissionCallback

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// OpenCVForUnity.CoreModule.Mat

// OpenCVForUnity.CoreModule.Mat

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Action`1<System.Threading.Tasks.Task`1<System.Byte[]>>

// System.Action`1<System.Threading.Tasks.Task`1<System.Byte[]>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>>

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>>

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>

// System.Action`1<Firebase.Storage.DownloadState>

// System.Action`1<Firebase.Storage.DownloadState>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`1<System.Threading.Tasks.Task>

// System.Action`1<System.Threading.Tasks.Task>

// System.Action`1<Firebase.Storage.UploadState>

// System.Action`1<Firebase.Storage.UploadState>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.XR.ARFoundation.ARRaycastHit

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// OpenCVForUnity.CoreModule.MatOfInt

// OpenCVForUnity.CoreModule.MatOfInt

// OpenCVForUnity.CoreModule.MatOfPoint

// OpenCVForUnity.CoreModule.MatOfPoint

// OpenCVForUnity.CoreModule.MatOfPoint2f

// OpenCVForUnity.CoreModule.MatOfPoint2f

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary

// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_Vertices_6;
};

// ARFeatheredPlaneMeshVisualizer

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer

// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> AnchorCreator::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_5;
};

// AnchorCreator

// CameraRenderEvent

// CameraRenderEvent

// CreateFBList

// CreateFBList

// DataBox
struct DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_StaticFields
{
	// DataBox DataBox::data
	DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* ___data_4;
};

// DataBox

// DocScan

// DocScan

// FirebaseConnection
struct FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_StaticFields
{
	// FirebaseConnection FirebaseConnection::Instance
	FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* ___Instance_4;
};

// FirebaseConnection

// LobbyManager

// LobbyManager

// Navigation

// Navigation

// PreviewScan

// PreviewScan

// QRCodeDetectController

// QRCodeDetectController

// ReadQRCode

// ReadQRCode

// ReaderManager

// ReaderManager

// SaveWriteTexture

// SaveWriteTexture

// ScanSceneManager

// ScanSceneManager

// SceneLoad

// SceneLoad

// Temp

// Temp

// TestManager

// TestManager

// WriteManager

// WriteManager

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.XR.ARFoundation.ARCameraManager

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.XR.ARFoundation.ARAnchor

// UnityEngine.XR.ARFoundation.ARAnchor

// UnityEngine.XR.ARFoundation.ARAnchorManager

// UnityEngine.XR.ARFoundation.ARAnchorManager

// UnityEngine.XR.ARFoundation.ARPlane

// UnityEngine.XR.ARFoundation.ARPlane

// UnityEngine.XR.ARFoundation.ARPlaneManager

// UnityEngine.XR.ARFoundation.ARPlaneManager

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager

// UnityEngine.XR.ARFoundation.ARTrackedImageManager

// UnityEngine.XR.ARFoundation.ARTrackedImageManager

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___s_SortedGraphics_11;
};

// UnityEngine.UI.GraphicRaycaster

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_InputField

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// UnityEngine.UI.RawImage

// UnityEngine.UI.RawImage

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
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
// OpenCVForUnity.CoreModule.Point[]
struct PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB  : public RuntimeArray
{
	ALIGN_FIELD (8) Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* m_Items[1];

	inline Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.UtilsModule.MatUtils::copyFromMat<System.Byte>(OpenCVForUnity.CoreModule.Mat,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatUtils_copyFromMat_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3C07B531686A13F8AE5F5A768D628B12E5C49F8E_gshared (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_mat, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_array, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Storage.StorageProgress`1<System.Object>::.ctor(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageProgress_1__ctor_mA13779BB54704D095B0A477E273191D5690BA543_gshared (StorageProgress_1_t8D1AECD2DDC816BCEA5A528339506DFC5A2C5FD9* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callback, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___0_continuationAction, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Object>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m8F426832790ADC614F3A870ECFAB11ABBBDDDC43_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___0_task, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___1_continuation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, int32_t ___0_index, const RuntimeMethod* method) ;

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::GetEnumerator()
inline Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::Dispose()
inline void Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3 (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::get_Current()
inline ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::MoveNext()
inline bool Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Clear()
inline void List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::.ctor()
inline void List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___1_hitResults, int32_t ___2_trackableTypes, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___0_index, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneManager::GetPlane(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARAnchor UnityEngine.XR.ARFoundation.ARAnchorManager::AttachAnchor(UnityEngine.XR.ARFoundation.ARPlane,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___0_plane, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Add(T)
inline void List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1 (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) ;
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___0_value, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_vertices, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_newX, float ___1_newY, float ___2_newZ, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___1_uvs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___0_markNoLongerReadable, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.UI.RawImage>(T&)
inline bool Component_TryGetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mB6914DCCE1C19DA35F5A7EEA7FEB0693AEF0A4A9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// DataBox DataBox::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* DataBox_get_Data_m5C855E136D51653DD5CCA400E75B9AFF8234E76D (const RuntimeMethod* method) ;
// UnityEngine.Texture2D DocScan::GetFinalTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DocScan_GetFinalTexture_mC8DD3D91FAA6AF82C743217E1B564E82C28CA190 (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// System.Void AndroidPermissionCallback::add_OnPermissionGrantedAction(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_add_OnPermissionGrantedAction_m26DAAD3572478A277B2F7634EFF9B3567ACAF017 (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) ;
// System.Void AndroidPermissionCallback::add_OnPermissionDeniedAction(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_add_OnPermissionDeniedAction_m0DF3C6C260FB2979FA3A8B632C7361727AB844A2 (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) ;
// System.Void AndroidPermissionCallback::add_OnPermissionDeniedAndDontAskAgainAction(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_add_OnPermissionDeniedAndDontAskAgainAction_m8C557CBD97954197FD0AE133AA94099047E2E29A (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AndroidPermissionsManager::GetPermissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetPermissionsService_mA80FD7164F6392A339F5204018317CEB13464AB2 (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AndroidPermissionsManager::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetActivity_m7944CE493C3132F6DE636CE6EE716497C443FF52 (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void AndroidPermissionsManager::RequestPermission(System.String[],AndroidPermissionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_RequestPermission_m923F2CA895193A7255A9937C7C0B09460C9B593B (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_permissionNames, AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* ___1_callback, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void LobbyManager::ExitApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_ExitApp_m9E29F464C76C533094A914678F1EF72885257664 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void LobbyManager::GoScanScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_GoScanScene_mD961200015DE02F7326A70E28030AFA3621ACDBE (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) ;
// System.Void LobbyManager::GoReadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_GoReadScene_m6F33F7425293A1C611038D407681E6EA26038184 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) ;
// System.Void LobbyManager::TestScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_TestScene_m09E9FCE35446C34B43EC292B80FD1619435DA7F3 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::CreateRuntimeLibrary(UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* ARTrackedImageManager_CreateRuntimeLibrary_m53343F2B04F48AE642735069B9348B0EAF009D1E (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___0_serializedLibrary, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::set_referenceLibrary(UnityEngine.XR.ARSubsystems.IReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_set_referenceLibrary_m826772B820572A41FE7B566E0F6E0C25024D0E5E (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.IReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_referenceLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARTrackedImageManager_get_referenceLibrary_mD811689B94E007CD8F708D91155C8DC575E948DD (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___0_value, method);
}
// UnityEngine.XR.ARSubsystems.AddReferenceImageJobState UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions::ScheduleAddImageWithValidationJob(UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary,UnityEngine.Texture2D,System.String,System.Nullable`1<System.Single>,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AddReferenceImageJobState_tCF90A84092F3D2A7536D1D28C9E6EC0D7F53937A MutableRuntimeReferenceImageLibraryExtensions_ScheduleAddImageWithValidationJob_m7FBA37C8669AAED35DB626632C60D68085CF6FED (MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* ___0_library, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_texture, String_t* ___2_name, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___3_widthInMeters, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___4_inputDeps, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void QRCodeDetectController::RunningShotMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_RunningShotMode_m13A326A89DA4F46ED0F35BD1ED8DF4F590D483CB (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ReaderManager::SetRawInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderManager_SetRawInit_m72CBE6C43A98DDF73A3EF930AA71A91724C18F10 (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void ReaderManager/<SetRawInit>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetRawInitU3Ed__17__ctor_mA3E7C7E1AA2144354B5BB10EDB7A122AB983F765 (U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FirebaseConnection::LoadBytes(System.String,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseConnection_LoadBytes_m67F99545F778899EF84088B4EF313D637E2EE00E (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, String_t* ___0_path, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_targetTexture, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FirebaseConnection::LoadList(ReaderManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseConnection_LoadList_m2C7CBDF5D02EFF5DEDF1A91F5D4D41C0AF2A3CAE (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* ___0_readerManager, String_t* ___1_folder, const RuntimeMethod* method) ;
// System.Void ReaderManager/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mA46E0080D8C1DF50B0CE32A9685CDA17532666B1 (U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Void ReaderManager/<>c__DisplayClass21_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_1__ctor_mDE8CD7EBA8F99FEB2CA0A39CA205E9E89DB1544C (U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<TMPro.TextMeshProUGUI>(T&)
inline bool GameObject_TryGetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m05CE30C4C39607A0CF3C2FA755112BA44C7521D3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.UI.Button>(T&)
inline bool GameObject_TryGetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mE77056BB2254A3C176DC7A9FEFA36B73CA2A643D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void ReaderManager::ConfirmImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_ConfirmImage_m540455479A65DD92AAC9006603D30D56A8D2D001 (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_trackedImagePrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARTrackedImageManager_get_trackedImagePrefab_mC698D56D9B539242437FA40F1DDC6E4FE959DE2A_inline (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.RawImage>()
inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void ReaderManager::LoadTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_LoadTexture_mE86383E33A4207FCED507C691CF39A0BEBEB6F21 (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void DocScan::RunningShotMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_RunningShotMode_m03BA6573C3791316CEA6B12EB70706E35E3AA07C (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TestManager::SetRawInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestManager_SetRawInit_m305EFE544C61B62FE17C3AEFE5769D18575607F2 (TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* __this, const RuntimeMethod* method) ;
// System.Void TestManager/<SetRawInit>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetRawInitU3Ed__9__ctor_m271629126B6494091DC92C8FF4F4C87B8776BC3C (U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Navigation::OnBackPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation_OnBackPress_mA7FDE89BBF8E6E1AD9F0A7751D0D22A0B7F8A066 (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<CameraRenderEvent>()
inline CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* Object_FindObjectOfType_TisCameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128_m8642BFCCC974B2CAFC1431475D75B1BB0D1D54CC (const RuntimeMethod* method)
{
	return ((  CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void CameraRenderEvent::add_OnPostRenderEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRenderEvent_add_OnPostRenderEvent_m61E8B49C949DF8DD140CACBA6934066557D3515B (CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Scalar::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339 (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* __this, double ___0_v0, double ___1_v1, double ___2_v2, double ___3_v3, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Mat::.ctor(System.Int32,System.Int32,System.Int32,OpenCVForUnity.CoreModule.Scalar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mat__ctor_m1FCA33ACB157E2421388259EE1D18A2666CBA16B (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, int32_t ___0_rows, int32_t ___1_cols, int32_t ___2_type, Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* ___3_s, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Mat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Void DocScan::TextureMatDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_TextureMatDisposed_m028A98AC09C0DBFCA0983C7DB7E4A99A85C6B083 (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.DisposableObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposableObject_Dispose_m470D40F22D92B4DFA3B83767935ABAF0B26A8C9A (DisposableObject_t80A982D8DD51A4FAC07BC026740796005D3FA69E* __this, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Mat::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mat__ctor_m0B3B26A3BA6F97AB00B308B798383746116E8058 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, int32_t ___0_rows, int32_t ___1_cols, int32_t ___2_type, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.UnityUtils.Utils::texture2DToMat(UnityEngine.Texture2D,OpenCVForUnity.CoreModule.Mat,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_texture2DToMat_m719D7CF7DB7529D4ED317A7AA5FBAFEED5FB6531 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture2D, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___1_mat, bool ___2_flip, int32_t ___3_flipCode, const RuntimeMethod* method) ;
// System.Int32 OpenCVForUnity.CoreModule.Mat::rows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Int32 OpenCVForUnity.CoreModule.Mat::cols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_cols_mA8C3EC315EC7F3EB97B30381F8D8269BCA475297 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Int32 OpenCVForUnity.CoreModule.Mat::type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_type_mBCEE28CEFDDD469234C5ACEB5FE5437B41AC906E (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::cvtColor(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_cvtColor_mA0A5A6154878F195F2F71751D9F5068822833004 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_src, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___1_dst, int32_t ___2_code, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Core::extractChannel(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Core_extractChannel_m845E1AD5ED60796369E7AF47AFAA30A46FB4417F (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_src, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___1_dst, int32_t ___2_coi, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Size::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_mD7D3D4B7411F9791AFE27A8D82C9D5091ED56EE6 (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* __this, double ___0_width, double ___1_height, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::GaussianBlur(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Size,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_GaussianBlur_m29269EF75C33C9C41921E3D1613519A27187D336 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_src, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___1_dst, Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* ___2_ksize, double ___3_sigmaX, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::Canny(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_Canny_m773B5322C178210F45E0EC0668EDDB8A57EDBC88 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___1_edges, double ___2_threshold1, double ___3_threshold2, int32_t ___4_apertureSize, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>::.ctor()
inline void List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26 (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void DocScan::Find4PointContours(OpenCVForUnity.CoreModule.Mat,System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_Find4PointContours_m82026618CA4043E5B81344BC226806CF640FA020 (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___1_contours, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.MatOfPoint DocScan::GetMaxAreaContour(System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* DocScan_GetMaxAreaContour_mC964AD624702BD82B60EB7B3C907F21BDA3B9A84 (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___0_contours, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.MatOfPoint DocScan::OrderCornerPoints(OpenCVForUnity.CoreModule.MatOfPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* DocScan_OrderCornerPoints_m38845A129965C62017592CC3F0C07FA6614651FA (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___0_corners, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.Size OpenCVForUnity.CoreModule.Mat::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* Mat_size_m709E4850D465857C21270FC240259A901E44196D (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Double OpenCVForUnity.CoreModule.Size::area()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_area_mF7EE627885FFCF58D91D0FE30D81670932C777C8 (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* __this, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.Mat DocScan::PerspectiveTransform(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.MatOfPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* DocScan_PerspectiveTransform_mF737D46352651BE23B51B7DA558CB3C8B78005FA (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___1_corners, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.Mat OpenCVForUnity.CoreModule.Mat::setTo(OpenCVForUnity.CoreModule.Scalar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* Mat_setTo_m46A78E6D5D2032E4D3D1642CCDAE8B00BFFEC9B6 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* ___0_s, const RuntimeMethod* method) ;
// System.Int32 OpenCVForUnity.CoreModule.Mat::width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_width_mBCC955D36649BE38B1B73654032975EFE6E167C8 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Int32 OpenCVForUnity.CoreModule.Mat::height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_height_m91A43CAF596AF1501503E6CE4BD683CC63B438DF (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Int64 OpenCVForUnity.CoreModule.Mat::total()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Mat_total_mA4BBB7A9827E1521061C487825771C8404604B7F (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Rect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_mD7B06A14CCD29B7C31C74943A12C5DB901718544 (Rect_tBE1B7FF0DEE1265DD66FED309EB53E20F8333C82* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Mat::.ctor(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mat__ctor_m220B4BFFCA4CDF1E72C0AE79A73DBD27A19C177F (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_m, Rect_tBE1B7FF0DEE1265DD66FED309EB53E20F8333C82* ___1_roi, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Mat::copyTo(OpenCVForUnity.CoreModule.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mat_copyTo_m7D410D11F7740D4B79443B4526E2282FC9D5FBF3 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_m, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.UnityUtils.Utils::matToTexture2D(OpenCVForUnity.CoreModule.Mat,UnityEngine.Texture2D,System.Boolean,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_matToTexture2D_m16080BAB307F864212C3286528C917CEE8C84E09 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_mat, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_texture2D, bool ___2_flip, int32_t ___3_flipCode, bool ___4_flipAfter, bool ___5_updateMipmaps, bool ___6_makeNoLongerReadable, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.Point[] OpenCVForUnity.CoreModule.MatOfPoint::toArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* MatOfPoint_toArray_mD69EA8997A4F9D0269DF0F30CBC83ECD4517D53C (MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void ScanSceneManager::OpenResultImage(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanSceneManager_OpenResultImage_m0F3C4F38E079A77314007B6A1F8E44F36E7CAD1B (ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_size, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>::Add(T)
inline void List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_inline (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* __this, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::drawContours(OpenCVForUnity.CoreModule.Mat,System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>,System.Int32,OpenCVForUnity.CoreModule.Scalar,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_drawContours_mC774426E4A07D47A281C52FFEB4E9C15A052F505 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___1_contours, int32_t ___2_contourIdx, Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* ___3_color, int32_t ___4_thickness, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>::Clear()
inline void List_1_Clear_m686090083B8AB2BDF88AA74F38D9A47DC759FFB1_inline (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::findContours(OpenCVForUnity.CoreModule.Mat,System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>,OpenCVForUnity.CoreModule.Mat,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_findContours_mE71F5BF6CBEE65447FC7F8D69215357E79080CB4 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___1_contours, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___2_hierarchy, int32_t ___3_mode, int32_t ___4_method, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>::GetEnumerator()
inline Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A List_1_GetEnumerator_mA67C7052183E50327DCA02E41A74553418202F6B (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A (*) (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.MatOfPoint>::Dispose()
inline void Enumerator_Dispose_mB1152B218770A51AC23E18B0C8A71015E34938F4 (Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.MatOfPoint>::get_Current()
inline MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* Enumerator_get_Current_mD9C51BD4F2CBEF843AA01F95E6CF0C13CD9EA434_inline (Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A* __this, const RuntimeMethod* method)
{
	return ((  MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* (*) (Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void OpenCVForUnity.CoreModule.MatOfInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatOfInt__ctor_m8D3E8F02CA067F938C0AABE502432FE8134038CA (MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* __this, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::convexHull(OpenCVForUnity.CoreModule.MatOfPoint,OpenCVForUnity.CoreModule.MatOfInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_convexHull_m07829BB03B2B781E8900448B0171EAF055838ECB (MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___0_points, MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* ___1_hull, bool ___2_clockwise, const RuntimeMethod* method) ;
// System.Int32[] OpenCVForUnity.CoreModule.MatOfInt::toArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* MatOfInt_toArray_m4A629D87F345165EB4FFE0AB5D5605CE76E21F06 (MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* __this, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.MatOfPoint2f::.ctor(OpenCVForUnity.CoreModule.Point[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatOfPoint2f__ctor_mC15533B7B2669AC472D3660C15E68273D45501BF (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* __this, PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* ___0_a, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.MatOfPoint2f::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatOfPoint2f__ctor_mF795E49FC607B1CF96E0357B1A9A2749BDB3EA89 (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* __this, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.MatOfPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatOfPoint__ctor_mAA7B53549CCEC7AB5314CEC4FD89D0881EE4ADF2 (MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* __this, const RuntimeMethod* method) ;
// System.Double OpenCVForUnity.ImgprocModule.Imgproc::arcLength(OpenCVForUnity.CoreModule.MatOfPoint2f,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Imgproc_arcLength_m72362E6E3BFA56AE3BDFBE94B692FE0D7EDBA67B (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* ___0_curve, bool ___1_closed, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::approxPolyDP(OpenCVForUnity.CoreModule.MatOfPoint2f,OpenCVForUnity.CoreModule.MatOfPoint2f,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_approxPolyDP_m4C7E0B69BB94F15C3974E9ED171CCC2732809D4E (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* ___0_curve, MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* ___1_approxCurve, double ___2_epsilon, bool ___3_closed, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Mat::convertTo(OpenCVForUnity.CoreModule.Mat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mat_convertTo_mF38EA12022EEE5C1AA9EE6679451F0CF324179D8 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_m, int32_t ___1_rtype, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.MatOfPoint>::MoveNext()
inline bool Enumerator_MoveNext_mD67579F73150DFC55BB8588B38C47842B0A24CA4 (Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>::get_Count()
inline int32_t List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_inline (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>::get_Item(System.Int32)
inline MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* (*) (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Double OpenCVForUnity.ImgprocModule.Imgproc::contourArea(OpenCVForUnity.CoreModule.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Imgproc_contourArea_m160506EBB44AB6500ED602B345F2D58208BBBD9C (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_contour, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Mat::.ctor(OpenCVForUnity.CoreModule.Size,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mat__ctor_mF7419A657F207CCB04C9B13E13D89F25198221B8 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* ___0_size, int32_t ___1_type, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Core::add(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Core_add_mAFCE2FBFB521122CAA2727059741CB5F93E15DC2 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_src1, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___1_src2, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___2_dst, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.Core/MinMaxLocResult OpenCVForUnity.CoreModule.Core::minMaxLoc(OpenCVForUnity.CoreModule.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* Core_minMaxLoc_mCE544C1DA9B5DAEDAB256CD2558CB3C599AD72A5 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_src, const RuntimeMethod* method) ;
// System.Double[] OpenCVForUnity.CoreModule.Mat::get(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Mat_get_mF6D242DB45F408ED1148C4EC0AA92AAEEA2DC0C2 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, int32_t ___0_row, int32_t ___1_col, const RuntimeMethod* method) ;
// System.Int32 OpenCVForUnity.CoreModule.Mat::put(System.Int32,System.Int32,System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, int32_t ___0_row, int32_t ___1_col, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_data, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.CoreModule.Core::subtract(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Core_subtract_m55B4480582071A327BC6C13463D07125788F7427 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_src1, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___1_src2, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___2_dst, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.Mat OpenCVForUnity.ImgprocModule.Imgproc::getPerspectiveTransform(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* Imgproc_getPerspectiveTransform_mCB819091C45D8732F7FDAB6FDAF7953D86BA99A2 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_src, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___1_dst, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::warpPerspective(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_warpPerspective_m7425FF7E5641458A73A72045274072B49A0FE663 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_src, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___1_dst, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___2_M, Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* ___3_dsize, const RuntimeMethod* method) ;
// System.Void QRCodeDetectController::TextureToMatInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_TextureToMatInit_mB3D23240F3CD241CD4E9F4FD11B83E96E829C925 (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) ;
// System.Void QRCodeDetectController::TextureMatDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_TextureMatDisposed_mF22CC3108C759F1A84FE61F8670480785B8135BF (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.Mat>::GetEnumerator()
inline Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A List_1_GetEnumerator_m098CB6A17DEEB5F6FC0606A4B50532267C600A58 (List_1_t658E3C431BA7FDF30CD393A43C448012592EE831* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A (*) (List_1_t658E3C431BA7FDF30CD393A43C448012592EE831*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.Mat>::Dispose()
inline void Enumerator_Dispose_mC914690C8223EBE53868DCD253449254995F80B4 (Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.Mat>::get_Current()
inline Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* Enumerator_get_Current_m590C630D2ABB67E64933067BF658EFF075AFF9C9_inline (Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A* __this, const RuntimeMethod* method)
{
	return ((  Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* (*) (Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<OpenCVForUnity.CoreModule.Mat>::MoveNext()
inline bool Enumerator_MoveNext_m666F26F74FEE4B55645E1F4314F6A0F58B09333E (Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.Mat>::.ctor()
inline void List_1__ctor_mCD8E8C1E1307972D1C7053B19EE030EA2E3D2FE7 (List_1_t658E3C431BA7FDF30CD393A43C448012592EE831* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t658E3C431BA7FDF30CD393A43C448012592EE831*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::TryAcquireLatestCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* ___0_cpuImage, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::.ctor(UnityEngine.XR.ARSubsystems.XRCpuImage,UnityEngine.TextureFormat,UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConversionParams__ctor_m2EA9FC7BD411FA61269B314ACD03174F5BB96273 (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 ___0_image, int32_t ___1_format, int32_t ___2_transformation, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::GetConvertedDataSize(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___0_conversionParams, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Convert(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Convert_m04EB3992B85AEB87D03C5626EFD0A9C0158AC9CB (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___0_conversionParams, intptr_t ___1_destinationBuffer, int32_t ___2_bufferLength, const RuntimeMethod* method) ;
// System.Void ZXing.BarcodeReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.String ZXing.Result::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) ;
// System.Void ReaderManager::LoadList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_LoadList_m5A07CE555FA94D11B8D68C3BBBB03DFC14976EAA (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, String_t* ___0_qrText, const RuntimeMethod* method) ;
// System.Int32 OpenCVForUnity.CoreModule.Mat::channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mat_channels_m08FD4851746F3D6809A66763AF3416A72C124558 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* __this, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.UtilsModule.MatUtils::copyFromMat<System.Byte>(OpenCVForUnity.CoreModule.Mat,T[])
inline void MatUtils_copyFromMat_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3C07B531686A13F8AE5F5A768D628B12E5C49F8E (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_mat, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_array, const RuntimeMethod* method)
{
	((  void (*) (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))MatUtils_copyFromMat_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3C07B531686A13F8AE5F5A768D628B12E5C49F8E_gshared)(___0_mat, ___1_array, method);
}
// System.Void QRCodeDetectController::Find4PointContours(OpenCVForUnity.CoreModule.Mat,System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_Find4PointContours_m19E299BF45FF1BCAB96B275824070E81ED4DDE3D (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___1_contours, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.MatOfPoint QRCodeDetectController::GetMaxAreaContour(System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* QRCodeDetectController_GetMaxAreaContour_m8B58514E1B0B9194FEAD5D02A0E519BA335B95B5 (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___0_contours, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.MatOfPoint QRCodeDetectController::OrderCornerPoints(OpenCVForUnity.CoreModule.MatOfPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* QRCodeDetectController_OrderCornerPoints_mC550C6E4F97D8FE80F98961862A5A402FDBF25EF (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___0_corners, const RuntimeMethod* method) ;
// System.Void OpenCVForUnity.ImgprocModule.Imgproc::line(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.Point,OpenCVForUnity.CoreModule.Point,OpenCVForUnity.CoreModule.Scalar,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Imgproc_line_mD6CF99D4800508B65EB4D811F4FA4C181663F595 (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_img, Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* ___1_pt1, Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* ___2_pt2, Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* ___3_color, int32_t ___4_thickness, const RuntimeMethod* method) ;
// OpenCVForUnity.CoreModule.Mat QRCodeDetectController::PerspectiveTransform(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.MatOfPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* QRCodeDetectController_PerspectiveTransform_mB2B12655E382AE35F79595C9F0698D9554D677F1 (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___1_corners, const RuntimeMethod* method) ;
// System.Void ReaderManager::AddImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_AddImage_m2A9A3A083B5480B01EE882DCEFE5E70EB1EE841A (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_imageToAdd, const RuntimeMethod* method) ;
// System.Void Temp::UpdateRawImage(UnityEngine.UI.RawImage,UnityEngine.XR.ARSubsystems.XRCpuImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Temp_UpdateRawImage_mC184E89A32AABAD6178945DFBE35BBEA6902AB0B (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___0_rawImage, XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 ___1_cpuImage, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::get_format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_format_mB777BBC485ED5A88CD78536F78F43E9795DEEE20_inline (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImageFormatExtensions::AsTextureFormat(UnityEngine.XR.ARSubsystems.XRCpuImage/Format)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImageFormatExtensions_AsTextureFormat_mEDB46C7DB6DE6C62926ECD7FE9EBAE000A4F7E18 (int32_t ___0_this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared)(__this, method);
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
inline NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_gshared)(___0_array, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Convert(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,Unity.Collections.NativeSlice`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___0_conversionParams, NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___1_destinationBuffer, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void SceneLoad::LoadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoad_LoadScene_m3AABBDBF0361FC80F0487347E09CE880124445E4 (SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9* __this, const RuntimeMethod* method) ;
// System.Void FirebaseConnection::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseConnection_Init_m4EC5EF5A2AE403AB6F87EC360B69A50C81BB0BF0 (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, const RuntimeMethod* method) ;
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1* FirebaseStorage_get_DefaultInstance_m952DFCAD322579C0B618C41909810A192DEAE935 (const RuntimeMethod* method) ;
// Firebase.Storage.StorageReference Firebase.Storage.FirebaseStorage::GetReferenceFromUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* FirebaseStorage_GetReferenceFromUrl_m62E1995DDD883BAB36CED64EADE346BA8EA4421A (FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1* __this, String_t* ___0_fullUrl, const RuntimeMethod* method) ;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118 (const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// Firebase.Storage.StorageReference Firebase.Storage.StorageReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* StorageReference_Child_m9F88459EAF9C20A744124271AB52DCE825FD0B68 (StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* __this, String_t* ___0_pathString, const RuntimeMethod* method) ;
// System.Void Firebase.Storage.MetadataChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataChange__ctor_m5F678B37FBB3791E8F9B00BB82D1C0EB57DECD48 (MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Firebase.Storage.MetadataChange::set_CustomMetadata(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataChange_set_CustomMetadata_m44A0316F126270F4DFAF3883D703456E7A4192E5 (MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<Firebase.Storage.UploadState>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mEF9F9B1405690D13555B829E4948BA1B51083663 (Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Firebase.Storage.StorageProgress`1<Firebase.Storage.UploadState>::.ctor(System.Action`1<T>)
inline void StorageProgress_1__ctor_mC466EDE99F4F49BC074EFBB69335E7242E055E5C (StorageProgress_1_t83B8245748D55F1E37B32C976A36D62B7E2AC8F8* __this, Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* ___0_callback, const RuntimeMethod* method)
{
	((  void (*) (StorageProgress_1_t83B8245748D55F1E37B32C976A36D62B7E2AC8F8*, Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592*, const RuntimeMethod*))StorageProgress_1__ctor_mA13779BB54704D095B0A477E273191D5690BA543_gshared)(__this, ___0_callback, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference::PutBytesAsync(System.Byte[],Firebase.Storage.MetadataChange,System.IProgress`1<Firebase.Storage.UploadState>,System.Threading.CancellationToken,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* StorageReference_PutBytesAsync_m83D404D547C8F800423DD9ED811E52A8DD0F9053 (StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A* ___1_customMetadata, RuntimeObject* ___2_progressHandler, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancelToken, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___4_previousSessionUri, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC35F13E22D56F85284B1BD4FDC79A1FF9E66DF08 (Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m34F7ABAD9CBC92591FEC2AD4001EBA1DF9539A4C (Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* __this, Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* ___0_continuationAction, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26*, Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___0_continuationAction, method);
}
// System.Collections.IEnumerator FirebaseConnection::UpdateList(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseConnection_UpdateList_mF0A44F30ADFA4EA70156E177F22B3BF72192379F (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, String_t* ___0_folder, String_t* ___1_fileName, const RuntimeMethod* method) ;
// System.Void FirebaseConnection/<UpdateList>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateListU3Ed__12__ctor_m591E8C41E912605A685E778F51B020BF70FF22CE (U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void FirebaseConnection/<LoadBytes>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadBytesU3Ed__13__ctor_m21702E45C1851D55720C6B4F3146DBEAF6EF3CD7 (U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void FirebaseConnection/<LoadList>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadListU3Ed__14__ctor_m5C38F029A35742A7E7D1758A64305AEEAB8ACC1C (U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void FirebaseConnection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4B67346A6D62F3654F4A7F0379A3A8D3A890B5A6 (U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* __this, const RuntimeMethod* method) ;
// System.Int64 Firebase.Storage.UploadState::get_BytesTransferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UploadState_get_BytesTransferred_mA931DDDED32EE48A453D06A51593BF9A8790EFAF (UploadState_t6B87C49409111DB6BF258284429CF077E49DB28B* __this, const RuntimeMethod* method) ;
// System.Int64 Firebase.Storage.UploadState::get_TotalByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UploadState_get_TotalByteCount_m870CAE7FF6FECDE6DB1140366E42502A7FA11A82 (UploadState_t6B87C49409111DB6BF258284429CF077E49DB28B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>::get_Result()
inline StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* Task_1_get_Result_m9AF50FF9577BEB04961F8E61F740CCEF43A43FD9 (Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* __this, const RuntimeMethod* method)
{
	return ((  StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* (*) (Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.String Firebase.Storage.StorageMetadata::get_Md5Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageMetadata_get_Md5Hash_mA3BB9E0C886BC7CBF6BBA3E47E295DE6FE41EB2B (StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Int64 Firebase.Storage.DownloadState::get_BytesTransferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DownloadState_get_BytesTransferred_m6BC96CF7184BFFDEB440ED0235AE6790D2308943 (DownloadState_tEEE10B9954757DC1A3FCDB34BDA68A66B6DB89E7* __this, const RuntimeMethod* method) ;
// System.Int64 Firebase.Storage.DownloadState::get_TotalByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DownloadState_get_TotalByteCount_m581E4056F0E06AAFD7D79BC53F64EB8BAE1F6C77 (DownloadState_tEEE10B9954757DC1A3FCDB34BDA68A66B6DB89E7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void FirebaseConnection/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mD410B34B4217D4F98C6F59C50B2E4DB42A3C8D97 (U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, String_t* ___0_pathString, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::UpdateChildrenAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_UpdateChildrenAsync_m1B21DCF2FB0E471325973394373094C875940EBE (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, RuntimeObject* ___0_update, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___0_continuationAction, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// System.String Firebase.Storage.StorageMetadata::GetCustomMetadata(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageMetadata_GetCustomMetadata_mECE397387A5E5FF20BABF5652994E62C5DEC49C3 (StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int64 System.Int64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Byte[]>::get_Result()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Task_1_get_Result_mCC697EA9316278EB9734A0AB03CF147AD43345F6 (Task_1_t46575E75F710D631831E756B5DE20429700F6B95* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Task_1_t46575E75F710D631831E756B5DE20429700F6B95*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) ;
// System.Void FirebaseConnection/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m12072703DADD8C49022428866820B15328B5025F (U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference::GetMetadataAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* StorageReference_GetMetadataAsync_m51B1104CC559C76EACD0DA1F231B2132A35496F0 (StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<Firebase.Storage.StorageMetadata>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisStorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099_m8A026AC83350DCE43CB1230A93FC350A4F315DA2 (Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* ___0_task, Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* ___1_continuation, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26*, Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F*, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m8F426832790ADC614F3A870ECFAB11ABBBDDDC43_gshared)(___0_task, ___1_continuation, method);
}
// System.Void System.Action`1<Firebase.Storage.DownloadState>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8179F46294FA4AE6F9D7EABF4B2224FF7FA93BA0 (Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Firebase.Storage.StorageProgress`1<Firebase.Storage.DownloadState>::.ctor(System.Action`1<T>)
inline void StorageProgress_1__ctor_mD46A390B6DA10715807B4E614CD9D242295345BA (StorageProgress_1_t9508C56782D1B24C4F6E39A08FABB7A3DFE1E161* __this, Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* ___0_callback, const RuntimeMethod* method)
{
	((  void (*) (StorageProgress_1_t9508C56782D1B24C4F6E39A08FABB7A3DFE1E161*, Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D*, const RuntimeMethod*))StorageProgress_1__ctor_mA13779BB54704D095B0A477E273191D5690BA543_gshared)(__this, ___0_callback, method);
}
// System.Threading.Tasks.Task`1<System.Byte[]> Firebase.Storage.StorageReference::GetBytesAsync(System.Int64,System.IProgress`1<Firebase.Storage.DownloadState>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* StorageReference_GetBytesAsync_mE133F8182861016E9F319D180DE1C8BC140399CE (StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* __this, int64_t ___0_maxDownloadSizeBytes, RuntimeObject* ___1_progressHandler, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancelToken, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Byte[]>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA400868203E99619DB9DE7C39ECC7445E0057791 (Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Byte[]>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m50422B9DE23F0109C7119A4FB229B30B8C7117BD (Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___0_task, Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186* ___1_continuation, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t46575E75F710D631831E756B5DE20429700F6B95*, Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186*, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m8F426832790ADC614F3A870ECFAB11ABBBDDDC43_gshared)(___0_task, ___1_continuation, method);
}
// TResult System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::get_Result()
inline DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* __this, const RuntimeMethod* method)
{
	return ((  DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* (*) (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Boolean Firebase.Database.DataSnapshot::get_Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSnapshot_get_Exists_mA540904D75EBE3EE4BA7E7BF842F5CBD52BD0A1A (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Void FirebaseConnection/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m94CA708F8C70DBAC1B2022A9D0F6DEAD9F49DBC7 (U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m47FFCA5D7CA1940EDC58E9D6F823C7710794F537 (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m031394788113E40263A8EEBC8B505FA024A6377C (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* __this, Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* ___0_continuationAction, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50*, Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___0_continuationAction, method);
}
// System.Void ReaderManager::SetList(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_SetList_mAD2F3E5062B8B8EC545C1D57F15A8C83D2D16A6A (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, String_t* ___0_folder, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_dic, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void FirebaseConnection::UploadBytes(UnityEngine.Texture2D,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseConnection_UploadBytes_m16E778C2FE50B67DEE88663F3F8B56BC500CFECB (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, String_t* ___1_folder, String_t* ___2_fileName, const RuntimeMethod* method) ;
// System.Void SaveWriteTexture::ShowUploadWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWriteTexture_ShowUploadWindow_mA292DB713349EEEDE749985906CE006FB83BCD9C (SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097* __this, const RuntimeMethod* method) ;
// System.Void SaveWriteTexture::UploadTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWriteTexture_UploadTexture_mA5693F972EEC384F4E59E3B148E4B98AEA3F32E0 (SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097* __this, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_colors, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void WriteManager::Draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_Draw_m4C7DD9EC715F4E6A76C39675CCE38A6A2E81A8E0 (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) ;
// System.Void WriteManager::Eraser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_Eraser_m0149CB64B586174E6614B3CA75027684DF283A44 (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, int32_t, const RuntimeMethod*))List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_gshared)(__this, ___0_index, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.Vector2 WriteManager::TouchToTextureCoordinate(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WriteManager_TouchToTextureCoordinate_m8808AB94B8F8D85A356F0D4F137E06E7AE3B31BC (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_touchPosition, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void DrawTool::DrawLine(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawTool_DrawLine_mF90D00BDDE4ACC2570EAE01DEA1BC379FC42C106 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_p1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_p2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_col, int32_t ___4_tick, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// UnityEngine.GameObject AnchorCreator::get_AnchorPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnchorCreator_get_AnchorPrefab_mBBAF7805E9D9F8D79408EE642D153BC76306B25A (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AnchorPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_AnchorPrefab_4;
		return L_0;
	}
}
// System.Void AnchorCreator::set_AnchorPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_set_AnchorPrefab_m53CC9CC3022C713826B44536B48B462C8A1FACFF (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_AnchorPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___m_AnchorPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPrefab_4), (void*)L_0);
		return;
	}
}
// System.Void AnchorCreator::RemoveAllAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_RemoveAllAnchors_m6BA302DD9EECA47969FD3F6E5397441DCB09ED21 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var anchor in m_AnchorPoints)
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_0 = __this->___m_AnchorPoints_6;
		NullCheck(L_0);
		Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 L_1;
		L_1 = List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502(L_0, List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3((&V_0), Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2;
				L_2 = Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline((&V_0), Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
				// Destroy(anchor);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				bool L_3;
				L_3 = Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F((&V_0), Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// m_AnchorPoints.Clear();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_4 = __this->___m_AnchorPoints_6;
		NullCheck(L_4);
		List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline(L_4, List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AnchorCreator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Awake_m8820A3F157354D7EDED7B2D7CE2BFA42844F1F8E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_7), (void*)L_0);
		// m_AnchorManager = GetComponent<ARAnchorManager>();
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->___m_AnchorManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorManager_8), (void*)L_1);
		// m_PlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2;
		L_2 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___m_PlaneManager_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_9), (void*)L_2);
		// m_AnchorPoints = new List<ARAnchor>();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_3 = (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*)il2cpp_codegen_object_new(List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4(L_3, List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		__this->___m_AnchorPoints_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPoints_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void AnchorCreator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Update_mA0A8BCCBAB0AE50DB087524E6273D11F1D6456D0 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_3 = NULL;
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_4 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// var touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase != TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_3 = __this->___m_RaycastManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_3);
		bool L_6;
		L_6 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_3, L_4, L_5, 1, NULL);
		if (!L_6)
		{
			goto IL_00ae;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_7);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8;
		L_8 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_7, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_5), NULL);
		V_1 = L_9;
		// var hitTrackableId = s_Hits[0].trackableId;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_10);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_11;
		L_11 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_10, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_11;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_12;
		L_12 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_5), NULL);
		V_2 = L_12;
		// var hitPlane = m_PlaneManager.GetPlane(hitTrackableId);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_13 = __this->___m_PlaneManager_9;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_14 = V_2;
		NullCheck(L_13);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_15;
		L_15 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_13, L_14, NULL);
		V_3 = L_15;
		// var anchor = m_AnchorManager.AttachAnchor(hitPlane, hitPose);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_16 = __this->___m_AnchorManager_8;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_17 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_1;
		NullCheck(L_16);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_19;
		L_19 = ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75(L_16, L_17, L_18, NULL);
		V_4 = L_19;
		// Instantiate(m_AnchorPrefab, anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___m_AnchorPrefab_4;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_21 = V_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_20, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// if (anchor == null)
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_24 = V_4;
		bool L_25;
		L_25 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00a1;
		}
	}
	{
		// Debug.Log("Error creating anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C, NULL);
		return;
	}

IL_00a1:
	{
		// m_AnchorPoints.Add(anchor);
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_26 = __this->___m_AnchorPoints_6;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_27 = V_4;
		NullCheck(L_26);
		List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline(L_26, L_27, List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void AnchorCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__ctor_m702B01425680D7FD1C9272A423AAF8A913E5476E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AnchorCreator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__cctor_mDE519BED5D639DA8CD4FA7E389C3D97DF4BA54C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5), (void*)L_0);
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
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_mD616A09A3B426EA5DE1FA37334DD194E43EEC110 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___0_value;
		__this->___m_FeatheringWidth_4 = L_0;
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_mC5DB0414A2514BF4851266C25141C903F0AC57BA (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01(__this, Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		__this->___m_PlaneMeshVisualizer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneMeshVisualizer_7), (void*)L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___m_FeatheredPlaneMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeatheredPlaneMaterial_9), (void*)L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(__this, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		__this->___m_Plane_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Plane_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_m8781C85CFED871C8A81A5B88DB1031856E0FC9F0 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m2343B05B1A8F14BAD4DD516C584281B66FE6A4E8 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC ___0_eventArgs, const RuntimeMethod* method) 
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0 = __this->___m_PlaneMeshVisualizer_7;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline(L_0, NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_mesh;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_2);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_2, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_3, List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(L_6, L_7, List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
	}

IL_0029:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = ___0_mesh;
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_8);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_8, L_9, NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_11, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_13;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_006c:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_14, L_15, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_17, NULL);
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_19 = L_18;
		float L_20;
		L_20 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline(__this, NULL);
		float L_21;
		L_21 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_19, L_20)), (0.00100000005f), NULL);
		V_5 = ((float)(L_19/L_21));
		// uv.x = uvMapping;
		float L_22 = V_5;
		(&V_2)->___x_2 = L_22;
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_23 = V_3;
		float L_24 = V_5;
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00a4;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_5;
		V_3 = L_25;
	}

IL_00a4:
	{
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_26 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_26, L_27, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_006c;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_FeatheredPlaneMaterial_9;
		float L_32 = V_3;
		NullCheck(L_31);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_31, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_32, NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_33, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = ___0_mesh;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_35);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_35, 1, L_36, NULL);
		// mesh.UploadMeshData(false);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = ___0_mesh;
		NullCheck(L_37);
		Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_37, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_m9A77651BCAE58AA0B994FFF6C6B63B1CFF2729F6 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->___m_FeatheringWidth_4 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_m56285A000EE27A1631BE9C5BCDA5C376E5D133C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5), (void*)L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6), (void*)L_1);
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
// System.Void CameraRenderEvent::add_OnPostRenderEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRenderEvent_add_OnPostRenderEvent_m61E8B49C949DF8DD140CACBA6934066557D3515B (CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnPostRenderEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnPostRenderEvent_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CameraRenderEvent::remove_OnPostRenderEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRenderEvent_remove_OnPostRenderEvent_mCE5CCDB81E880794B384E7767C8E2C63178D122B (CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnPostRenderEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnPostRenderEvent_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void CameraRenderEvent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRenderEvent_Start_mFD0149273C6BC46C8444AC74AD26335CAB49A6B6 (CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void CameraRenderEvent::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRenderEvent_OnPostRender_m217689E1063BFA1D579958651E86B703DB4BA4CE (CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// OnPostRenderEvent?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnPostRenderEvent_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void CameraRenderEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRenderEvent__ctor_m1281CEE7E5BBCFC21CFFB2A13C1ECA3F71DF6FC6 (CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* __this, const RuntimeMethod* method) 
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
// System.Void PreviewScan::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewScan_Start_m7ACB7C59157624603C386CB8C289AD5A71700721 (PreviewScan_t2475026AE7698ACA093C3E490C91289788F3B399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mB6914DCCE1C19DA35F5A7EEA7FEB0693AEF0A4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreviewScan_U3CStartU3Eb__9_0_m29EFBBB9996C8A3406C7D2DB0FAFC253233A6F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryGetComponent(out rawImage);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179** L_0 = (&__this->___rawImage_7);
		bool L_1;
		L_1 = Component_TryGetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mB6914DCCE1C19DA35F5A7EEA7FEB0693AEF0A4A9(__this, L_0, Component_TryGetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_mB6914DCCE1C19DA35F5A7EEA7FEB0693AEF0A4A9_RuntimeMethod_var);
		// confirmButton.onClick.AddListener(() =>
		// {
		//     DataBox.Data.scanTexture = docScan.GetFinalTexture() ? docScan.GetFinalTexture() : (Texture2D)rawImage.texture;
		//     SceneManager.LoadScene("WriteScene");
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___confirmButton_6;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)PreviewScan_U3CStartU3Eb__9_0_m29EFBBB9996C8A3406C7D2DB0FAFC253233A6F25_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PreviewScan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewScan__ctor_mD8A7EE20EA22028585DE8C93F91C8736A4D26CD8 (PreviewScan_t2475026AE7698ACA093C3E490C91289788F3B399* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PreviewScan::<Start>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewScan_U3CStartU3Eb__9_0_m29EFBBB9996C8A3406C7D2DB0FAFC253233A6F25 (PreviewScan_t2475026AE7698ACA093C3E490C91289788F3B399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B609FAEDCE97F530AF5F787E52BB9C8DA59E114);
		s_Il2CppMethodInitialized = true;
	}
	DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* G_B2_0 = NULL;
	DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* G_B1_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B3_0 = NULL;
	DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* G_B3_1 = NULL;
	{
		// DataBox.Data.scanTexture = docScan.GetFinalTexture() ? docScan.GetFinalTexture() : (Texture2D)rawImage.texture;
		DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* L_0;
		L_0 = DataBox_get_Data_m5C855E136D51653DD5CCA400E75B9AFF8234E76D(NULL);
		DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* L_1 = __this->___docScan_5;
		NullCheck(L_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = DocScan_GetFinalTexture_mC8DD3D91FAA6AF82C743217E1B564E82C28CA190(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
	}
	{
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_4 = __this->___rawImage_7;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline(L_4, NULL);
		G_B3_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_5, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0029:
	{
		DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* L_6 = __this->___docScan_5;
		NullCheck(L_6);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7;
		L_7 = DocScan_GetFinalTexture_mC8DD3D91FAA6AF82C743217E1B564E82C28CA190(L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		G_B3_1->___scanTexture_5 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___scanTexture_5), (void*)G_B3_0);
		// SceneManager.LoadScene("WriteScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3B609FAEDCE97F530AF5F787E52BB9C8DA59E114, NULL);
		// });
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
// DataBox DataBox::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* DataBox_get_Data_m5C855E136D51653DD5CCA400E75B9AFF8234E76D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (data == null)
		DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* L_0 = ((DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_StaticFields*)il2cpp_codegen_static_fields_for(DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_il2cpp_TypeInfo_var))->___data_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912*)NULL;
	}

IL_000f:
	{
		// return data;
		DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* L_2 = ((DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_StaticFields*)il2cpp_codegen_static_fields_for(DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_il2cpp_TypeInfo_var))->___data_4;
		return L_2;
	}
}
// System.Void DataBox::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataBox_Awake_mAB02689DB13F80070F13DBAF9BA805301451F276 (DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataBox.data)
		DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* L_0 = ((DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_StaticFields*)il2cpp_codegen_static_fields_for(DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_il2cpp_TypeInfo_var))->___data_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		return;
	}

IL_0013:
	{
		// DataBox.data = this;
		((DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_StaticFields*)il2cpp_codegen_static_fields_for(DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_il2cpp_TypeInfo_var))->___data_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_StaticFields*)il2cpp_codegen_static_fields_for(DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912_il2cpp_TypeInfo_var))->___data_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// }
		return;
	}
}
// System.Void DataBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataBox__ctor_m8AB99EF1B6DFB6B49FF90898100B9584ACDDBAB7 (DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* __this, const RuntimeMethod* method) 
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
// System.Void AndroidPermissionCallback::add_OnPermissionGrantedAction(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_add_OnPermissionGrantedAction_m26DAAD3572478A277B2F7634EFF9B3567ACAF017 (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnPermissionGrantedAction_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___OnPermissionGrantedAction_4);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPermissionCallback::remove_OnPermissionGrantedAction(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_remove_OnPermissionGrantedAction_m61B1A2868F4B449C88450D03694AFF25DF19E73D (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnPermissionGrantedAction_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___OnPermissionGrantedAction_4);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPermissionCallback::add_OnPermissionDeniedAction(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_add_OnPermissionDeniedAction_m0DF3C6C260FB2979FA3A8B632C7361727AB844A2 (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnPermissionDeniedAction_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___OnPermissionDeniedAction_5);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPermissionCallback::remove_OnPermissionDeniedAction(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_remove_OnPermissionDeniedAction_m2027B51908E72E7536BFB112E71019EE257EB92D (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnPermissionDeniedAction_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___OnPermissionDeniedAction_5);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPermissionCallback::add_OnPermissionDeniedAndDontAskAgainAction(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_add_OnPermissionDeniedAndDontAskAgainAction_m8C557CBD97954197FD0AE133AA94099047E2E29A (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnPermissionDeniedAndDontAskAgainAction_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___OnPermissionDeniedAndDontAskAgainAction_6);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPermissionCallback::remove_OnPermissionDeniedAndDontAskAgainAction(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_remove_OnPermissionDeniedAndDontAskAgainAction_m5F462F0BE1E7F28573E4E3F84B362396D197612C (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnPermissionDeniedAndDontAskAgainAction_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___OnPermissionDeniedAndDontAskAgainAction_6);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPermissionCallback::.ctor(System.Action`1<System.String>,System.Action`1<System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback__ctor_mF139FA1F4ECE0F1C18777B135DB1C631E75ECA00 (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_onGrantedCallback, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_onDeniedCallback, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_onDeniedAndDontAskAgainCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163E615278B2AE83873F54F03D93170DAB900F53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.unity3d.plugin.UnityAndroidPermissions$IPermissionRequestResult")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral163E615278B2AE83873F54F03D93170DAB900F53, NULL);
		// if (onGrantedCallback != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___0_onGrantedCallback;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnPermissionGrantedAction += onGrantedCallback;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ___0_onGrantedCallback;
		AndroidPermissionCallback_add_OnPermissionGrantedAction_m26DAAD3572478A277B2F7634EFF9B3567ACAF017(__this, L_1, NULL);
	}

IL_0015:
	{
		// if (onDeniedCallback != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___1_onDeniedCallback;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// OnPermissionDeniedAction += onDeniedCallback;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___1_onDeniedCallback;
		AndroidPermissionCallback_add_OnPermissionDeniedAction_m0DF3C6C260FB2979FA3A8B632C7361727AB844A2(__this, L_3, NULL);
	}

IL_001f:
	{
		// if (onDeniedAndDontAskAgainCallback != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___2_onDeniedAndDontAskAgainCallback;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// OnPermissionDeniedAndDontAskAgainAction += onDeniedAndDontAskAgainCallback;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = ___2_onDeniedAndDontAskAgainCallback;
		AndroidPermissionCallback_add_OnPermissionDeniedAndDontAskAgainAction_m8C557CBD97954197FD0AE133AA94099047E2E29A(__this, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void AndroidPermissionCallback::OnPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_OnPermissionGranted_mB9950440C202ADA1ED9091216DF67B54BD85668D (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, String_t* ___0_permissionName, const RuntimeMethod* method) 
{
	{
		// if (OnPermissionGrantedAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnPermissionGrantedAction_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnPermissionGrantedAction(permissionName);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___OnPermissionGrantedAction_4;
		String_t* L_2 = ___0_permissionName;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void AndroidPermissionCallback::OnPermissionDenied(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_OnPermissionDenied_mD336BE4A173149EFE3BBC446A03D17F7B65FA770 (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, String_t* ___0_permissionName, const RuntimeMethod* method) 
{
	{
		// if (OnPermissionDeniedAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnPermissionDeniedAction_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnPermissionDeniedAction(permissionName);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___OnPermissionDeniedAction_5;
		String_t* L_2 = ___0_permissionName;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void AndroidPermissionCallback::OnPermissionDeniedAndDontAskAgain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionCallback_OnPermissionDeniedAndDontAskAgain_mF7D43E5DDF4484A394072B4A4722C54DF5739BDA (AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* __this, String_t* ___0_permissionName, const RuntimeMethod* method) 
{
	{
		// if (OnPermissionDeniedAndDontAskAgainAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnPermissionDeniedAndDontAskAgainAction_6;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnPermissionDeniedAndDontAskAgainAction(permissionName);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___OnPermissionDeniedAndDontAskAgainAction_6;
		String_t* L_2 = ___0_permissionName;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_2, NULL);
		return;
	}

IL_0015:
	{
		// else if (OnPermissionDeniedAction != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = __this->___OnPermissionDeniedAction_5;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// OnPermissionDeniedAction(permissionName);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = __this->___OnPermissionDeniedAction_5;
		String_t* L_5 = ___0_permissionName;
		NullCheck(L_4);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_4, L_5, NULL);
	}

IL_0029:
	{
		// }
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
// UnityEngine.AndroidJavaObject AndroidPermissionsManager::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetActivity_m7944CE493C3132F6DE636CE6EE716497C443FF52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Activity == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var))->___m_Activity_0;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// m_Activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var))->___m_Activity_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var))->___m_Activity_0), (void*)L_2);
	}

IL_0020:
	{
		// return m_Activity;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var))->___m_Activity_0;
		return L_3;
	}
}
// UnityEngine.AndroidJavaObject AndroidPermissionsManager::GetPermissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetPermissionsService_mA80FD7164F6392A339F5204018317CEB13464AB2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B2_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B1_0 = NULL;
	{
		// return m_PermissionService ??
		//     (m_PermissionService = new AndroidJavaObject("com.unity3d.plugin.UnityAndroidPermissions"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var))->___m_PermissionService_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_3, _stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860, L_2, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = L_3;
		((AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var))->___m_PermissionService_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628_il2cpp_TypeInfo_var))->___m_PermissionService_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.Boolean AndroidPermissionsManager::IsPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPermissionsManager_IsPermissionGranted_mDACCFF6F1E407F38E57E29879EE3BE9515B91C6D (String_t* ___0_permissionName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetPermissionsService().Call<bool>("IsPermissionGranted", GetActivity(), permissionName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPermissionsManager_GetPermissionsService_mA80FD7164F6392A339F5204018317CEB13464AB2(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidPermissionsManager_GetActivity_m7944CE493C3132F6DE636CE6EE716497C443FF52(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___0_permissionName;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		bool L_6;
		L_6 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87, L_4, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void AndroidPermissionsManager::RequestPermission(System.String,AndroidPermissionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_RequestPermission_m59ED9B9E62223F68E7FBA0B8044C90DAED57EB26 (String_t* ___0_permissionName, AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RequestPermission(new[] { permissionName }, callback);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = ___0_permissionName;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* L_3 = ___1_callback;
		AndroidPermissionsManager_RequestPermission_m923F2CA895193A7255A9937C7C0B09460C9B593B(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void AndroidPermissionsManager::RequestPermission(System.String[],AndroidPermissionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_RequestPermission_m923F2CA895193A7255A9937C7C0B09460C9B593B (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_permissionNames, AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetPermissionsService().Call("RequestPermissionAsync", GetActivity(), permissionNames, callback);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidPermissionsManager_GetPermissionsService_mA80FD7164F6392A339F5204018317CEB13464AB2(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidPermissionsManager_GetActivity_m7944CE493C3132F6DE636CE6EE716497C443FF52(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___0_permissionNames;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		AndroidPermissionCallback_t5E526D38AFA4474C18F9E260F06E2427A748CC67* L_7 = ___1_callback;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF, L_6, NULL);
		// }
		return;
	}
}
// System.Void AndroidPermissionsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager__ctor_m86383EF853DA389AD6EE5A1DC721B947F257AD1F (AndroidPermissionsManager_t134BD2B8AE6F84E006819373E875B4D235EC8628* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void LobbyManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_Start_mF549C6A849CDD18D13D46BB3DF47AA45A20A0D29 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyManager_U3CStartU3Eb__7_0_m6706D6F60E9ED0BA330A6E7FE6FC8254876EECB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyManager_U3CStartU3Eb__7_1_mB31C3141EB5EC15AF4B4DEE43580E77FFB25F5AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyManager_U3CStartU3Eb__7_2_mC215A96FCD0208F721EC8148208BA1BDBE2DBDA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(1, NULL);
		// GoScanButton.onClick.AddListener(() => GoScanScene());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___GoScanButton_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)LobbyManager_U3CStartU3Eb__7_0_m6706D6F60E9ED0BA330A6E7FE6FC8254876EECB7_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// GoReadButton.onClick.AddListener(() => GoReadScene());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___GoReadButton_5;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)LobbyManager_U3CStartU3Eb__7_1_mB31C3141EB5EC15AF4B4DEE43580E77FFB25F5AD_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// GoPaintButton.onClick.AddListener(() => TestScene());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___GoPaintButton_6;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)LobbyManager_U3CStartU3Eb__7_2_mC215A96FCD0208F721EC8148208BA1BDBE2DBDA0_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_Update_m2EDDF5EAAD4D4C87A19CF970492F05044168A99C (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	{
		// ExitApp();
		LobbyManager_ExitApp_m9E29F464C76C533094A914678F1EF72885257664(__this, NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::GoScanScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_GoScanScene_mD961200015DE02F7326A70E28030AFA3621ACDBE (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB79D6EAB3A258DC9D18EF5DD8FB4729D900340);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ScanScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral8CB79D6EAB3A258DC9D18EF5DD8FB4729D900340, NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::GoReadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_GoReadScene_m6F33F7425293A1C611038D407681E6EA26038184 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FC7943DD76F3F96334A4F0C277C83B7E229EE84);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ReadScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral1FC7943DD76F3F96334A4F0C277C83B7E229EE84, NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::TestScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_TestScene_m09E9FCE35446C34B43EC292B80FD1619435DA7F3 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(4);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(4, NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::ExitApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_ExitApp_m9E29F464C76C533094A914678F1EF72885257664 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void LobbyManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager__ctor_m1A4D2FDD6CF3611918EF889457B0D4ABA7384C4B (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LobbyManager::<Start>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_U3CStartU3Eb__7_0_m6706D6F60E9ED0BA330A6E7FE6FC8254876EECB7 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	{
		// GoScanButton.onClick.AddListener(() => GoScanScene());
		LobbyManager_GoScanScene_mD961200015DE02F7326A70E28030AFA3621ACDBE(__this, NULL);
		return;
	}
}
// System.Void LobbyManager::<Start>b__7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_U3CStartU3Eb__7_1_mB31C3141EB5EC15AF4B4DEE43580E77FFB25F5AD (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	{
		// GoReadButton.onClick.AddListener(() => GoReadScene());
		LobbyManager_GoReadScene_m6F33F7425293A1C611038D407681E6EA26038184(__this, NULL);
		return;
	}
}
// System.Void LobbyManager::<Start>b__7_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_U3CStartU3Eb__7_2_mC215A96FCD0208F721EC8148208BA1BDBE2DBDA0 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	{
		// GoPaintButton.onClick.AddListener(() => TestScene());
		LobbyManager_TestScene_m09E9FCE35446C34B43EC292B80FD1619435DA7F3(__this, NULL);
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
// System.Void ReaderManager::AddImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_AddImage_m2A9A3A083B5480B01EE882DCEFE5E70EB1EE841A (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_imageToAdd, const RuntimeMethod* method) 
{
	{
		// TrackingRaw.texture = imageToAdd;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = __this->___TrackingRaw_12;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___0_imageToAdd;
		NullCheck(L_0);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_0, L_1, NULL);
		// _getTexture = imageToAdd;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_imageToAdd;
		__this->____getTexture_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____getTexture_14), (void*)L_2);
		// }
		return;
	}
}
// System.Void ReaderManager::ConfirmImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_ConfirmImage_m540455479A65DD92AAC9006603D30D56A8D2D001 (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC199F22C2CB642C6E285585F4A788B6D7FE92931);
		s_Il2CppMethodInitialized = true;
	}
	MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* V_0 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// m_TrackedImageManager.enabled = true;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_TrackedImageManager_16;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// library = m_TrackedImageManager.CreateRuntimeLibrary();
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_1 = __this->___m_TrackedImageManager_16;
		NullCheck(L_1);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_2;
		L_2 = ARTrackedImageManager_CreateRuntimeLibrary_m53343F2B04F48AE642735069B9348B0EAF009D1E(L_1, (XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42*)NULL, NULL);
		__this->___library_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___library_15), (void*)L_2);
		// m_TrackedImageManager.referenceLibrary = library;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_3 = __this->___m_TrackedImageManager_16;
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_4 = __this->___library_15;
		NullCheck(L_3);
		ARTrackedImageManager_set_referenceLibrary_m826772B820572A41FE7B566E0F6E0C25024D0E5E(L_3, L_4, NULL);
		// if (m_TrackedImageManager.referenceLibrary is MutableRuntimeReferenceImageLibrary mutableLibrary)
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_5 = __this->___m_TrackedImageManager_16;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ARTrackedImageManager_get_referenceLibrary_mD811689B94E007CD8F708D91155C8DC575E948DD(L_5, NULL);
		V_0 = ((MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8*)IsInstClass((RuntimeObject*)L_6, MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8_il2cpp_TypeInfo_var));
		MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		// mutableLibrary.ScheduleAddImageWithValidationJob(
		//     _getTexture,
		//     "targetImage",
		//     0.5f /* 50 cm */);
		MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* L_8 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->____getTexture_14;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_10), (0.5f), /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_11 = V_1;
		AddReferenceImageJobState_tCF90A84092F3D2A7536D1D28C9E6EC0D7F53937A L_12;
		L_12 = MutableRuntimeReferenceImageLibraryExtensions_ScheduleAddImageWithValidationJob_m7FBA37C8669AAED35DB626632C60D68085CF6FED(L_8, L_9, _stringLiteralC199F22C2CB642C6E285585F4A788B6D7FE92931, L_10, L_11, NULL);
	}

IL_0068:
	{
		// QRCodeDetectController.grabPaper = false;
		QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* L_13 = __this->___QRCodeDetectController_4;
		NullCheck(L_13);
		L_13->___grabPaper_18 = (bool)0;
		// }
		return;
	}
}
// System.Void ReaderManager::ReReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_ReReading_m54FE018668932D725E730E994539181B04DCC154 (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) 
{
	{
		// FbList.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___FbList_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// TrackingUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___TrackingUI_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// qrGuideText.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___qrGuideText_7;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// QRCodeDetectController.RunningShotMode();
		QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* L_4 = __this->___QRCodeDetectController_4;
		NullCheck(L_4);
		QRCodeDetectController_RunningShotMode_m13A326A89DA4F46ED0F35BD1ED8DF4F590D483CB(L_4, NULL);
		// reReadingButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___reReadingButton_8;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ReaderManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_Start_m5A2E24412FFD602E32AC4FD51D6EA83F28E43EBC (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderManager_U3CStartU3Eb__16_0_mA65B8ADAEFDC2A9E2DAE1E96ED10A383411C6D36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TrackingConfirm.onClick.AddListener(() => {
		//     ConfirmImage();
		//     TrackingConfirm.transform.parent.parent.gameObject.SetActive(false);
		// }) ;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___TrackingConfirm_13;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)ReaderManager_U3CStartU3Eb__16_0_mA65B8ADAEFDC2A9E2DAE1E96ED10A383411C6D36_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// StartCoroutine(SetRawInit());
		RuntimeObject* L_3;
		L_3 = ReaderManager_SetRawInit_m72CBE6C43A98DDF73A3EF930AA71A91724C18F10(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ReaderManager::SetRawInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderManager_SetRawInit_m72CBE6C43A98DDF73A3EF930AA71A91724C18F10 (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE* L_0 = (U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE*)il2cpp_codegen_object_new(U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSetRawInitU3Ed__17__ctor_mA3E7C7E1AA2144354B5BB10EDB7A122AB983F765(L_0, 0, NULL);
		U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ReaderManager::BackScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_BackScene_m606458F56F13991353DDBAD81BFC38F0E0EAF5B4 (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEED4E15CAE7C78EC40E1F5B861BB5D65134C6B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LobbyScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralFEED4E15CAE7C78EC40E1F5B861BB5D65134C6B3, NULL);
		// }
		return;
	}
}
// System.Void ReaderManager::LoadTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_LoadTexture_mE86383E33A4207FCED507C691CF39A0BEBEB6F21 (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(FirebaseConnection.Instance.LoadBytes(path, ReadTexture));
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_0 = ((FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var))->___Instance_4;
		String_t* L_1 = ___0_path;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___ReadTexture_6;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = FirebaseConnection_LoadBytes_m67F99545F778899EF84088B4EF313D637E2EE00E(L_0, L_1, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// TrackingUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___TrackingUI_11;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ReaderManager::LoadList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_LoadList_m5A07CE555FA94D11B8D68C3BBBB03DFC14976EAA (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, String_t* ___0_qrText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(FirebaseConnection.Instance.LoadList(this, qrText));
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_0 = ((FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var))->___Instance_4;
		String_t* L_1 = ___0_qrText;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = FirebaseConnection_LoadList_m2C7CBDF5D02EFF5DEDF1A91F5D4D41C0AF2A3CAE(L_0, __this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// qrGuideText.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___qrGuideText_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// FbList.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___FbList_9;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// reReadingButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___reReadingButton_8;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ReaderManager::SetList(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_SetList_mAD2F3E5062B8B8EC545C1D57F15A8C83D2D16A6A (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, String_t* ___0_folder, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_dic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mE77056BB2254A3C176DC7A9FEFA36B73CA2A643D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m05CE30C4C39607A0CF3C2FA755112BA44C7521D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_1_U3CSetListU3Eb__0_mAD8741186A71012920AD31B5C7FD522D3ED82691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* V_0 = NULL;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_4 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_5 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* L_0 = (U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_mA46E0080D8C1DF50B0CE32A9685CDA17532666B1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* L_1 = V_0;
		String_t* L_2 = ___0_folder;
		NullCheck(L_1);
		L_1->___folder_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___folder_0), (void*)L_2);
		U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// foreach (KeyValuePair<string, object>item in dic) {
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___1_dic;
		NullCheck(L_4);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_5;
		L_5 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_4, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dd:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_1), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00cf_1;
			}

IL_0020_1:
			{
				U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* L_6 = (U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				U3CU3Ec__DisplayClass21_1__ctor_mDE8CD7EBA8F99FEB2CA0A39CA205E9E89DB1544C(L_6, NULL);
				V_2 = L_6;
				U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* L_7 = V_2;
				U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* L_8 = V_0;
				NullCheck(L_7);
				L_7->___CSU24U3CU3E8__locals1_1 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&L_7->___CSU24U3CU3E8__locals1_1), (void*)L_8);
				// foreach (KeyValuePair<string, object>item in dic) {
				U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* L_9 = V_2;
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_10;
				L_10 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_1), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				NullCheck(L_9);
				L_9->___item_0 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&L_9->___item_0))->___key_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&L_9->___item_0))->___value_1), (void*)NULL);
				#endif
				// GameObject obj = Instantiate(listTextPrefab, listTextPrefab.transform.parent);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___listTextPrefab_10;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___listTextPrefab_10;
				NullCheck(L_12);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
				L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
				NullCheck(L_13);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
				L_14 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_13, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
				L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_11, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				V_3 = L_15;
				// Debug.Log(item.Key);
				U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* L_16 = V_2;
				NullCheck(L_16);
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* L_17 = (&L_16->___item_0);
				String_t* L_18;
				L_18 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline(L_17, KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
				// Debug.Log(item.Value.ToString());
				U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* L_19 = V_2;
				NullCheck(L_19);
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* L_20 = (&L_19->___item_0);
				RuntimeObject* L_21;
				L_21 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline(L_20, KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				NullCheck(L_21);
				String_t* L_22;
				L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_22, NULL);
				// obj.TryGetComponent(out TextMeshProUGUI listText);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_3;
				NullCheck(L_23);
				bool L_24;
				L_24 = GameObject_TryGetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m05CE30C4C39607A0CF3C2FA755112BA44C7521D3(L_23, (&V_4), GameObject_TryGetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m05CE30C4C39607A0CF3C2FA755112BA44C7521D3_RuntimeMethod_var);
				// if (listText == null) return;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = V_4;
				bool L_26;
				L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_26)
				{
					goto IL_0090_1;
				}
			}
			{
				// if (listText == null) return;
				goto IL_00eb;
			}

IL_0090_1:
			{
				// listText.text = item.Key;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_27 = V_4;
				U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* L_28 = V_2;
				NullCheck(L_28);
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* L_29 = (&L_28->___item_0);
				String_t* L_30;
				L_30 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline(L_29, KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_27);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_27, L_30);
				// obj.TryGetComponent(out Button listButton);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_3;
				NullCheck(L_31);
				bool L_32;
				L_32 = GameObject_TryGetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mE77056BB2254A3C176DC7A9FEFA36B73CA2A643D(L_31, (&V_5), GameObject_TryGetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mE77056BB2254A3C176DC7A9FEFA36B73CA2A643D_RuntimeMethod_var);
				// listButton.onClick.AddListener(() =>
				// {
				//     string path = $"{folder}/{item.Value}";
				//     LoadTexture(path);
				//     FbList.SetActive(false);
				// });
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = V_5;
				NullCheck(L_33);
				ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_34;
				L_34 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_33, NULL);
				U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* L_35 = V_2;
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_36 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
				NullCheck(L_36);
				UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_36, L_35, (intptr_t)((void*)U3CU3Ec__DisplayClass21_1_U3CSetListU3Eb__0_mAD8741186A71012920AD31B5C7FD522D3ED82691_RuntimeMethod_var), NULL);
				NullCheck(L_34);
				UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_34, L_36, NULL);
				// obj.gameObject.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_3;
				NullCheck(L_37);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
				L_38 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_37, NULL);
				NullCheck(L_38);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
			}

IL_00cf_1:
			{
				// foreach (KeyValuePair<string, object>item in dic) {
				bool L_39;
				L_39 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_1), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_00eb;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void ReaderManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager__ctor_m164D669D77BE28B50D0D49E7552AF8AFCF769E3F (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ReaderManager::<Start>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderManager_U3CStartU3Eb__16_0_mA65B8ADAEFDC2A9E2DAE1E96ED10A383411C6D36 (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) 
{
	{
		// ConfirmImage();
		ReaderManager_ConfirmImage_m540455479A65DD92AAC9006603D30D56A8D2D001(__this, NULL);
		// TrackingConfirm.transform.parent.parent.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___TrackingConfirm_13;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }) ;
		return;
	}
}
// System.Boolean ReaderManager::<SetRawInit>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderManager_U3CSetRawInitU3Eb__17_0_mBF18CD93EE09946994483C490D9185DE64821E7F (ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(() => m_TrackedImageManager != null);
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_TrackedImageManager_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
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
// System.Void ReaderManager/<SetRawInit>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetRawInitU3Ed__17__ctor_mA3E7C7E1AA2144354B5BB10EDB7A122AB983F765 (U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ReaderManager/<SetRawInit>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetRawInitU3Ed__17_System_IDisposable_Dispose_mD4970A6ABA95B6A28C6A6CCED3670A3B6F748874 (U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ReaderManager/<SetRawInit>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetRawInitU3Ed__17_MoveNext_m61F1B3A3F929762152D40972DB92D0DA4356B22E (U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderManager_U3CSetRawInitU3Eb__17_0_mBF18CD93EE09946994483C490D9185DE64821E7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => m_TrackedImageManager != null);
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_4 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, L_4, (intptr_t)((void*)ReaderManager_U3CSetRawInitU3Eb__17_0_mBF18CD93EE09946994483C490D9185DE64821E7F_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_6 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var targetObj = m_TrackedImageManager.trackedImagePrefab;
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_7 = V_1;
		NullCheck(L_7);
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_8 = L_7->___m_TrackedImageManager_16;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = ARTrackedImageManager_get_trackedImagePrefab_mC698D56D9B539242437FA40F1DDC6E4FE959DE2A_inline(L_8, NULL);
		V_2 = L_9;
		// raw = targetObj.GetComponentInChildren<RawImage>();
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_10 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_12;
		L_12 = GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741(L_11, GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->___raw_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___raw_5), (void*)L_12);
		// raw.texture = ReadTexture;
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_13 = V_1;
		NullCheck(L_13);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_14 = L_13->___raw_5;
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_15 = V_1;
		NullCheck(L_15);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = L_15->___ReadTexture_6;
		NullCheck(L_14);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_14, L_16, NULL);
		// m_TrackedImageManager.enabled = false;
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_17 = V_1;
		NullCheck(L_17);
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_18 = L_17->___m_TrackedImageManager_16;
		NullCheck(L_18);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ReaderManager/<SetRawInit>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetRawInitU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1A562CC66B78FAA4DDE7B31F0607952FEA57490F (U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ReaderManager/<SetRawInit>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetRawInitU3Ed__17_System_Collections_IEnumerator_Reset_mE5916FFB9FF8D533C4B21BBBB5A853F0AA5AF3E5 (U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetRawInitU3Ed__17_System_Collections_IEnumerator_Reset_mE5916FFB9FF8D533C4B21BBBB5A853F0AA5AF3E5_RuntimeMethod_var)));
	}
}
// System.Object ReaderManager/<SetRawInit>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetRawInitU3Ed__17_System_Collections_IEnumerator_get_Current_mC064A97545554C601E11FCF2E34F6EF6807D606A (U3CSetRawInitU3Ed__17_tA8A114D79339C5DFA65F597FC155D74E61E984FE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ReaderManager/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mA46E0080D8C1DF50B0CE32A9685CDA17532666B1 (U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ReaderManager/<>c__DisplayClass21_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_1__ctor_mDE8CD7EBA8F99FEB2CA0A39CA205E9E89DB1544C (U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ReaderManager/<>c__DisplayClass21_1::<SetList>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_1_U3CSetListU3Eb__0_mAD8741186A71012920AD31B5C7FD522D3ED82691 (U3CU3Ec__DisplayClass21_1_t22C14DE4E2F55B8F2FC4CF1B819D3920564588EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string path = $"{folder}/{item.Value}";
		U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		String_t* L_1 = L_0->___folder_0;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* L_2 = (&__this->___item_0);
		RuntimeObject* L_3;
		L_3 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline(L_2, KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_1, L_3, NULL);
		V_0 = L_4;
		// LoadTexture(path);
		U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* L_5 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_5);
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_6 = L_5->___U3CU3E4__this_1;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		ReaderManager_LoadTexture_mE86383E33A4207FCED507C691CF39A0BEBEB6F21(L_6, L_7, NULL);
		// FbList.SetActive(false);
		U3CU3Ec__DisplayClass21_0_t8628F23DA815ACE4E430356C9EAC2CFFC88DBFD1* L_8 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_8);
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_9 = L_8->___U3CU3E4__this_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___FbList_9;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// });
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
// System.Void ScanSceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanSceneManager_Start_m32777946CA1751D4216A17A3BF6F8EB695083147 (ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A* __this, const RuntimeMethod* method) 
{
	{
		// ResultObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ResultObject_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// shotButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___shotButton_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ScanSceneManager::CloseResultImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanSceneManager_CloseResultImage_m54AE622B9B477350FAEF1DE88F2DCCB44114F6E1 (ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A* __this, const RuntimeMethod* method) 
{
	{
		// ResultObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ResultObject_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// shotButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___shotButton_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// DocScan.RunningShotMode();
		DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* L_2 = __this->___DocScan_4;
		NullCheck(L_2);
		DocScan_RunningShotMode_m03BA6573C3791316CEA6B12EB70706E35E3AA07C(L_2, NULL);
		// }
		return;
	}
}
// System.Void ScanSceneManager::OpenResultImage(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanSceneManager_OpenResultImage_m0F3C4F38E079A77314007B6A1F8E44F36E7CAD1B (ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResultObject.GetComponent<RectTransform>().sizeDelta = size;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ResultObject_5;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_size;
		NullCheck(L_1);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_1, L_2, NULL);
		// ResultObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___ResultObject_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// shotButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___shotButton_6;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ScanSceneManager::BackScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanSceneManager_BackScene_m05975D9576CC1992B12BB7BF989286E730ACA872 (ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEED4E15CAE7C78EC40E1F5B861BB5D65134C6B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LobbyScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralFEED4E15CAE7C78EC40E1F5B861BB5D65134C6B3, NULL);
		// }
		return;
	}
}
// System.Void ScanSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanSceneManager__ctor_mA595F5258D8D93108356D7AC5A20C45564E42917 (ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A* __this, const RuntimeMethod* method) 
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
// System.Void TestManager::AddImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_AddImage_mD68BF6FB909ADBE4BDA6D4310393D5277178226A (TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_imageToAdd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D062ADDC236A0E19766B86CD37A95E48E93B174);
		s_Il2CppMethodInitialized = true;
	}
	MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* V_0 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_TrackedImageManager.referenceLibrary is MutableRuntimeReferenceImageLibrary mutableLibrary)
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_TrackedImageManager_8;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ARTrackedImageManager_get_referenceLibrary_mD811689B94E007CD8F708D91155C8DC575E948DD(L_0, NULL);
		V_0 = ((MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8*)IsInstClass((RuntimeObject*)L_1, MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8_il2cpp_TypeInfo_var));
		MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// mutableLibrary.ScheduleAddImageWithValidationJob(
		//     imageToAdd,
		//     "my new image",
		//     0.5f /* 50 cm */);
		MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* L_3 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___0_imageToAdd;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_5), (0.5f), /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_1), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = V_1;
		AddReferenceImageJobState_tCF90A84092F3D2A7536D1D28C9E6EC0D7F53937A L_7;
		L_7 = MutableRuntimeReferenceImageLibraryExtensions_ScheduleAddImageWithValidationJob_m7FBA37C8669AAED35DB626632C60D68085CF6FED(L_3, L_4, _stringLiteral9D062ADDC236A0E19766B86CD37A95E48E93B174, L_5, L_6, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void TestManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_Start_m0BE4B7BFD92E678556B64E6366403B1DFF382737 (TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(SetRawInit());
		RuntimeObject* L_0;
		L_0 = TestManager_SetRawInit_m305EFE544C61B62FE17C3AEFE5769D18575607F2(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TestManager::BackScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_BackScene_m53BF258507AFEC865D98AFAC53612F5C7C7D9CFC (TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEED4E15CAE7C78EC40E1F5B861BB5D65134C6B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LobbyScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralFEED4E15CAE7C78EC40E1F5B861BB5D65134C6B3, NULL);
		// }
		return;
	}
}
// System.Void TestManager::LoadTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_LoadTexture_m741C9A7D9B39E8929B39AB841DC19CC65FD72D86 (TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tete.text = path;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___tete_7;
		String_t* L_1 = ___0_path;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// StartCoroutine(FirebaseConnection.Instance.LoadBytes(path, ReadTexture));
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_2 = ((FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var))->___Instance_4;
		String_t* L_3 = ___0_path;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___ReadTexture_6;
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = FirebaseConnection_LoadBytes_m67F99545F778899EF84088B4EF313D637E2EE00E(L_2, L_3, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TestManager::SetRawInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestManager_SetRawInit_m305EFE544C61B62FE17C3AEFE5769D18575607F2 (TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805* L_0 = (U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805*)il2cpp_codegen_object_new(U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSetRawInitU3Ed__9__ctor_m271629126B6494091DC92C8FF4F4C87B8776BC3C(L_0, 0, NULL);
		U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TestManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager__ctor_m246808729A142AED6EA812A21E052EAA0C777B00 (TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean TestManager::<SetRawInit>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestManager_U3CSetRawInitU3Eb__9_0_m08845BD408EBC1A6744DE142B4D4104B1675E450 (TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(() => m_TrackedImageManager != null);
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_TrackedImageManager_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
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
// System.Void TestManager/<SetRawInit>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetRawInitU3Ed__9__ctor_m271629126B6494091DC92C8FF4F4C87B8776BC3C (U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TestManager/<SetRawInit>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetRawInitU3Ed__9_System_IDisposable_Dispose_m1DF0F17D233C86799CE0EFA8B38ED4E9D4F6683B (U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TestManager/<SetRawInit>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetRawInitU3Ed__9_MoveNext_m383E2919E86A1A50C122E8C3D8E2E62E4C0246AF (U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_U3CSetRawInitU3Eb__9_0_m08845BD408EBC1A6744DE142B4D4104B1675E450_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => m_TrackedImageManager != null);
		TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* L_4 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, L_4, (intptr_t)((void*)TestManager_U3CSetRawInitU3Eb__9_0_m08845BD408EBC1A6744DE142B4D4104B1675E450_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_6 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// targetObj = m_TrackedImageManager.trackedImagePrefab;
		TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* L_7 = V_1;
		TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* L_8 = V_1;
		NullCheck(L_8);
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_9 = L_8->___m_TrackedImageManager_8;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = ARTrackedImageManager_get_trackedImagePrefab_mC698D56D9B539242437FA40F1DDC6E4FE959DE2A_inline(L_9, NULL);
		NullCheck(L_7);
		L_7->___targetObj_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___targetObj_4), (void*)L_10);
		// raw = targetObj.GetComponentInChildren<RawImage>();
		TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* L_11 = V_1;
		TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___targetObj_4;
		NullCheck(L_13);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_14;
		L_14 = GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741(L_13, GameObject_GetComponentInChildren_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m2B58BF7C028A3F46B38B52899D60B8EB6F686741_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___raw_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___raw_5), (void*)L_14);
		// raw.texture = ReadTexture;
		TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* L_15 = V_1;
		NullCheck(L_15);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_16 = L_15->___raw_5;
		TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* L_17 = V_1;
		NullCheck(L_17);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = L_17->___ReadTexture_6;
		NullCheck(L_16);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_16, L_18, NULL);
		// raw.gameObject.SetActive(true);
		TestManager_t78B2E23A1B6FDC9DFF49BF55B4058DEC12DBCC7B* L_19 = V_1;
		NullCheck(L_19);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_20 = L_19->___raw_5;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TestManager/<SetRawInit>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetRawInitU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB177855725EA7FA242AA57033D1211F8E1A574B1 (U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TestManager/<SetRawInit>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetRawInitU3Ed__9_System_Collections_IEnumerator_Reset_m2E697A5F5E64A03CE027C18430EA089A42AF43C4 (U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetRawInitU3Ed__9_System_Collections_IEnumerator_Reset_m2E697A5F5E64A03CE027C18430EA089A42AF43C4_RuntimeMethod_var)));
	}
}
// System.Object TestManager/<SetRawInit>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetRawInitU3Ed__9_System_Collections_IEnumerator_get_Current_mD3FA5C0F550462884A8DEE6FF8E125B197E3D030 (U3CSetRawInitU3Ed__9_tD5397FAB7913A562B5690C43C7204B26429D9805* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Navigation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation_Update_m8B9C2F786DCEDBB65BD03869DB567A1773B0B9ED (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) 
{
	{
		// OnBackPress();
		Navigation_OnBackPress_mA7FDE89BBF8E6E1AD9F0A7751D0D22A0B7F8A066(__this, NULL);
		// }
		return;
	}
}
// System.Void Navigation::OnBackPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation_OnBackPress_mA7FDE89BBF8E6E1AD9F0A7751D0D22A0B7F8A066 (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0096;
		}
	}
	{
		// if (navigationPoints[3].activeInHierarchy)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___navigationPoints_4;
		NullCheck(L_1);
		int32_t L_2 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// navigationPoints[3].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___navigationPoints_4;
		NullCheck(L_5);
		int32_t L_6 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// navigationPoints[2].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___navigationPoints_4;
		NullCheck(L_8);
		int32_t L_9 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		return;
	}

IL_0038:
	{
		// else if (navigationPoints[2].activeInHierarchy)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___navigationPoints_4;
		NullCheck(L_11);
		int32_t L_12 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		bool L_14;
		L_14 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_13, NULL);
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		// navigationPoints[2].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___navigationPoints_4;
		NullCheck(L_15);
		int32_t L_16 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// navigationPoints[1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___navigationPoints_4;
		NullCheck(L_18);
		int32_t L_19 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		return;
	}

IL_0064:
	{
		// else if (navigationPoints[1].activeInHierarchy)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___navigationPoints_4;
		NullCheck(L_21);
		int32_t L_22 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		bool L_24;
		L_24 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_23, NULL);
		if (!L_24)
		{
			goto IL_0090;
		}
	}
	{
		// navigationPoints[1].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___navigationPoints_4;
		NullCheck(L_25);
		int32_t L_26 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// navigationPoints[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = __this->___navigationPoints_4;
		NullCheck(L_28);
		int32_t L_29 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		return;
	}

IL_0090:
	{
		// else UnityEngine.SceneManagement.SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void Navigation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigation__ctor_m63EA9B52DBD1B65338196218077F4AF599724AD8 (Navigation_t9F99316B323A490310A05E96F2C7460595A0EC02* __this, const RuntimeMethod* method) 
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
// System.Void CreateFBList::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateFBList_Start_mAEAB81CF98B01BD708CF32D641CD145D00826711 (CreateFBList_tB0113EC6C6FCF9E04911AA16CDA3C93A21688324* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreateFBList::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateFBList_Update_mFB24A6972123F839B168DDEBF31C66B812A0AC07 (CreateFBList_tB0113EC6C6FCF9E04911AA16CDA3C93A21688324* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreateFBList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateFBList__ctor_mB941931015445359B9AD358F641BD9D6DB0892DB (CreateFBList_tB0113EC6C6FCF9E04911AA16CDA3C93A21688324* __this, const RuntimeMethod* method) 
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
// System.Void DocScan::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_Start_m75881275D1D45DAEBA35E7362BC03949858B3383 (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DocScan_OnPostRender_mFC9B9632FA10CF500A37CD9BE18EAC4EE40D6EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128_m8642BFCCC974B2CAFC1431475D75B1BB0D1D54CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cam == null)
		CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* L_0 = __this->___cam_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// cam = GameObject.FindObjectOfType<CameraRenderEvent>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* L_2;
		L_2 = Object_FindObjectOfType_TisCameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128_m8642BFCCC974B2CAFC1431475D75B1BB0D1D54CC(Object_FindObjectOfType_TisCameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128_m8642BFCCC974B2CAFC1431475D75B1BB0D1D54CC_RuntimeMethod_var);
		__this->___cam_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_6), (void*)L_2);
	}

IL_0019:
	{
		// if (cam != null)
		CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* L_3 = __this->___cam_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// cam.OnPostRenderEvent += OnPostRender;
		CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* L_5 = __this->___cam_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, __this, (intptr_t)((void*)DocScan_OnPostRender_mFC9B9632FA10CF500A37CD9BE18EAC4EE40D6EBC_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		CameraRenderEvent_add_OnPostRenderEvent_m61E8B49C949DF8DD140CACBA6934066557D3515B(L_5, L_6, NULL);
	}

IL_003e:
	{
		// screenShotWidth = Screen.width;
		int32_t L_7;
		L_7 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		__this->___screenShotWidth_11 = L_7;
		// screenShotHeight = Screen.height;
		int32_t L_8;
		L_8 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		__this->___screenShotHeight_12 = L_8;
		// _camtexture = new Texture2D(screenShotWidth, screenShotHeight, TextureFormat.RGB24, false);
		int32_t L_9 = __this->___screenShotWidth_11;
		int32_t L_10 = __this->___screenShotHeight_12;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_11, L_9, L_10, 3, (bool)0, NULL);
		__this->____camtexture_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camtexture_9), (void*)L_11);
		// inputDisplayAreaMat = new Mat(screenShotHeight, screenShotWidth, CvType.CV_8UC4, new Scalar(0, 0, 0, 255));
		int32_t L_12 = __this->___screenShotHeight_12;
		int32_t L_13 = __this->___screenShotWidth_11;
		il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		int32_t L_14 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_8UC4_12;
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_15 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_15, (0.0), (0.0), (0.0), (255.0), NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_16 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Mat__ctor_m1FCA33ACB157E2421388259EE1D18A2666CBA16B(L_16, L_12, L_13, L_14, L_15, NULL);
		__this->___inputDisplayAreaMat_16 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputDisplayAreaMat_16), (void*)L_16);
		// yuvMat = new Mat();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_17 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8(L_17, NULL);
		__this->___yuvMat_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___yuvMat_14), (void*)L_17);
		// yMat = new Mat();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_18 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8(L_18, NULL);
		__this->___yMat_15 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___yMat_15), (void*)L_18);
		// CONTOUR_COLOR = new Scalar(255, 0, 0, 255);
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_19 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_19, (255.0), (0.0), (0.0), (255.0), NULL);
		__this->___CONTOUR_COLOR_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CONTOUR_COLOR_18), (void*)L_19);
		// RunningShotMode();
		DocScan_RunningShotMode_m03BA6573C3791316CEA6B12EB70706E35E3AA07C(__this, NULL);
		// }
		return;
	}
}
// System.Void DocScan::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_OnDestroy_m8B8F9323ADDDBB0010B4E924A45B3745E800D6AD (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) 
{
	{
		// TextureMatDisposed();
		DocScan_TextureMatDisposed_m028A98AC09C0DBFCA0983C7DB7E4A99A85C6B083(__this, NULL);
		// grabScreenshot = false;
		__this->___grabScreenshot_5 = (bool)0;
		// }
		return;
	}
}
// UnityEngine.Texture2D DocScan::GetFinalTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DocScan_GetFinalTexture_mC8DD3D91FAA6AF82C743217E1B564E82C28CA190 (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return finalTexture ? finalTexture : null;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___finalTexture_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
	}

IL_000f:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___finalTexture_10;
		return L_2;
	}
}
// System.Void DocScan::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_OnPostRender_mFC9B9632FA10CF500A37CD9BE18EAC4EE40D6EBC (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) 
{
	{
		// if (grabScreenshot)
		bool L_0 = __this->___grabScreenshot_5;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// _camtexture.ReadPixels(new UnityEngine.Rect(0, 0, screenShotWidth, screenShotHeight), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->____camtexture_9;
		int32_t L_2 = __this->___screenShotWidth_11;
		int32_t L_3 = __this->___screenShotHeight_12;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), (0.0f), (0.0f), ((float)L_2), ((float)L_3), /*hidden argument*/NULL);
		NullCheck(L_1);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_1, L_4, 0, 0, NULL);
		// camImage.texture = _camtexture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = __this->___camImage_7;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->____camtexture_9;
		NullCheck(L_5);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_5, L_6, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void DocScan::RunningShotMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_RunningShotMode_m03BA6573C3791316CEA6B12EB70706E35E3AA07C (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) 
{
	{
		// grabScreenshot = true;
		__this->___grabScreenshot_5 = (bool)1;
		// }
		return;
	}
}
// System.Void DocScan::TakeScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_TakeScan_mAEDBBF90943769182AD91645AC106E6E6B98037A (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) 
{
	{
		// isScan = true;
		__this->___isScan_13 = (bool)1;
		// }
		return;
	}
}
// System.Void DocScan::TextureMatDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_TextureMatDisposed_m028A98AC09C0DBFCA0983C7DB7E4A99A85C6B083 (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAB3283D83D120FBC0AE635BE6138FBB7970851C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnWebCamTextureToMatHelperDisposed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFAB3283D83D120FBC0AE635BE6138FBB7970851C, NULL);
		// if (yuvMat != null)
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_0 = __this->___yuvMat_14;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// yuvMat.Dispose();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_1 = __this->___yuvMat_14;
		NullCheck(L_1);
		DisposableObject_Dispose_m470D40F22D92B4DFA3B83767935ABAF0B26A8C9A(L_1, NULL);
	}

IL_001d:
	{
		// if (yMat != null)
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_2 = __this->___yMat_15;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// yMat.Dispose();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_3 = __this->___yMat_15;
		NullCheck(L_3);
		DisposableObject_Dispose_m470D40F22D92B4DFA3B83767935ABAF0B26A8C9A(L_3, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void DocScan::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_Update_m54E1D6673C86ED97887662A08680ACE171081DAC (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tBE1B7FF0DEE1265DD66FED309EB53E20F8333C82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_0 = NULL;
	List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* V_1 = NULL;
	MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* V_2 = NULL;
	bool V_3 = false;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_7 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_8 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_9 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_10 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_11 = NULL;
	double V_12 = 0.0;
	int32_t V_13 = 0;
	double V_14 = 0.0;
	int32_t V_15 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t G_B12_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (grabScreenshot&&_camtexture)
		bool L_0 = __this->___grabScreenshot_5;
		if (!L_0)
		{
			goto IL_0488;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->____camtexture_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0488;
		}
	}
	{
		// Mat rgbaMat = new Mat(_camtexture.height, _camtexture.width, CvType.CV_8UC3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->____camtexture_9;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->____camtexture_9;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		int32_t L_7 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_8UC3_11;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_8 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Mat__ctor_m0B3B26A3BA6F97AB00B308B798383746116E8058(L_8, L_4, L_6, L_7, NULL);
		V_0 = L_8;
		// Utils.texture2DToMat(_camtexture, rgbaMat);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->____camtexture_9;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		Utils_texture2DToMat_m719D7CF7DB7529D4ED317A7AA5FBAFEED5FB6531(L_9, L_10, (bool)1, 0, NULL);
		// outputDisplayAreaMat = new Mat(rgbaMat.rows(), rgbaMat.cols(), rgbaMat.type(), new Scalar(0, 0, 0, 255));
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5(L_11, NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Mat_cols_mA8C3EC315EC7F3EB97B30381F8D8269BCA475297(L_13, NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Mat_type_mBCEE28CEFDDD469234C5ACEB5FE5437B41AC906E(L_15, NULL);
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_17 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_17, (0.0), (0.0), (0.0), (255.0), NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_18 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Mat__ctor_m1FCA33ACB157E2421388259EE1D18A2666CBA16B(L_18, L_12, L_14, L_16, L_17, NULL);
		__this->___outputDisplayAreaMat_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputDisplayAreaMat_17), (void*)L_18);
		// Imgproc.cvtColor(rgbaMat, yuvMat, Imgproc.COLOR_RGBA2RGB);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_19 = V_0;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_20 = __this->___yuvMat_14;
		Imgproc_cvtColor_mA0A5A6154878F195F2F71751D9F5068822833004(L_19, L_20, 1, NULL);
		// Imgproc.cvtColor(yuvMat, yuvMat, Imgproc.COLOR_RGB2YUV);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_21 = __this->___yuvMat_14;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_22 = __this->___yuvMat_14;
		Imgproc_cvtColor_mA0A5A6154878F195F2F71751D9F5068822833004(L_21, L_22, ((int32_t)83), NULL);
		// Core.extractChannel(yuvMat, yMat, 0);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_23 = __this->___yuvMat_14;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_24 = __this->___yMat_15;
		il2cpp_codegen_runtime_class_init_inline(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		Core_extractChannel_m845E1AD5ED60796369E7AF47AFAA30A46FB4417F(L_23, L_24, 0, NULL);
		// Imgproc.GaussianBlur(yMat, yMat, new Size(3, 3), 0);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_25 = __this->___yMat_15;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_26 = __this->___yMat_15;
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_27 = (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC*)il2cpp_codegen_object_new(Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Size__ctor_mD7D3D4B7411F9791AFE27A8D82C9D5091ED56EE6(L_27, (3.0), (3.0), NULL);
		Imgproc_GaussianBlur_m29269EF75C33C9C41921E3D1613519A27187D336(L_25, L_26, L_27, (0.0), NULL);
		// Imgproc.Canny(yMat, yMat, 50, 200, 3);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_28 = __this->___yMat_15;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_29 = __this->___yMat_15;
		Imgproc_Canny_m773B5322C178210F45E0EC0668EDDB8A57EDBC88(L_28, L_29, (50.0), (200.0), 3, NULL);
		// List<MatOfPoint> contours = new List<MatOfPoint>();
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_30 = (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*)il2cpp_codegen_object_new(List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26(L_30, List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var);
		V_1 = L_30;
		// Find4PointContours(yMat, contours);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_31 = __this->___yMat_15;
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_32 = V_1;
		DocScan_Find4PointContours_m82026618CA4043E5B81344BC226806CF640FA020(__this, L_31, L_32, NULL);
		// MatOfPoint maxAreaContour = GetMaxAreaContour(contours);
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_33 = V_1;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_34;
		L_34 = DocScan_GetMaxAreaContour_mC964AD624702BD82B60EB7B3C907F21BDA3B9A84(__this, L_33, NULL);
		V_2 = L_34;
		// maxAreaContour = OrderCornerPoints(maxAreaContour);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_35 = V_2;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_36;
		L_36 = DocScan_OrderCornerPoints_m38845A129965C62017592CC3F0C07FA6614651FA(__this, L_35, NULL);
		V_2 = L_36;
		// bool found = (maxAreaContour.size().area() > 0);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_37 = V_2;
		NullCheck(L_37);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_38;
		L_38 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_37, NULL);
		NullCheck(L_38);
		double L_39;
		L_39 = Size_area_mF7EE627885FFCF58D91D0FE30D81670932C777C8(L_38, NULL);
		V_3 = (bool)((((double)L_39) > ((double)(0.0)))? 1 : 0);
		// if (found)
		bool L_40 = V_3;
		if (!L_40)
		{
			goto IL_043e;
		}
	}
	{
		// using (Mat transformedMat = PerspectiveTransform(rgbaMat, maxAreaContour))
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_41 = V_0;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_42 = V_2;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_43;
		L_43 = DocScan_PerspectiveTransform_mF737D46352651BE23B51B7DA558CB3C8B78005FA(__this, L_41, L_42, NULL);
		V_4 = L_43;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0432:
			{// begin finally (depth: 1)
				{
					Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_44 = V_4;
					if (!L_44)
					{
						goto IL_043d;
					}
				}
				{
					Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_45 = V_4;
					NullCheck(L_45);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_45);
				}

IL_043d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// outputDisplayAreaMat.setTo(new Scalar(0, 0, 0, 255));
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_46 = __this->___outputDisplayAreaMat_17;
				Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_47 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
				NullCheck(L_47);
				Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_47, (0.0), (0.0), (0.0), (255.0), NULL);
				NullCheck(L_46);
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_48;
				L_48 = Mat_setTo_m46A78E6D5D2032E4D3D1642CCDAE8B00BFFEC9B6(L_46, L_47, NULL);
				// if (transformedMat.width() <= outputDisplayAreaMat.width() && transformedMat.height() <= outputDisplayAreaMat.height()
				//     && transformedMat.total() >= outputDisplayAreaMat.total() / 16)
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_49 = V_4;
				NullCheck(L_49);
				int32_t L_50;
				L_50 = Mat_width_mBCC955D36649BE38B1B73654032975EFE6E167C8(L_49, NULL);
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_51 = __this->___outputDisplayAreaMat_17;
				NullCheck(L_51);
				int32_t L_52;
				L_52 = Mat_width_mBCC955D36649BE38B1B73654032975EFE6E167C8(L_51, NULL);
				if ((((int32_t)L_50) > ((int32_t)L_52)))
				{
					goto IL_0430_1;
				}
			}
			{
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_53 = V_4;
				NullCheck(L_53);
				int32_t L_54;
				L_54 = Mat_height_m91A43CAF596AF1501503E6CE4BD683CC63B438DF(L_53, NULL);
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_55 = __this->___outputDisplayAreaMat_17;
				NullCheck(L_55);
				int32_t L_56;
				L_56 = Mat_height_m91A43CAF596AF1501503E6CE4BD683CC63B438DF(L_55, NULL);
				if ((((int32_t)L_54) > ((int32_t)L_56)))
				{
					goto IL_0430_1;
				}
			}
			{
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_57 = V_4;
				NullCheck(L_57);
				int64_t L_58;
				L_58 = Mat_total_mA4BBB7A9827E1521061C487825771C8404604B7F(L_57, NULL);
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_59 = __this->___outputDisplayAreaMat_17;
				NullCheck(L_59);
				int64_t L_60;
				L_60 = Mat_total_mA4BBB7A9827E1521061C487825771C8404604B7F(L_59, NULL);
				if ((((int64_t)L_58) < ((int64_t)((int64_t)(L_60/((int64_t)((int32_t)16)))))))
				{
					goto IL_0430_1;
				}
			}
			{
				// int x = outputDisplayAreaMat.width() / 2 - transformedMat.width() / 2;
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_61 = __this->___outputDisplayAreaMat_17;
				NullCheck(L_61);
				int32_t L_62;
				L_62 = Mat_width_mBCC955D36649BE38B1B73654032975EFE6E167C8(L_61, NULL);
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_63 = V_4;
				NullCheck(L_63);
				int32_t L_64;
				L_64 = Mat_width_mBCC955D36649BE38B1B73654032975EFE6E167C8(L_63, NULL);
				V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_62/2)), ((int32_t)(L_64/2))));
				// int y = outputDisplayAreaMat.height() / 2 - transformedMat.height() / 2;
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_65 = __this->___outputDisplayAreaMat_17;
				NullCheck(L_65);
				int32_t L_66;
				L_66 = Mat_height_m91A43CAF596AF1501503E6CE4BD683CC63B438DF(L_65, NULL);
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_67 = V_4;
				NullCheck(L_67);
				int32_t L_68;
				L_68 = Mat_height_m91A43CAF596AF1501503E6CE4BD683CC63B438DF(L_67, NULL);
				V_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_66/2)), ((int32_t)(L_68/2))));
				// using (Mat dstAreaMat = new Mat(outputDisplayAreaMat, new OpenCVForUnity.CoreModule.Rect(x, y, transformedMat.width(),
				//     transformedMat.height())))
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_69 = __this->___outputDisplayAreaMat_17;
				int32_t L_70 = V_5;
				int32_t L_71 = V_6;
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_72 = V_4;
				NullCheck(L_72);
				int32_t L_73;
				L_73 = Mat_width_mBCC955D36649BE38B1B73654032975EFE6E167C8(L_72, NULL);
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_74 = V_4;
				NullCheck(L_74);
				int32_t L_75;
				L_75 = Mat_height_m91A43CAF596AF1501503E6CE4BD683CC63B438DF(L_74, NULL);
				Rect_tBE1B7FF0DEE1265DD66FED309EB53E20F8333C82* L_76 = (Rect_tBE1B7FF0DEE1265DD66FED309EB53E20F8333C82*)il2cpp_codegen_object_new(Rect_tBE1B7FF0DEE1265DD66FED309EB53E20F8333C82_il2cpp_TypeInfo_var);
				NullCheck(L_76);
				Rect__ctor_mD7B06A14CCD29B7C31C74943A12C5DB901718544(L_76, L_70, L_71, L_73, L_75, NULL);
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_77 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
				NullCheck(L_77);
				Mat__ctor_m220B4BFFCA4CDF1E72C0AE79A73DBD27A19C177F(L_77, L_69, L_76, NULL);
				V_7 = L_77;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0424_1:
					{// begin finally (depth: 2)
						{
							Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_78 = V_7;
							if (!L_78)
							{
								goto IL_042f_1;
							}
						}
						{
							Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_79 = V_7;
							NullCheck(L_79);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_79);
						}

IL_042f_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// transformedMat.copyTo(dstAreaMat);
						Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_80 = V_4;
						Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_81 = V_7;
						NullCheck(L_80);
						Mat_copyTo_m7D410D11F7740D4B79443B4526E2282FC9D5FBF3(L_80, L_81, NULL);
						// if (isScan)
						bool L_82 = __this->___isScan_13;
						if (!L_82)
						{
							goto IL_0422_2;
						}
					}
					{
						// finalTexture = new Texture2D(dstAreaMat.width(), dstAreaMat.height(), TextureFormat.RGB24, false);
						Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_83 = V_7;
						NullCheck(L_83);
						int32_t L_84;
						L_84 = Mat_width_mBCC955D36649BE38B1B73654032975EFE6E167C8(L_83, NULL);
						Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_85 = V_7;
						NullCheck(L_85);
						int32_t L_86;
						L_86 = Mat_height_m91A43CAF596AF1501503E6CE4BD683CC63B438DF(L_85, NULL);
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_87 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
						NullCheck(L_87);
						Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_87, L_84, L_86, 3, (bool)0, NULL);
						__this->___finalTexture_10 = L_87;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___finalTexture_10), (void*)L_87);
						// Utils.matToTexture2D(dstAreaMat, finalTexture);
						Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_88 = V_7;
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_89 = __this->___finalTexture_10;
						il2cpp_codegen_runtime_class_init_inline(Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
						Utils_matToTexture2D_m16080BAB307F864212C3286528C917CEE8C84E09(L_88, L_89, (bool)1, 0, (bool)0, (bool)0, (bool)0, NULL);
						// scanImage.texture = finalTexture;
						RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_90 = __this->___scanImage_8;
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_91 = __this->___finalTexture_10;
						NullCheck(L_90);
						RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_90, L_91, NULL);
						// isScan = false;
						__this->___isScan_13 = (bool)0;
						// grabScreenshot = false;
						__this->___grabScreenshot_5 = (bool)0;
						// Point[] pts = maxAreaContour.toArray();
						MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_92 = V_2;
						NullCheck(L_92);
						PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_93;
						L_93 = MatOfPoint_toArray_mD69EA8997A4F9D0269DF0F30CBC83ECD4517D53C(L_92, NULL);
						// Point tl = pts[0];
						PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_94 = L_93;
						NullCheck(L_94);
						int32_t L_95 = 0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
						V_8 = L_96;
						// Point tr = pts[1];
						PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_97 = L_94;
						NullCheck(L_97);
						int32_t L_98 = 1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
						V_9 = L_99;
						// Point br = pts[2];
						PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_100 = L_97;
						NullCheck(L_100);
						int32_t L_101 = 2;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
						V_10 = L_102;
						// Point bl = pts[3];
						NullCheck(L_100);
						int32_t L_103 = 3;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_104 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
						V_11 = L_104;
						// double widthA = Math.Sqrt((br.x - bl.x) * (br.x - bl.x) + (br.y - bl.y) * (br.y - bl.y));
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_105 = V_10;
						NullCheck(L_105);
						double L_106 = L_105->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_107 = V_11;
						NullCheck(L_107);
						double L_108 = L_107->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_109 = V_10;
						NullCheck(L_109);
						double L_110 = L_109->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_111 = V_11;
						NullCheck(L_111);
						double L_112 = L_111->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_113 = V_10;
						NullCheck(L_113);
						double L_114 = L_113->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_115 = V_11;
						NullCheck(L_115);
						double L_116 = L_115->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_117 = V_10;
						NullCheck(L_117);
						double L_118 = L_117->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_119 = V_11;
						NullCheck(L_119);
						double L_120 = L_119->___y_1;
						il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
						double L_121;
						L_121 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_106, L_108)), ((double)il2cpp_codegen_subtract(L_110, L_112)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_114, L_116)), ((double)il2cpp_codegen_subtract(L_118, L_120)))))));
						// double widthB = Math.Sqrt((tr.x - tl.x) * (tr.x - tl.x) + (tr.y - tl.y) * (tr.y - tl.y));
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_122 = V_9;
						NullCheck(L_122);
						double L_123 = L_122->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_124 = V_8;
						NullCheck(L_124);
						double L_125 = L_124->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_126 = V_9;
						NullCheck(L_126);
						double L_127 = L_126->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_128 = V_8;
						NullCheck(L_128);
						double L_129 = L_128->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_130 = V_9;
						NullCheck(L_130);
						double L_131 = L_130->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_132 = V_8;
						NullCheck(L_132);
						double L_133 = L_132->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_134 = V_9;
						NullCheck(L_134);
						double L_135 = L_134->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_136 = V_8;
						NullCheck(L_136);
						double L_137 = L_136->___y_1;
						double L_138;
						L_138 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_123, L_125)), ((double)il2cpp_codegen_subtract(L_127, L_129)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_131, L_133)), ((double)il2cpp_codegen_subtract(L_135, L_137)))))));
						V_12 = L_138;
						// int maxWidth = Math.Max((int)widthA, (int)widthB);
						double L_139 = V_12;
						int32_t L_140;
						L_140 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(il2cpp_codegen_cast_double_to_int<int32_t>(L_121), il2cpp_codegen_cast_double_to_int<int32_t>(L_139), NULL);
						V_13 = L_140;
						// double heightA = Math.Sqrt((tr.x - br.x) * (tr.x - br.x) + (tr.y - br.y) * (tr.y - br.y));
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_141 = V_9;
						NullCheck(L_141);
						double L_142 = L_141->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_143 = V_10;
						NullCheck(L_143);
						double L_144 = L_143->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_145 = V_9;
						NullCheck(L_145);
						double L_146 = L_145->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_147 = V_10;
						NullCheck(L_147);
						double L_148 = L_147->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_149 = V_9;
						NullCheck(L_149);
						double L_150 = L_149->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_151 = V_10;
						NullCheck(L_151);
						double L_152 = L_151->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_153 = V_9;
						NullCheck(L_153);
						double L_154 = L_153->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_155 = V_10;
						NullCheck(L_155);
						double L_156 = L_155->___y_1;
						double L_157;
						L_157 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_142, L_144)), ((double)il2cpp_codegen_subtract(L_146, L_148)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_150, L_152)), ((double)il2cpp_codegen_subtract(L_154, L_156)))))));
						// double heightB = Math.Sqrt((tl.x - bl.x) * (tl.x - bl.x) + (tl.y - bl.y) * (tl.y - bl.y));
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_158 = V_8;
						NullCheck(L_158);
						double L_159 = L_158->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_160 = V_11;
						NullCheck(L_160);
						double L_161 = L_160->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_162 = V_8;
						NullCheck(L_162);
						double L_163 = L_162->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_164 = V_11;
						NullCheck(L_164);
						double L_165 = L_164->___x_0;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_166 = V_8;
						NullCheck(L_166);
						double L_167 = L_166->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_168 = V_11;
						NullCheck(L_168);
						double L_169 = L_168->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_170 = V_8;
						NullCheck(L_170);
						double L_171 = L_170->___y_1;
						Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_172 = V_11;
						NullCheck(L_172);
						double L_173 = L_172->___y_1;
						double L_174;
						L_174 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_159, L_161)), ((double)il2cpp_codegen_subtract(L_163, L_165)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_167, L_169)), ((double)il2cpp_codegen_subtract(L_171, L_173)))))));
						V_14 = L_174;
						// int maxHeight = Math.Max((int)heightA, (int)heightB);
						double L_175 = V_14;
						int32_t L_176;
						L_176 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(il2cpp_codegen_cast_double_to_int<int32_t>(L_157), il2cpp_codegen_cast_double_to_int<int32_t>(L_175), NULL);
						V_15 = L_176;
						// maxWidth = (maxWidth < 1) ? 1 : maxWidth;
						int32_t L_177 = V_13;
						if ((((int32_t)L_177) < ((int32_t)1)))
						{
							goto IL_03e1_2;
						}
					}
					{
						int32_t L_178 = V_13;
						G_B12_0 = L_178;
						goto IL_03e2_2;
					}

IL_03e1_2:
					{
						G_B12_0 = 1;
					}

IL_03e2_2:
					{
						V_13 = G_B12_0;
						// maxHeight = (maxHeight < 1) ? 1 : maxHeight;
						int32_t L_179 = V_15;
						if ((((int32_t)L_179) < ((int32_t)1)))
						{
							goto IL_03ed_2;
						}
					}
					{
						int32_t L_180 = V_15;
						G_B15_0 = L_180;
						goto IL_03ee_2;
					}

IL_03ed_2:
					{
						G_B15_0 = 1;
					}

IL_03ee_2:
					{
						V_15 = G_B15_0;
						// Vector2 paperSize = new Vector2(maxWidth * 1.5f, maxHeight * 1.5f);
						int32_t L_181 = V_13;
						int32_t L_182 = V_15;
						Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_16), ((float)il2cpp_codegen_multiply(((float)L_181), (1.5f))), ((float)il2cpp_codegen_multiply(((float)L_182), (1.5f))), NULL);
						// DataBox.Data.size = paperSize;
						DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* L_183;
						L_183 = DataBox_get_Data_m5C855E136D51653DD5CCA400E75B9AFF8234E76D(NULL);
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_184 = V_16;
						NullCheck(L_183);
						L_183->___size_7 = L_184;
						// ScanSceneManager.OpenResultImage(paperSize);
						ScanSceneManager_tAC15E873B0775C152FC337BB8B280AD92BE5174A* L_185 = __this->___ScanSceneManager_4;
						Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_186 = V_16;
						NullCheck(L_185);
						ScanSceneManager_OpenResultImage_m0F3C4F38E079A77314007B6A1F8E44F36E7CAD1B(L_185, L_186, NULL);
					}

IL_0422_2:
					{
						// }
						goto IL_043e;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0430_1:
			{
				// }
				goto IL_043e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_043e:
	{
		// if (found)
		bool L_187 = V_3;
		if (!L_187)
		{
			goto IL_045b;
		}
	}
	{
		// Imgproc.drawContours(rgbaMat, new List<MatOfPoint> { maxAreaContour }, -1, CONTOUR_COLOR, 2);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_188 = V_0;
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_189 = (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*)il2cpp_codegen_object_new(List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var);
		NullCheck(L_189);
		List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26(L_189, List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var);
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_190 = L_189;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_191 = V_2;
		NullCheck(L_190);
		List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_inline(L_190, L_191, List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_RuntimeMethod_var);
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_192 = __this->___CONTOUR_COLOR_18;
		Imgproc_drawContours_mC774426E4A07D47A281C52FFEB4E9C15A052F505(L_188, L_190, (-1), L_192, 2, NULL);
	}

IL_045b:
	{
		// rgbaMat.copyTo(inputDisplayAreaMat);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_193 = V_0;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_194 = __this->___inputDisplayAreaMat_16;
		NullCheck(L_193);
		Mat_copyTo_m7D410D11F7740D4B79443B4526E2282FC9D5FBF3(L_193, L_194, NULL);
		// Utils.matToTexture2D(inputDisplayAreaMat, _camtexture, true, 0, true);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_195 = __this->___inputDisplayAreaMat_16;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_196 = __this->____camtexture_9;
		il2cpp_codegen_runtime_class_init_inline(Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		Utils_matToTexture2D_m16080BAB307F864212C3286528C917CEE8C84E09(L_195, L_196, (bool)1, 0, (bool)1, (bool)0, (bool)0, NULL);
		// _camtexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_197 = __this->____camtexture_9;
		NullCheck(L_197);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_197, NULL);
	}

IL_0488:
	{
		// }
		return;
	}
}
// System.Void DocScan::Find4PointContours(OpenCVForUnity.CoreModule.Mat,System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan_Find4PointContours_m82026618CA4043E5B81344BC226806CF640FA020 (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___1_contours, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1152B218770A51AC23E18B0C8A71015E34938F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD67579F73150DFC55BB8588B38C47842B0A24CA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD9C51BD4F2CBEF843AA01F95E6CF0C13CD9EA434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m686090083B8AB2BDF88AA74F38D9A47DC759FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA67C7052183E50327DCA02E41A74553418202F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* V_0 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_1 = NULL;
	Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A V_2;
	memset((&V_2), 0, sizeof(V_2));
	MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* V_3 = NULL;
	PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* V_6 = NULL;
	MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* V_7 = NULL;
	MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* V_8 = NULL;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	{
		// contours.Clear();
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_0 = ___1_contours;
		NullCheck(L_0);
		List_1_Clear_m686090083B8AB2BDF88AA74F38D9A47DC759FFB1_inline(L_0, List_1_Clear_m686090083B8AB2BDF88AA74F38D9A47DC759FFB1_RuntimeMethod_var);
		// List<MatOfPoint> tmp_contours = new List<MatOfPoint>();
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_1 = (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*)il2cpp_codegen_object_new(List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26(L_1, List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var);
		V_0 = L_1;
		// Mat hierarchy = new Mat();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_2 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8(L_2, NULL);
		V_1 = L_2;
		// Imgproc.findContours(image, tmp_contours, hierarchy, Imgproc.RETR_EXTERNAL, Imgproc.CHAIN_APPROX_SIMPLE);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_3 = ___0_image;
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_4 = V_0;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_5 = V_1;
		Imgproc_findContours_mE71F5BF6CBEE65447FC7F8D69215357E79080CB4(L_3, L_4, L_5, 0, 2, NULL);
		// foreach (var cnt in tmp_contours)
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_6 = V_0;
		NullCheck(L_6);
		Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A L_7;
		L_7 = List_1_GetEnumerator_mA67C7052183E50327DCA02E41A74553418202F6B(L_6, List_1_GetEnumerator_mA67C7052183E50327DCA02E41A74553418202F6B_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB1152B218770A51AC23E18B0C8A71015E34938F4((&V_2), Enumerator_Dispose_mB1152B218770A51AC23E18B0C8A71015E34938F4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d2_1;
			}

IL_0028_1:
			{
				// foreach (var cnt in tmp_contours)
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_8;
				L_8 = Enumerator_get_Current_mD9C51BD4F2CBEF843AA01F95E6CF0C13CD9EA434_inline((&V_2), Enumerator_get_Current_mD9C51BD4F2CBEF843AA01F95E6CF0C13CD9EA434_RuntimeMethod_var);
				// MatOfInt hull = new MatOfInt();
				MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* L_9 = (MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE*)il2cpp_codegen_object_new(MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				MatOfInt__ctor_m8D3E8F02CA067F938C0AABE502432FE8134038CA(L_9, NULL);
				V_3 = L_9;
				// Imgproc.convexHull(cnt, hull, false);
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_10 = L_8;
				MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* L_11 = V_3;
				Imgproc_convexHull_m07829BB03B2B781E8900448B0171EAF055838ECB(L_10, L_11, (bool)0, NULL);
				// Point[] cnt_arr = cnt.toArray();
				NullCheck(L_10);
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_12;
				L_12 = MatOfPoint_toArray_mD69EA8997A4F9D0269DF0F30CBC83ECD4517D53C(L_10, NULL);
				V_4 = L_12;
				// int[] hull_arr = hull.toArray();
				MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* L_13 = V_3;
				NullCheck(L_13);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14;
				L_14 = MatOfInt_toArray_m4A629D87F345165EB4FFE0AB5D5605CE76E21F06(L_13, NULL);
				V_5 = L_14;
				// Point[] pts = new Point[hull_arr.Length];
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_5;
				NullCheck(L_15);
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_16 = (PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB*)(PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB*)SZArrayNew(PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)));
				V_6 = L_16;
				// for (int i = 0; i < hull_arr.Length; i++)
				V_10 = 0;
				goto IL_006f_1;
			}

IL_005c_1:
			{
				// pts[i] = cnt_arr[hull_arr[i]];
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_17 = V_6;
				int32_t L_18 = V_10;
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_19 = V_4;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_5;
				int32_t L_21 = V_10;
				NullCheck(L_20);
				int32_t L_22 = L_21;
				int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				NullCheck(L_19);
				int32_t L_24 = L_23;
				Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_25 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_25);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)L_25);
				// for (int i = 0; i < hull_arr.Length; i++)
				int32_t L_26 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_26, 1));
			}

IL_006f_1:
			{
				// for (int i = 0; i < hull_arr.Length; i++)
				int32_t L_27 = V_10;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_5;
				NullCheck(L_28);
				if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
				{
					goto IL_005c_1;
				}
			}
			{
				// MatOfPoint2f ptsFC2 = new MatOfPoint2f(pts);
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_29 = V_6;
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_30 = (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8*)il2cpp_codegen_object_new(MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
				NullCheck(L_30);
				MatOfPoint2f__ctor_mC15533B7B2669AC472D3660C15E68273D45501BF(L_30, L_29, NULL);
				// MatOfPoint2f approxFC2 = new MatOfPoint2f();
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_31 = (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8*)il2cpp_codegen_object_new(MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
				NullCheck(L_31);
				MatOfPoint2f__ctor_mF795E49FC607B1CF96E0357B1A9A2749BDB3EA89(L_31, NULL);
				V_7 = L_31;
				// MatOfPoint approxSC2 = new MatOfPoint();
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_32 = (MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE*)il2cpp_codegen_object_new(MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE_il2cpp_TypeInfo_var);
				NullCheck(L_32);
				MatOfPoint__ctor_mAA7B53549CCEC7AB5314CEC4FD89D0881EE4ADF2(L_32, NULL);
				V_8 = L_32;
				// double arclen = Imgproc.arcLength(ptsFC2, true);
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_33 = L_30;
				double L_34;
				L_34 = Imgproc_arcLength_m72362E6E3BFA56AE3BDFBE94B692FE0D7EDBA67B(L_33, (bool)1, NULL);
				V_9 = L_34;
				// Imgproc.approxPolyDP(ptsFC2, approxFC2, 0.01 * arclen, true);
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_35 = V_7;
				double L_36 = V_9;
				Imgproc_approxPolyDP_m4C7E0B69BB94F15C3974E9ED171CCC2732809D4E(L_33, L_35, ((double)il2cpp_codegen_multiply((0.01), L_36)), (bool)1, NULL);
				// approxFC2.convertTo(approxSC2, CvType.CV_32S);
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_37 = V_7;
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_38 = V_8;
				NullCheck(L_37);
				Mat_convertTo_mF38EA12022EEE5C1AA9EE6679451F0CF324179D8(L_37, L_38, 4, NULL);
				// if (approxSC2.size().area() != 4)
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_39 = V_8;
				NullCheck(L_39);
				Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_40;
				L_40 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_39, NULL);
				NullCheck(L_40);
				double L_41;
				L_41 = Size_area_mF7EE627885FFCF58D91D0FE30D81670932C777C8(L_40, NULL);
				if ((!(((double)L_41) == ((double)(4.0)))))
				{
					goto IL_00d2_1;
				}
			}
			{
				// contours.Add(approxSC2);
				List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_42 = ___1_contours;
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_43 = V_8;
				NullCheck(L_42);
				List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_inline(L_42, L_43, List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_RuntimeMethod_var);
			}

IL_00d2_1:
			{
				// foreach (var cnt in tmp_contours)
				bool L_44;
				L_44 = Enumerator_MoveNext_mD67579F73150DFC55BB8588B38C47842B0A24CA4((&V_2), Enumerator_MoveNext_mD67579F73150DFC55BB8588B38C47842B0A24CA4_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_00ee;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ee:
	{
		// }
		return;
	}
}
// OpenCVForUnity.CoreModule.MatOfPoint DocScan::GetMaxAreaContour(System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* DocScan_GetMaxAreaContour_mC964AD624702BD82B60EB7B3C907F21BDA3B9A84 (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___0_contours, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	{
		// if (contours.Count == 0)
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_0 = ___0_contours;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_inline(L_0, List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return new MatOfPoint();
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_2 = (MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE*)il2cpp_codegen_object_new(MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MatOfPoint__ctor_mAA7B53549CCEC7AB5314CEC4FD89D0881EE4ADF2(L_2, NULL);
		return L_2;
	}

IL_000e:
	{
		// int index = -1;
		V_0 = (-1);
		// double area = 0;
		V_1 = (0.0);
		// for (int i = 0; i < contours.Count; i++)
		V_2 = 0;
		goto IL_0037;
	}

IL_001e:
	{
		// double tmp = Imgproc.contourArea(contours[i]);
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_3 = ___0_contours;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_5;
		L_5 = List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F(L_3, L_4, List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F_RuntimeMethod_var);
		double L_6;
		L_6 = Imgproc_contourArea_m160506EBB44AB6500ED602B345F2D58208BBBD9C(L_5, NULL);
		V_3 = L_6;
		// if (area < tmp)
		double L_7 = V_1;
		double L_8 = V_3;
		if ((!(((double)L_7) < ((double)L_8))))
		{
			goto IL_0033;
		}
	}
	{
		// area = tmp;
		double L_9 = V_3;
		V_1 = L_9;
		// index = i;
		int32_t L_10 = V_2;
		V_0 = L_10;
	}

IL_0033:
	{
		// for (int i = 0; i < contours.Count; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < contours.Count; i++)
		int32_t L_12 = V_2;
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_13 = ___0_contours;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_inline(L_13, List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_001e;
		}
	}
	{
		// return contours[index];
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_15 = ___0_contours;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_17;
		L_17 = List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F(L_15, L_16, List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F_RuntimeMethod_var);
		return L_17;
	}
}
// OpenCVForUnity.CoreModule.MatOfPoint DocScan::OrderCornerPoints(OpenCVForUnity.CoreModule.MatOfPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* DocScan_OrderCornerPoints_m38845A129965C62017592CC3F0C07FA6614651FA (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___0_corners, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_0 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_1 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_2 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_3 = NULL;
	MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* V_4 = NULL;
	{
		// if (corners.size().area() <= 0 || corners.rows() < 4)
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_0 = ___0_corners;
		NullCheck(L_0);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_1;
		L_1 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_0, NULL);
		NullCheck(L_1);
		double L_2;
		L_2 = Size_area_mF7EE627885FFCF58D91D0FE30D81670932C777C8(L_1, NULL);
		if ((((double)L_2) <= ((double)(0.0))))
		{
			goto IL_001f;
		}
	}
	{
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_3 = ___0_corners;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5(L_3, NULL);
		if ((((int32_t)L_4) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}

IL_001f:
	{
		// return corners;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_5 = ___0_corners;
		return L_5;
	}

IL_0021:
	{
		// using (Mat x = new Mat(corners.size(), CvType.CV_32SC1))
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_6 = ___0_corners;
		NullCheck(L_6);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_7;
		L_7 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		int32_t L_8 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32SC1_25;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_9 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Mat__ctor_mF7419A657F207CCB04C9B13E13D89F25198221B8(L_9, L_7, L_8, NULL);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0130:
			{// begin finally (depth: 1)
				{
					Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_10 = V_0;
					if (!L_10)
					{
						goto IL_0139;
					}
				}
				{
					Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_11 = V_0;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0139:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (Mat y = new Mat(corners.size(), CvType.CV_32SC1))
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_12 = ___0_corners;
				NullCheck(L_12);
				Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_13;
				L_13 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
				int32_t L_14 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32SC1_25;
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_15 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				Mat__ctor_mF7419A657F207CCB04C9B13E13D89F25198221B8(L_15, L_13, L_14, NULL);
				V_1 = L_15;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0126_1:
					{// begin finally (depth: 2)
						{
							Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_16 = V_1;
							if (!L_16)
							{
								goto IL_012f_1;
							}
						}
						{
							Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_17 = V_1;
							NullCheck(L_17);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
						}

IL_012f_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (Mat d = new Mat(corners.size(), CvType.CV_32SC1))
						MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_18 = ___0_corners;
						NullCheck(L_18);
						Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_19;
						L_19 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_18, NULL);
						il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
						int32_t L_20 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32SC1_25;
						Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_21 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
						NullCheck(L_21);
						Mat__ctor_mF7419A657F207CCB04C9B13E13D89F25198221B8(L_21, L_19, L_20, NULL);
						V_2 = L_21;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_011c_2:
							{// begin finally (depth: 3)
								{
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_22 = V_2;
									if (!L_22)
									{
										goto IL_0125_2;
									}
								}
								{
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_23 = V_2;
									NullCheck(L_23);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
								}

IL_0125_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (Mat dst = new Mat(corners.size(), CvType.CV_32SC2))
								MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_24 = ___0_corners;
								NullCheck(L_24);
								Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_25;
								L_25 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_24, NULL);
								il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
								int32_t L_26 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32SC2_26;
								Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_27 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
								NullCheck(L_27);
								Mat__ctor_mF7419A657F207CCB04C9B13E13D89F25198221B8(L_27, L_25, L_26, NULL);
								V_3 = L_27;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0112_3:
									{// begin finally (depth: 4)
										{
											Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_28 = V_3;
											if (!L_28)
											{
												goto IL_011b_3;
											}
										}
										{
											Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_29 = V_3;
											NullCheck(L_29);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
										}

IL_011b_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									// Core.extractChannel(corners, x, 0);
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_30 = ___0_corners;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_31 = V_0;
									il2cpp_codegen_runtime_class_init_inline(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
									Core_extractChannel_m845E1AD5ED60796369E7AF47AFAA30A46FB4417F(L_30, L_31, 0, NULL);
									// Core.extractChannel(corners, y, 1);
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_32 = ___0_corners;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_33 = V_1;
									Core_extractChannel_m845E1AD5ED60796369E7AF47AFAA30A46FB4417F(L_32, L_33, 1, NULL);
									// Core.add(x, y, d);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_34 = V_0;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_35 = V_1;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_36 = V_2;
									Core_add_mAFCE2FBFB521122CAA2727059741CB5F93E15DC2(L_34, L_35, L_36, NULL);
									// Core.MinMaxLocResult result = Core.minMaxLoc(d);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_37 = V_2;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_38;
									L_38 = Core_minMaxLoc_mCE544C1DA9B5DAEDAB256CD2558CB3C599AD72A5(L_37, NULL);
									V_4 = L_38;
									// dst.put(0, 0, corners.get((int)result.minLoc.y, 0));
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_39 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_40 = ___0_corners;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_41 = V_4;
									NullCheck(L_41);
									Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_42 = L_41->___minLoc_2;
									NullCheck(L_42);
									double L_43 = L_42->___y_1;
									NullCheck(L_40);
									DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44;
									L_44 = Mat_get_mF6D242DB45F408ED1148C4EC0AA92AAEEA2DC0C2(L_40, il2cpp_codegen_cast_double_to_int<int32_t>(L_43), 0, NULL);
									NullCheck(L_39);
									int32_t L_45;
									L_45 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_39, 0, 0, L_44, NULL);
									// dst.put(2, 0, corners.get((int)result.maxLoc.y, 0));
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_46 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_47 = ___0_corners;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_48 = V_4;
									NullCheck(L_48);
									Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_49 = L_48->___maxLoc_3;
									NullCheck(L_49);
									double L_50 = L_49->___y_1;
									NullCheck(L_47);
									DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_51;
									L_51 = Mat_get_mF6D242DB45F408ED1148C4EC0AA92AAEEA2DC0C2(L_47, il2cpp_codegen_cast_double_to_int<int32_t>(L_50), 0, NULL);
									NullCheck(L_46);
									int32_t L_52;
									L_52 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_46, 2, 0, L_51, NULL);
									// Core.subtract(y, x, d);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_53 = V_1;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_54 = V_0;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_55 = V_2;
									Core_subtract_m55B4480582071A327BC6C13463D07125788F7427(L_53, L_54, L_55, NULL);
									// result = Core.minMaxLoc(d);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_56 = V_2;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_57;
									L_57 = Core_minMaxLoc_mCE544C1DA9B5DAEDAB256CD2558CB3C599AD72A5(L_56, NULL);
									V_4 = L_57;
									// dst.put(1, 0, corners.get((int)result.minLoc.y, 0));
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_58 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_59 = ___0_corners;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_60 = V_4;
									NullCheck(L_60);
									Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_61 = L_60->___minLoc_2;
									NullCheck(L_61);
									double L_62 = L_61->___y_1;
									NullCheck(L_59);
									DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_63;
									L_63 = Mat_get_mF6D242DB45F408ED1148C4EC0AA92AAEEA2DC0C2(L_59, il2cpp_codegen_cast_double_to_int<int32_t>(L_62), 0, NULL);
									NullCheck(L_58);
									int32_t L_64;
									L_64 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_58, 1, 0, L_63, NULL);
									// dst.put(3, 0, corners.get((int)result.maxLoc.y, 0));
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_65 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_66 = ___0_corners;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_67 = V_4;
									NullCheck(L_67);
									Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_68 = L_67->___maxLoc_3;
									NullCheck(L_68);
									double L_69 = L_68->___y_1;
									NullCheck(L_66);
									DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_70;
									L_70 = Mat_get_mF6D242DB45F408ED1148C4EC0AA92AAEEA2DC0C2(L_66, il2cpp_codegen_cast_double_to_int<int32_t>(L_69), 0, NULL);
									NullCheck(L_65);
									int32_t L_71;
									L_71 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_65, 3, 0, L_70, NULL);
									// dst.copyTo(corners);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_72 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_73 = ___0_corners;
									NullCheck(L_72);
									Mat_copyTo_m7D410D11F7740D4B79443B4526E2282FC9D5FBF3(L_72, L_73, NULL);
									// }
									goto IL_013a;
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013a:
	{
		// return corners;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_74 = ___0_corners;
		return L_74;
	}
}
// OpenCVForUnity.CoreModule.Mat DocScan::PerspectiveTransform(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.MatOfPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* DocScan_PerspectiveTransform_mF737D46352651BE23B51B7DA558CB3C8B78005FA (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___1_corners, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_0 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_1 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_2 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_3 = NULL;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_8 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_9 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_10 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_11 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// if (corners.size().area() <= 0 || corners.rows() < 4)
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_0 = ___1_corners;
		NullCheck(L_0);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_1;
		L_1 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_0, NULL);
		NullCheck(L_1);
		double L_2;
		L_2 = Size_area_mF7EE627885FFCF58D91D0FE30D81670932C777C8(L_1, NULL);
		if ((((double)L_2) <= ((double)(0.0))))
		{
			goto IL_001f;
		}
	}
	{
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_3 = ___1_corners;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5(L_3, NULL);
		if ((((int32_t)L_4) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}

IL_001f:
	{
		// return image;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_5 = ___0_image;
		return L_5;
	}

IL_0021:
	{
		// Point[] pts = corners.toArray();
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_6 = ___1_corners;
		NullCheck(L_6);
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_7;
		L_7 = MatOfPoint_toArray_mD69EA8997A4F9D0269DF0F30CBC83ECD4517D53C(L_6, NULL);
		// Point tl = pts[0];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		// Point tr = pts[1];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_11 = L_8;
		NullCheck(L_11);
		int32_t L_12 = 1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// Point br = pts[2];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_14 = L_11;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		// Point bl = pts[3];
		NullCheck(L_14);
		int32_t L_17 = 3;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = L_18;
		// double widthA = Math.Sqrt((br.x - bl.x) * (br.x - bl.x) + (br.y - bl.y) * (br.y - bl.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_19 = V_2;
		NullCheck(L_19);
		double L_20 = L_19->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_21 = V_3;
		NullCheck(L_21);
		double L_22 = L_21->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_23 = V_2;
		NullCheck(L_23);
		double L_24 = L_23->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_25 = V_3;
		NullCheck(L_25);
		double L_26 = L_25->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_27 = V_2;
		NullCheck(L_27);
		double L_28 = L_27->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_29 = V_3;
		NullCheck(L_29);
		double L_30 = L_29->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_31 = V_2;
		NullCheck(L_31);
		double L_32 = L_31->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_33 = V_3;
		NullCheck(L_33);
		double L_34 = L_33->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_35;
		L_35 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_20, L_22)), ((double)il2cpp_codegen_subtract(L_24, L_26)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_28, L_30)), ((double)il2cpp_codegen_subtract(L_32, L_34)))))));
		// double widthB = Math.Sqrt((tr.x - tl.x) * (tr.x - tl.x) + (tr.y - tl.y) * (tr.y - tl.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_36 = V_1;
		NullCheck(L_36);
		double L_37 = L_36->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_38 = V_0;
		NullCheck(L_38);
		double L_39 = L_38->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_40 = V_1;
		NullCheck(L_40);
		double L_41 = L_40->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_42 = V_0;
		NullCheck(L_42);
		double L_43 = L_42->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_44 = V_1;
		NullCheck(L_44);
		double L_45 = L_44->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_46 = V_0;
		NullCheck(L_46);
		double L_47 = L_46->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_48 = V_1;
		NullCheck(L_48);
		double L_49 = L_48->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_50 = V_0;
		NullCheck(L_50);
		double L_51 = L_50->___y_1;
		double L_52;
		L_52 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_37, L_39)), ((double)il2cpp_codegen_subtract(L_41, L_43)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_45, L_47)), ((double)il2cpp_codegen_subtract(L_49, L_51)))))));
		V_4 = L_52;
		// int maxWidth = Math.Max((int)widthA, (int)widthB);
		double L_53 = V_4;
		int32_t L_54;
		L_54 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(il2cpp_codegen_cast_double_to_int<int32_t>(L_35), il2cpp_codegen_cast_double_to_int<int32_t>(L_53), NULL);
		V_5 = L_54;
		// double heightA = Math.Sqrt((tr.x - br.x) * (tr.x - br.x) + (tr.y - br.y) * (tr.y - br.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_55 = V_1;
		NullCheck(L_55);
		double L_56 = L_55->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_57 = V_2;
		NullCheck(L_57);
		double L_58 = L_57->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_59 = V_1;
		NullCheck(L_59);
		double L_60 = L_59->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_61 = V_2;
		NullCheck(L_61);
		double L_62 = L_61->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_63 = V_1;
		NullCheck(L_63);
		double L_64 = L_63->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_65 = V_2;
		NullCheck(L_65);
		double L_66 = L_65->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_67 = V_1;
		NullCheck(L_67);
		double L_68 = L_67->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_69 = V_2;
		NullCheck(L_69);
		double L_70 = L_69->___y_1;
		double L_71;
		L_71 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_56, L_58)), ((double)il2cpp_codegen_subtract(L_60, L_62)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_64, L_66)), ((double)il2cpp_codegen_subtract(L_68, L_70)))))));
		// double heightB = Math.Sqrt((tl.x - bl.x) * (tl.x - bl.x) + (tl.y - bl.y) * (tl.y - bl.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_72 = V_0;
		NullCheck(L_72);
		double L_73 = L_72->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_74 = V_3;
		NullCheck(L_74);
		double L_75 = L_74->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_76 = V_0;
		NullCheck(L_76);
		double L_77 = L_76->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_78 = V_3;
		NullCheck(L_78);
		double L_79 = L_78->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_80 = V_0;
		NullCheck(L_80);
		double L_81 = L_80->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_82 = V_3;
		NullCheck(L_82);
		double L_83 = L_82->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_84 = V_0;
		NullCheck(L_84);
		double L_85 = L_84->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_86 = V_3;
		NullCheck(L_86);
		double L_87 = L_86->___y_1;
		double L_88;
		L_88 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_73, L_75)), ((double)il2cpp_codegen_subtract(L_77, L_79)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_81, L_83)), ((double)il2cpp_codegen_subtract(L_85, L_87)))))));
		V_6 = L_88;
		// int maxHeight = Math.Max((int)heightA, (int)heightB);
		double L_89 = V_6;
		int32_t L_90;
		L_90 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(il2cpp_codegen_cast_double_to_int<int32_t>(L_71), il2cpp_codegen_cast_double_to_int<int32_t>(L_89), NULL);
		V_7 = L_90;
		// maxWidth = (maxWidth < 1) ? 1 : maxWidth;
		int32_t L_91 = V_5;
		if ((((int32_t)L_91) < ((int32_t)1)))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_92 = V_5;
		G_B6_0 = L_92;
		goto IL_014a;
	}

IL_0149:
	{
		G_B6_0 = 1;
	}

IL_014a:
	{
		V_5 = G_B6_0;
		// maxHeight = (maxHeight < 1) ? 1 : maxHeight;
		int32_t L_93 = V_7;
		if ((((int32_t)L_93) < ((int32_t)1)))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_94 = V_7;
		G_B9_0 = L_94;
		goto IL_0156;
	}

IL_0155:
	{
		G_B9_0 = 1;
	}

IL_0156:
	{
		V_7 = G_B9_0;
		// Mat src = new Mat();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_95 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8(L_95, NULL);
		V_8 = L_95;
		// corners.convertTo(src, CvType.CV_32FC2);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_96 = ___1_corners;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_97 = V_8;
		il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		int32_t L_98 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32FC2_30;
		NullCheck(L_96);
		Mat_convertTo_mF38EA12022EEE5C1AA9EE6679451F0CF324179D8(L_96, L_97, L_98, NULL);
		// Mat dst = new Mat(4, 1, CvType.CV_32FC2);
		int32_t L_99 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32FC2_30;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_100 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_100);
		Mat__ctor_m0B3B26A3BA6F97AB00B308B798383746116E8058(L_100, 4, 1, L_99, NULL);
		V_9 = L_100;
		// dst.put(0, 0, 0, 0, maxWidth - 1, 0, maxWidth - 1, maxHeight - 1, 0, maxHeight - 1);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_101 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_102 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_103 = L_102;
		int32_t L_104 = V_5;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)((int32_t)il2cpp_codegen_subtract(L_104, 1))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_105 = L_103;
		int32_t L_106 = V_5;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)((int32_t)il2cpp_codegen_subtract(L_106, 1))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_107 = L_105;
		int32_t L_108 = V_7;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)((double)((int32_t)il2cpp_codegen_subtract(L_108, 1))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_109 = L_107;
		int32_t L_110 = V_7;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(7), (double)((double)((int32_t)il2cpp_codegen_subtract(L_110, 1))));
		NullCheck(L_101);
		int32_t L_111;
		L_111 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_101, 0, 0, L_109, NULL);
		// Mat outputMat = new Mat(maxHeight, maxWidth, image.type(), new Scalar(0, 0, 0, 255));
		int32_t L_112 = V_7;
		int32_t L_113 = V_5;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_114 = ___0_image;
		NullCheck(L_114);
		int32_t L_115;
		L_115 = Mat_type_mBCEE28CEFDDD469234C5ACEB5FE5437B41AC906E(L_114, NULL);
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_116 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_116);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_116, (0.0), (0.0), (0.0), (255.0), NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_117 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		Mat__ctor_m1FCA33ACB157E2421388259EE1D18A2666CBA16B(L_117, L_112, L_113, L_115, L_116, NULL);
		V_10 = L_117;
		// Mat perspectiveTransform = Imgproc.getPerspectiveTransform(src, dst);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_118 = V_8;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_119 = V_9;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_120;
		L_120 = Imgproc_getPerspectiveTransform_mCB819091C45D8732F7FDAB6FDAF7953D86BA99A2(L_118, L_119, NULL);
		V_11 = L_120;
		// Imgproc.warpPerspective(image, outputMat, perspectiveTransform, new Size(outputMat.cols(), outputMat.rows()));
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_121 = ___0_image;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_122 = V_10;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_123 = V_11;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_124 = V_10;
		NullCheck(L_124);
		int32_t L_125;
		L_125 = Mat_cols_mA8C3EC315EC7F3EB97B30381F8D8269BCA475297(L_124, NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_126 = V_10;
		NullCheck(L_126);
		int32_t L_127;
		L_127 = Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5(L_126, NULL);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_128 = (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC*)il2cpp_codegen_object_new(Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		NullCheck(L_128);
		Size__ctor_mD7D3D4B7411F9791AFE27A8D82C9D5091ED56EE6(L_128, ((double)L_125), ((double)L_127), NULL);
		Imgproc_warpPerspective_m7425FF7E5641458A73A72045274072B49A0FE663(L_121, L_122, L_123, L_128, NULL);
		// return outputMat;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_129 = V_10;
		return L_129;
	}
}
// System.Void DocScan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocScan__ctor_m6985A5C065FA4C509F96552ADDD9E8F040DC12BE (DocScan_t35B56CCBAF9D6A8BC4369DC3E3AEDA639A9C2875* __this, const RuntimeMethod* method) 
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
// System.Void QRCodeDetectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_Start_mD8B0FD2E5E08740FB3436992E0255862D286852F (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128_m8642BFCCC974B2CAFC1431475D75B1BB0D1D54CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeDetectController_OnPostRender_m6C3D9B4D0B25E834CBEFCD9842762A696B740A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cam == null)
		CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* L_0 = __this->___cam_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// cam = GameObject.FindObjectOfType<CameraRenderEvent>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* L_2;
		L_2 = Object_FindObjectOfType_TisCameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128_m8642BFCCC974B2CAFC1431475D75B1BB0D1D54CC(Object_FindObjectOfType_TisCameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128_m8642BFCCC974B2CAFC1431475D75B1BB0D1D54CC_RuntimeMethod_var);
		__this->___cam_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_9), (void*)L_2);
	}

IL_0019:
	{
		// if (cam != null)
		CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* L_3 = __this->___cam_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// cam.OnPostRenderEvent += OnPostRender;
		CameraRenderEvent_t6D761BFA3F930BA1623EDF212777AF3B5FD18128* L_5 = __this->___cam_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, __this, (intptr_t)((void*)QRCodeDetectController_OnPostRender_m6C3D9B4D0B25E834CBEFCD9842762A696B740A7D_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		CameraRenderEvent_add_OnPostRenderEvent_m61E8B49C949DF8DD140CACBA6934066557D3515B(L_5, L_6, NULL);
	}

IL_003e:
	{
		// screenShotWidth = Screen.width;
		int32_t L_7;
		L_7 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		__this->___screenShotWidth_14 = L_7;
		// screenShotHeight = Screen.height;
		int32_t L_8;
		L_8 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		__this->___screenShotHeight_15 = L_8;
		// _camtexture = new Texture2D(screenShotWidth, screenShotHeight, TextureFormat.RGB24, false);
		int32_t L_9 = __this->___screenShotWidth_14;
		int32_t L_10 = __this->___screenShotHeight_15;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_11, L_9, L_10, 3, (bool)0, NULL);
		__this->____camtexture_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camtexture_11), (void*)L_11);
		// TextureToMatInit();
		QRCodeDetectController_TextureToMatInit_mB3D23240F3CD241CD4E9F4FD11B83E96E829C925(__this, NULL);
		// RunningShotMode();
		QRCodeDetectController_RunningShotMode_m13A326A89DA4F46ED0F35BD1ED8DF4F590D483CB(__this, NULL);
		// }
		return;
	}
}
// System.Void QRCodeDetectController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_OnDestroy_m2A29B187CBF44AFBEF62A2950ED04C79C484CCDF (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) 
{
	{
		// TextureMatDisposed();
		QRCodeDetectController_TextureMatDisposed_mF22CC3108C759F1A84FE61F8670480785B8135BF(__this, NULL);
		// grabScreenshot = false;
		__this->___grabScreenshot_16 = (bool)0;
		// }
		return;
	}
}
// System.Void QRCodeDetectController::RunningShotMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_RunningShotMode_m13A326A89DA4F46ED0F35BD1ED8DF4F590D483CB (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) 
{
	{
		// grabScreenshot = true;
		__this->___grabScreenshot_16 = (bool)1;
		// grabQr = true;
		__this->___grabQr_17 = (bool)1;
		// grabPaper = false;
		__this->___grabPaper_18 = (bool)0;
		// hasPaper = false;
		__this->___hasPaper_23 = (bool)0;
		// }
		return;
	}
}
// System.Void QRCodeDetectController::GetTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_GetTracking_mE2D42149EF576C14CA53DEC3C376A9951F899206 (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) 
{
	{
		// hasPaper = true;
		__this->___hasPaper_23 = (bool)1;
		// }
		return;
	}
}
// System.Void QRCodeDetectController::TextureMatDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_TextureMatDisposed_mF22CC3108C759F1A84FE61F8670480785B8135BF (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC914690C8223EBE53868DCD253449254995F80B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m666F26F74FEE4B55645E1F4314F6A0F58B09333E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m590C630D2ABB67E64933067BF658EFF075AFF9C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m098CB6A17DEEB5F6FC0606A4B50532267C600A58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAB3283D83D120FBC0AE635BE6138FBB7970851C);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("OnWebCamTextureToMatHelperDisposed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFAB3283D83D120FBC0AE635BE6138FBB7970851C, NULL);
		// if (_camtexture != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____camtexture_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// Destroy(_camtexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->____camtexture_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0023:
	{
		// if (grayMat != null)
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_3 = __this->___grayMat_4;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// grayMat.Dispose();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_4 = __this->___grayMat_4;
		NullCheck(L_4);
		DisposableObject_Dispose_m470D40F22D92B4DFA3B83767935ABAF0B26A8C9A(L_4, NULL);
	}

IL_0036:
	{
		// if (yuvMat != null)
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_5 = __this->___yuvMat_20;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// yuvMat.Dispose();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_6 = __this->___yuvMat_20;
		NullCheck(L_6);
		DisposableObject_Dispose_m470D40F22D92B4DFA3B83767935ABAF0B26A8C9A(L_6, NULL);
	}

IL_0049:
	{
		// if (yMat != null)
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_7 = __this->___yMat_21;
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		// yMat.Dispose();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_8 = __this->___yMat_21;
		NullCheck(L_8);
		DisposableObject_Dispose_m470D40F22D92B4DFA3B83767935ABAF0B26A8C9A(L_8, NULL);
	}

IL_005c:
	{
		// if (points != null)
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_9 = __this->___points_5;
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		// points.Dispose();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_10 = __this->___points_5;
		NullCheck(L_10);
		DisposableObject_Dispose_m470D40F22D92B4DFA3B83767935ABAF0B26A8C9A(L_10, NULL);
	}

IL_006f:
	{
		// if (decodedInfo != null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = __this->___decodedInfo_6;
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		// decodedInfo.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = __this->___decodedInfo_6;
		NullCheck(L_12);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_12, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
	}

IL_0082:
	{
		// if (straightQrcode != null)
		List_1_t658E3C431BA7FDF30CD393A43C448012592EE831* L_13 = __this->___straightQrcode_7;
		if (!L_13)
		{
			goto IL_00bd;
		}
	}
	{
		// foreach (var item in straightQrcode)
		List_1_t658E3C431BA7FDF30CD393A43C448012592EE831* L_14 = __this->___straightQrcode_7;
		NullCheck(L_14);
		Enumerator_tC788B15733F73C8A763A178EC051A2AD57B4577A L_15;
		L_15 = List_1_GetEnumerator_m098CB6A17DEEB5F6FC0606A4B50532267C600A58(L_14, List_1_GetEnumerator_m098CB6A17DEEB5F6FC0606A4B50532267C600A58_RuntimeMethod_var);
		V_0 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC914690C8223EBE53868DCD253449254995F80B4((&V_0), Enumerator_Dispose_mC914690C8223EBE53868DCD253449254995F80B4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a4_1;
			}

IL_0098_1:
			{
				// foreach (var item in straightQrcode)
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_16;
				L_16 = Enumerator_get_Current_m590C630D2ABB67E64933067BF658EFF075AFF9C9_inline((&V_0), Enumerator_get_Current_m590C630D2ABB67E64933067BF658EFF075AFF9C9_RuntimeMethod_var);
				// item.Dispose();
				NullCheck(L_16);
				DisposableObject_Dispose_m470D40F22D92B4DFA3B83767935ABAF0B26A8C9A(L_16, NULL);
			}

IL_00a4_1:
			{
				// foreach (var item in straightQrcode)
				bool L_17;
				L_17 = Enumerator_MoveNext_m666F26F74FEE4B55645E1F4314F6A0F58B09333E((&V_0), Enumerator_MoveNext_m666F26F74FEE4B55645E1F4314F6A0F58B09333E_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0098_1;
				}
			}
			{
				goto IL_00bd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void QRCodeDetectController::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_OnPostRender_m6C3D9B4D0B25E834CBEFCD9842762A696B740A7D (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) 
{
	{
		// if (grabScreenshot)
		bool L_0 = __this->___grabScreenshot_16;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// _camtexture.ReadPixels(new UnityEngine.Rect(0, 0, screenShotWidth, screenShotHeight), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->____camtexture_11;
		int32_t L_2 = __this->___screenShotWidth_14;
		int32_t L_3 = __this->___screenShotHeight_15;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), (0.0f), (0.0f), ((float)L_2), ((float)L_3), /*hidden argument*/NULL);
		NullCheck(L_1);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_1, L_4, 0, 0, NULL);
		// camImage.texture = _camtexture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = __this->___camImage_10;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->____camtexture_11;
		NullCheck(L_5);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_5, L_6, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void QRCodeDetectController::TextureToMatInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_TextureToMatInit_mB3D23240F3CD241CD4E9F4FD11B83E96E829C925 (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCD8E8C1E1307972D1C7053B19EE030EA2E3D2FE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t658E3C431BA7FDF30CD393A43C448012592EE831_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_0 = NULL;
	{
		// Mat inputDisplayAreaMat = new Mat(screenShotHeight, screenShotWidth, CvType.CV_8UC4, new Scalar(0, 0, 0, 255));
		int32_t L_0 = __this->___screenShotHeight_15;
		int32_t L_1 = __this->___screenShotWidth_14;
		il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		int32_t L_2 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_8UC4_12;
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_3 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_3, (0.0), (0.0), (0.0), (255.0), NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_4 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Mat__ctor_m1FCA33ACB157E2421388259EE1D18A2666CBA16B(L_4, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// grayMat = new Mat(inputDisplayAreaMat.rows(), inputDisplayAreaMat.cols(), CvType.CV_8UC1);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5(L_5, NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Mat_cols_mA8C3EC315EC7F3EB97B30381F8D8269BCA475297(L_7, NULL);
		int32_t L_9 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_8UC1_9;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_10 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Mat__ctor_m0B3B26A3BA6F97AB00B308B798383746116E8058(L_10, L_6, L_8, L_9, NULL);
		__this->___grayMat_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grayMat_4), (void*)L_10);
		// yuvMat = new Mat();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_11 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8(L_11, NULL);
		__this->___yuvMat_20 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___yuvMat_20), (void*)L_11);
		// yMat = new Mat();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_12 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8(L_12, NULL);
		__this->___yMat_21 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___yMat_21), (void*)L_12);
		// points = new Mat();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_13 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8(L_13, NULL);
		__this->___points_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_5), (void*)L_13);
		// decodedInfo = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_14, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___decodedInfo_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___decodedInfo_6), (void*)L_14);
		// straightQrcode = new List<Mat>();
		List_1_t658E3C431BA7FDF30CD393A43C448012592EE831* L_15 = (List_1_t658E3C431BA7FDF30CD393A43C448012592EE831*)il2cpp_codegen_object_new(List_1_t658E3C431BA7FDF30CD393A43C448012592EE831_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_mCD8E8C1E1307972D1C7053B19EE030EA2E3D2FE7(L_15, List_1__ctor_mCD8E8C1E1307972D1C7053B19EE030EA2E3D2FE7_RuntimeMethod_var);
		__this->___straightQrcode_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___straightQrcode_7), (void*)L_15);
		// CONTOUR_COLOR = new Scalar(255, 0, 0, 255);
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_16 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_16, (255.0), (0.0), (0.0), (255.0), NULL);
		__this->___CONTOUR_COLOR_19 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CONTOUR_COLOR_19), (void*)L_16);
		// }
		return;
	}
}
// System.Void QRCodeDetectController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_Update_m7DF04141A5AA6F81A5EA64ABE0B45F24B1DC1D64 (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatUtils_copyFromMat_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3C07B531686A13F8AE5F5A768D628B12E5C49F8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeDetectController_Update_m7DF04141A5AA6F81A5EA64ABE0B45F24B1DC1D64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* V_5 = NULL;
	void* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* V_10 = NULL;
	MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* V_11 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_12 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_13 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_14 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_15 = NULL;
	double V_16 = 0.0;
	int32_t V_17 = 0;
	double V_18 = 0.0;
	int32_t V_19 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_21 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B24_0 = 0;
	{
		// if (grabQr && CameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
		bool L_0 = __this->___grabQr_17;
		if (!L_0)
		{
			goto IL_00d4;
		}
	}
	{
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_1 = __this->___CameraManager_12;
		NullCheck(L_1);
		bool L_2;
		L_2 = ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_00d4;
		}
	}
	{
		// using (image)
		XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 L_3 = V_0;
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c6:
			{// begin finally (depth: 1)
				XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// XRCpuImage.ConversionParams conversionParams = new XRCpuImage.ConversionParams(image, TextureFormat.R8, XRCpuImage.Transformation.MirrorY);
				XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 L_4 = V_0;
				ConversionParams__ctor_m2EA9FC7BD411FA61269B314ACD03174F5BB96273((&V_2), L_4, ((int32_t)63), 2, NULL);
				// Int32 dataSize = image.GetConvertedDataSize(conversionParams);
				ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_5 = V_2;
				int32_t L_6;
				L_6 = XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE((&V_0), L_5, NULL);
				V_3 = L_6;
				// byte[] grayscalePixels = new byte[dataSize];
				int32_t L_7 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
				V_4 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_006b_1:
					{// begin finally (depth: 2)
						V_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// fixed (void* ptr = grayscalePixels)
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_4;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
						V_7 = L_10;
						if (!L_10)
						{
							goto IL_0048_2;
						}
					}
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_7;
						NullCheck(L_11);
						if (((int32_t)(((RuntimeArray*)L_11)->max_length)))
						{
							goto IL_004e_2;
						}
					}

IL_0048_2:
					{
						V_6 = (void*)((uintptr_t)0);
						goto IL_0059_2;
					}

IL_004e_2:
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_7;
						NullCheck(L_12);
						V_6 = (void*)((uintptr_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
					}

IL_0059_2:
					{
						// image.Convert(conversionParams, new System.IntPtr(ptr), dataSize);
						ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_13 = V_2;
						void* L_14 = V_6;
						intptr_t L_15;
						memset((&L_15), 0, sizeof(L_15));
						IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_15), L_14, /*hidden argument*/NULL);
						int32_t L_16 = V_3;
						XRCpuImage_Convert_m04EB3992B85AEB87D03C5626EFD0A9C0158AC9CB((&V_0), L_13, L_15, L_16, NULL);
						goto IL_006f_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_006f_1:
			{
				// IBarcodeReader barcodeReader = new BarcodeReader();
				BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* L_17 = (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB*)il2cpp_codegen_object_new(BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D(L_17, NULL);
				// Result result = barcodeReader.Decode(grayscalePixels, image.width, image.height, RGBLuminanceSource.BitmapFormat.Gray8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
				int32_t L_19;
				L_19 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
				int32_t L_20;
				L_20 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
				NullCheck(L_17);
				Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_21;
				L_21 = InterfaceFuncInvoker4< Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t >::Invoke(7 /* ZXing.Result ZXing.IBarcodeReader::Decode(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat) */, IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var, L_17, L_18, L_19, L_20, 1);
				V_5 = L_21;
				// if (grabQr && result != null)
				bool L_22 = __this->___grabQr_17;
				if (!L_22)
				{
					goto IL_00c4_1;
				}
			}
			{
				Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_23 = V_5;
				if (!L_23)
				{
					goto IL_00c4_1;
				}
			}
			{
				// _qrText = result.Text;
				Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_24 = V_5;
				NullCheck(L_24);
				String_t* L_25;
				L_25 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(L_24, NULL);
				__this->____qrText_22 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____qrText_22), (void*)L_25);
				// ReaderManager.LoadList(_qrText);
				ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_26 = __this->___ReaderManager_8;
				String_t* L_27 = __this->____qrText_22;
				NullCheck(L_26);
				ReaderManager_LoadList_m5A07CE555FA94D11B8D68C3BBBB03DFC14976EAA(L_26, L_27, NULL);
				// grabQr = false;
				__this->___grabQr_17 = (bool)0;
				// grabPaper = true;
				__this->___grabPaper_18 = (bool)1;
			}

IL_00c4_1:
			{
				// }
				goto IL_00d4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d4:
	{
		// if (grabPaper && _camtexture)
		bool L_28 = __this->___grabPaper_18;
		if (!L_28)
		{
			goto IL_0534;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = __this->____camtexture_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_29, NULL);
		if (!L_30)
		{
			goto IL_0534;
		}
	}
	{
		// Mat rgbaMat = new Mat(_camtexture.height, _camtexture.width, CvType.CV_8UC3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = __this->____camtexture_11;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = __this->____camtexture_11;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_33);
		il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		int32_t L_35 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_8UC3_11;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_36 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Mat__ctor_m0B3B26A3BA6F97AB00B308B798383746116E8058(L_36, L_32, L_34, L_35, NULL);
		V_8 = L_36;
		// Utils.texture2DToMat(_camtexture, rgbaMat);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = __this->____camtexture_11;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_38 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		Utils_texture2DToMat_m719D7CF7DB7529D4ED317A7AA5FBAFEED5FB6531(L_37, L_38, (bool)1, 0, NULL);
		// Imgproc.cvtColor(rgbaMat, grayMat, Imgproc.COLOR_RGBA2GRAY);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_39 = V_8;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_40 = __this->___grayMat_4;
		Imgproc_cvtColor_mA0A5A6154878F195F2F71751D9F5068822833004(L_39, L_40, ((int32_t)11), NULL);
		// byte[] qrFindBytes = new byte[grayMat.total() * grayMat.channels()];
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_41 = __this->___grayMat_4;
		NullCheck(L_41);
		int64_t L_42;
		L_42 = Mat_total_mA4BBB7A9827E1521061C487825771C8404604B7F(L_41, NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_43 = __this->___grayMat_4;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Mat_channels_m08FD4851746F3D6809A66763AF3416A72C124558(L_43, NULL);
		if ((int64_t)(((int64_t)il2cpp_codegen_multiply(L_42, ((int64_t)L_44)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), QRCodeDetectController_Update_m7DF04141A5AA6F81A5EA64ABE0B45F24B1DC1D64_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)((int64_t)il2cpp_codegen_multiply(L_42, ((int64_t)L_44)))));
		V_9 = L_45;
		// MatUtils.copyFromMat<byte>(grayMat, qrFindBytes);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_46 = __this->___grayMat_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_9;
		MatUtils_copyFromMat_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3C07B531686A13F8AE5F5A768D628B12E5C49F8E(L_46, L_47, MatUtils_copyFromMat_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3C07B531686A13F8AE5F5A768D628B12E5C49F8E_RuntimeMethod_var);
		// Imgproc.cvtColor(rgbaMat, yuvMat, Imgproc.COLOR_RGBA2RGB);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_48 = V_8;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_49 = __this->___yuvMat_20;
		Imgproc_cvtColor_mA0A5A6154878F195F2F71751D9F5068822833004(L_48, L_49, 1, NULL);
		// Imgproc.cvtColor(yuvMat, yuvMat, Imgproc.COLOR_RGB2YUV);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_50 = __this->___yuvMat_20;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_51 = __this->___yuvMat_20;
		Imgproc_cvtColor_mA0A5A6154878F195F2F71751D9F5068822833004(L_50, L_51, ((int32_t)83), NULL);
		// Core.extractChannel(yuvMat, yMat, 0);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_52 = __this->___yuvMat_20;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_53 = __this->___yMat_21;
		il2cpp_codegen_runtime_class_init_inline(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		Core_extractChannel_m845E1AD5ED60796369E7AF47AFAA30A46FB4417F(L_52, L_53, 0, NULL);
		// Imgproc.GaussianBlur(yMat, yMat, new Size(3, 3), 0);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_54 = __this->___yMat_21;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_55 = __this->___yMat_21;
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_56 = (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC*)il2cpp_codegen_object_new(Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Size__ctor_mD7D3D4B7411F9791AFE27A8D82C9D5091ED56EE6(L_56, (3.0), (3.0), NULL);
		Imgproc_GaussianBlur_m29269EF75C33C9C41921E3D1613519A27187D336(L_54, L_55, L_56, (0.0), NULL);
		// Imgproc.Canny(yMat, yMat, 50, 200, 3);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_57 = __this->___yMat_21;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_58 = __this->___yMat_21;
		Imgproc_Canny_m773B5322C178210F45E0EC0668EDDB8A57EDBC88(L_57, L_58, (50.0), (200.0), 3, NULL);
		// List<MatOfPoint> contours = new List<MatOfPoint>();
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_59 = (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*)il2cpp_codegen_object_new(List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26(L_59, List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var);
		V_10 = L_59;
		// Find4PointContours(yMat, contours);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_60 = __this->___yMat_21;
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_61 = V_10;
		QRCodeDetectController_Find4PointContours_m19E299BF45FF1BCAB96B275824070E81ED4DDE3D(__this, L_60, L_61, NULL);
		// MatOfPoint maxAreaContour = GetMaxAreaContour(contours);
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_62 = V_10;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_63;
		L_63 = QRCodeDetectController_GetMaxAreaContour_m8B58514E1B0B9194FEAD5D02A0E519BA335B95B5(__this, L_62, NULL);
		V_11 = L_63;
		// maxAreaContour = OrderCornerPoints(maxAreaContour);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_64 = V_11;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_65;
		L_65 = QRCodeDetectController_OrderCornerPoints_mC550C6E4F97D8FE80F98961862A5A402FDBF25EF(__this, L_64, NULL);
		V_11 = L_65;
		// bool found = (maxAreaContour.size().area() > 0);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_66 = V_11;
		NullCheck(L_66);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_67;
		L_67 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_66, NULL);
		NullCheck(L_67);
		double L_68;
		L_68 = Size_area_mF7EE627885FFCF58D91D0FE30D81670932C777C8(L_67, NULL);
		// if (found)
		if (!((((double)L_68) > ((double)(0.0)))? 1 : 0))
		{
			goto IL_0534;
		}
	}
	{
		// Point[] pts = maxAreaContour.toArray();
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_69 = V_11;
		NullCheck(L_69);
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_70;
		L_70 = MatOfPoint_toArray_mD69EA8997A4F9D0269DF0F30CBC83ECD4517D53C(L_69, NULL);
		// Point tl = pts[0];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_71 = L_70;
		NullCheck(L_71);
		int32_t L_72 = 0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_12 = L_73;
		// Point tr = pts[1];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_74 = L_71;
		NullCheck(L_74);
		int32_t L_75 = 1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_13 = L_76;
		// Point br = pts[2];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_77 = L_74;
		NullCheck(L_77);
		int32_t L_78 = 2;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_14 = L_79;
		// Point bl = pts[3];
		NullCheck(L_77);
		int32_t L_80 = 3;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_81 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_15 = L_81;
		// Imgproc.line(rgbaMat, tl, tr, new Scalar(255, 0, 0, 255), 2);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_82 = V_8;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_83 = V_12;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_84 = V_13;
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_85 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_85, (255.0), (0.0), (0.0), (255.0), NULL);
		Imgproc_line_mD6CF99D4800508B65EB4D811F4FA4C181663F595(L_82, L_83, L_84, L_85, 2, NULL);
		// Imgproc.line(rgbaMat, tr, br, new Scalar(255, 0, 0, 255), 2);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_86 = V_8;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_87 = V_13;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_88 = V_14;
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_89 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_89);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_89, (255.0), (0.0), (0.0), (255.0), NULL);
		Imgproc_line_mD6CF99D4800508B65EB4D811F4FA4C181663F595(L_86, L_87, L_88, L_89, 2, NULL);
		// Imgproc.line(rgbaMat, br, bl, new Scalar(255, 0, 0, 255), 2);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_90 = V_8;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_91 = V_14;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_92 = V_15;
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_93 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_93);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_93, (255.0), (0.0), (0.0), (255.0), NULL);
		Imgproc_line_mD6CF99D4800508B65EB4D811F4FA4C181663F595(L_90, L_91, L_92, L_93, 2, NULL);
		// Imgproc.line(rgbaMat, bl, tl, new Scalar(255, 0, 0, 255), 2);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_94 = V_8;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_95 = V_15;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_96 = V_12;
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_97 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_97, (255.0), (0.0), (0.0), (255.0), NULL);
		Imgproc_line_mD6CF99D4800508B65EB4D811F4FA4C181663F595(L_94, L_95, L_96, L_97, 2, NULL);
		// double widthA = Math.Sqrt((br.x - bl.x) * (br.x - bl.x) + (br.y - bl.y) * (br.y - bl.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_98 = V_14;
		NullCheck(L_98);
		double L_99 = L_98->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_100 = V_15;
		NullCheck(L_100);
		double L_101 = L_100->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_102 = V_14;
		NullCheck(L_102);
		double L_103 = L_102->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_104 = V_15;
		NullCheck(L_104);
		double L_105 = L_104->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_106 = V_14;
		NullCheck(L_106);
		double L_107 = L_106->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_108 = V_15;
		NullCheck(L_108);
		double L_109 = L_108->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_110 = V_14;
		NullCheck(L_110);
		double L_111 = L_110->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_112 = V_15;
		NullCheck(L_112);
		double L_113 = L_112->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_114;
		L_114 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_99, L_101)), ((double)il2cpp_codegen_subtract(L_103, L_105)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_107, L_109)), ((double)il2cpp_codegen_subtract(L_111, L_113)))))));
		// double widthB = Math.Sqrt((tr.x - tl.x) * (tr.x - tl.x) + (tr.y - tl.y) * (tr.y - tl.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_115 = V_13;
		NullCheck(L_115);
		double L_116 = L_115->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_117 = V_12;
		NullCheck(L_117);
		double L_118 = L_117->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_119 = V_13;
		NullCheck(L_119);
		double L_120 = L_119->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_121 = V_12;
		NullCheck(L_121);
		double L_122 = L_121->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_123 = V_13;
		NullCheck(L_123);
		double L_124 = L_123->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_125 = V_12;
		NullCheck(L_125);
		double L_126 = L_125->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_127 = V_13;
		NullCheck(L_127);
		double L_128 = L_127->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_129 = V_12;
		NullCheck(L_129);
		double L_130 = L_129->___y_1;
		double L_131;
		L_131 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_116, L_118)), ((double)il2cpp_codegen_subtract(L_120, L_122)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_124, L_126)), ((double)il2cpp_codegen_subtract(L_128, L_130)))))));
		V_16 = L_131;
		// int maxWidth = Math.Max((int)widthA, (int)widthB);
		double L_132 = V_16;
		int32_t L_133;
		L_133 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(il2cpp_codegen_cast_double_to_int<int32_t>(L_114), il2cpp_codegen_cast_double_to_int<int32_t>(L_132), NULL);
		V_17 = L_133;
		// double heightA = Math.Sqrt((tr.x - br.x) * (tr.x - br.x) + (tr.y - br.y) * (tr.y - br.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_134 = V_13;
		NullCheck(L_134);
		double L_135 = L_134->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_136 = V_14;
		NullCheck(L_136);
		double L_137 = L_136->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_138 = V_13;
		NullCheck(L_138);
		double L_139 = L_138->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_140 = V_14;
		NullCheck(L_140);
		double L_141 = L_140->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_142 = V_13;
		NullCheck(L_142);
		double L_143 = L_142->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_144 = V_14;
		NullCheck(L_144);
		double L_145 = L_144->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_146 = V_13;
		NullCheck(L_146);
		double L_147 = L_146->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_148 = V_14;
		NullCheck(L_148);
		double L_149 = L_148->___y_1;
		double L_150;
		L_150 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_135, L_137)), ((double)il2cpp_codegen_subtract(L_139, L_141)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_143, L_145)), ((double)il2cpp_codegen_subtract(L_147, L_149)))))));
		// double heightB = Math.Sqrt((tl.x - bl.x) * (tl.x - bl.x) + (tl.y - bl.y) * (tl.y - bl.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_151 = V_12;
		NullCheck(L_151);
		double L_152 = L_151->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_153 = V_15;
		NullCheck(L_153);
		double L_154 = L_153->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_155 = V_12;
		NullCheck(L_155);
		double L_156 = L_155->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_157 = V_15;
		NullCheck(L_157);
		double L_158 = L_157->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_159 = V_12;
		NullCheck(L_159);
		double L_160 = L_159->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_161 = V_15;
		NullCheck(L_161);
		double L_162 = L_161->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_163 = V_12;
		NullCheck(L_163);
		double L_164 = L_163->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_165 = V_15;
		NullCheck(L_165);
		double L_166 = L_165->___y_1;
		double L_167;
		L_167 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_152, L_154)), ((double)il2cpp_codegen_subtract(L_156, L_158)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_160, L_162)), ((double)il2cpp_codegen_subtract(L_164, L_166)))))));
		V_18 = L_167;
		// int maxHeight = Math.Max((int)heightA, (int)heightB);
		double L_168 = V_18;
		int32_t L_169;
		L_169 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(il2cpp_codegen_cast_double_to_int<int32_t>(L_150), il2cpp_codegen_cast_double_to_int<int32_t>(L_168), NULL);
		V_19 = L_169;
		// maxWidth = (maxWidth < 1) ? 1 : maxWidth;
		int32_t L_170 = V_17;
		if ((((int32_t)L_170) < ((int32_t)1)))
		{
			goto IL_044a;
		}
	}
	{
		int32_t L_171 = V_17;
		G_B21_0 = L_171;
		goto IL_044b;
	}

IL_044a:
	{
		G_B21_0 = 1;
	}

IL_044b:
	{
		V_17 = G_B21_0;
		// maxHeight = (maxHeight < 1) ? 1 : maxHeight;
		int32_t L_172 = V_19;
		if ((((int32_t)L_172) < ((int32_t)1)))
		{
			goto IL_0456;
		}
	}
	{
		int32_t L_173 = V_19;
		G_B24_0 = L_173;
		goto IL_0457;
	}

IL_0456:
	{
		G_B24_0 = 1;
	}

IL_0457:
	{
		V_19 = G_B24_0;
		// Vector2 paperSize = new Vector2(maxWidth * 2f, maxHeight * 2f);
		int32_t L_174 = V_17;
		int32_t L_175 = V_19;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_20), ((float)il2cpp_codegen_multiply(((float)L_174), (2.0f))), ((float)il2cpp_codegen_multiply(((float)L_175), (2.0f))), NULL);
		// Vector2 centerPos = new Vector2((float)(br.x + tl.x) / 2.0f, (float)(br.y + tl.y) / 2.0f);
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_176 = V_14;
		NullCheck(L_176);
		double L_177 = L_176->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_178 = V_12;
		NullCheck(L_178);
		double L_179 = L_178->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_180 = V_14;
		NullCheck(L_180);
		double L_181 = L_180->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_182 = V_12;
		NullCheck(L_182);
		double L_183 = L_182->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_184;
		memset((&L_184), 0, sizeof(L_184));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_184), ((float)(((float)((double)il2cpp_codegen_add(L_177, L_179)))/(2.0f))), ((float)(((float)((double)il2cpp_codegen_add(L_181, L_183)))/(2.0f))), /*hidden argument*/NULL);
		// if (hasPaper) {
		bool L_185 = __this->___hasPaper_23;
		if (!L_185)
		{
			goto IL_0522;
		}
	}
	{
		// using (Mat transformedMat = PerspectiveTransform(rgbaMat, maxAreaContour))
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_186 = V_8;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_187 = V_11;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_188;
		L_188 = QRCodeDetectController_PerspectiveTransform_mB2B12655E382AE35F79595C9F0698D9554D677F1(__this, L_186, L_187, NULL);
		V_21 = L_188;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_050f:
			{// begin finally (depth: 1)
				{
					Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_189 = V_21;
					if (!L_189)
					{
						goto IL_051a;
					}
				}
				{
					Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_190 = V_21;
					NullCheck(L_190);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_190);
				}

IL_051a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// tex = new Texture2D(transformedMat.width(), transformedMat.height(), TextureFormat.RGB24, false);
			Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_191 = V_21;
			NullCheck(L_191);
			int32_t L_192;
			L_192 = Mat_width_mBCC955D36649BE38B1B73654032975EFE6E167C8(L_191, NULL);
			Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_193 = V_21;
			NullCheck(L_193);
			int32_t L_194;
			L_194 = Mat_height_m91A43CAF596AF1501503E6CE4BD683CC63B438DF(L_193, NULL);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_195 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
			NullCheck(L_195);
			Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_195, L_192, L_194, 3, (bool)0, NULL);
			__this->___tex_13 = L_195;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___tex_13), (void*)L_195);
			// Utils.matToTexture2D(transformedMat, tex);
			Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_196 = V_21;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_197 = __this->___tex_13;
			il2cpp_codegen_runtime_class_init_inline(Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
			Utils_matToTexture2D_m16080BAB307F864212C3286528C917CEE8C84E09(L_196, L_197, (bool)1, 0, (bool)0, (bool)0, (bool)0, NULL);
			// tex.Apply();
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_198 = __this->___tex_13;
			NullCheck(L_198);
			Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_198, NULL);
			// DataBox.Data.size = paperSize;
			DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* L_199;
			L_199 = DataBox_get_Data_m5C855E136D51653DD5CCA400E75B9AFF8234E76D(NULL);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_200 = V_20;
			NullCheck(L_199);
			L_199->___size_7 = L_200;
			// ReaderManager.AddImage(tex);
			ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_201 = __this->___ReaderManager_8;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_202 = __this->___tex_13;
			NullCheck(L_201);
			ReaderManager_AddImage_m2A9A3A083B5480B01EE882DCEFE5E70EB1EE841A(L_201, L_202, NULL);
			// }
			goto IL_051b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_051b:
	{
		// hasPaper = false;
		__this->___hasPaper_23 = (bool)0;
	}

IL_0522:
	{
		// Utils.matToTexture2D(rgbaMat, _camtexture, true, 0, true);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_203 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_204 = __this->____camtexture_11;
		il2cpp_codegen_runtime_class_init_inline(Utils_t6EA15D2A1BD8A3D02F0866C6D0E6722465021329_il2cpp_TypeInfo_var);
		Utils_matToTexture2D_m16080BAB307F864212C3286528C917CEE8C84E09(L_203, L_204, (bool)1, 0, (bool)1, (bool)0, (bool)0, NULL);
	}

IL_0534:
	{
		// _camtexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_205 = __this->____camtexture_11;
		NullCheck(L_205);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_205, NULL);
		// }
		return;
	}
}
// System.Void QRCodeDetectController::Find4PointContours(OpenCVForUnity.CoreModule.Mat,System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController_Find4PointContours_m19E299BF45FF1BCAB96B275824070E81ED4DDE3D (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___1_contours, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1152B218770A51AC23E18B0C8A71015E34938F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD67579F73150DFC55BB8588B38C47842B0A24CA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD9C51BD4F2CBEF843AA01F95E6CF0C13CD9EA434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m686090083B8AB2BDF88AA74F38D9A47DC759FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA67C7052183E50327DCA02E41A74553418202F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* V_0 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_1 = NULL;
	Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A V_2;
	memset((&V_2), 0, sizeof(V_2));
	MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* V_3 = NULL;
	PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* V_6 = NULL;
	MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* V_7 = NULL;
	MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* V_8 = NULL;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	{
		// contours.Clear();
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_0 = ___1_contours;
		NullCheck(L_0);
		List_1_Clear_m686090083B8AB2BDF88AA74F38D9A47DC759FFB1_inline(L_0, List_1_Clear_m686090083B8AB2BDF88AA74F38D9A47DC759FFB1_RuntimeMethod_var);
		// List<MatOfPoint> tmp_contours = new List<MatOfPoint>();
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_1 = (List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F*)il2cpp_codegen_object_new(List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26(L_1, List_1__ctor_m5BC5F7D38D797D930011FF4A832FC55F5CA31B26_RuntimeMethod_var);
		V_0 = L_1;
		// Mat hierarchy = new Mat();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_2 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8(L_2, NULL);
		V_1 = L_2;
		// Imgproc.findContours(image, tmp_contours, hierarchy, Imgproc.RETR_EXTERNAL, Imgproc.CHAIN_APPROX_SIMPLE);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_3 = ___0_image;
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_4 = V_0;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_5 = V_1;
		Imgproc_findContours_mE71F5BF6CBEE65447FC7F8D69215357E79080CB4(L_3, L_4, L_5, 0, 2, NULL);
		// foreach (var cnt in tmp_contours)
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_6 = V_0;
		NullCheck(L_6);
		Enumerator_tDF3174137AAEE64EF7D848E035C2C4AC874E894A L_7;
		L_7 = List_1_GetEnumerator_mA67C7052183E50327DCA02E41A74553418202F6B(L_6, List_1_GetEnumerator_mA67C7052183E50327DCA02E41A74553418202F6B_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB1152B218770A51AC23E18B0C8A71015E34938F4((&V_2), Enumerator_Dispose_mB1152B218770A51AC23E18B0C8A71015E34938F4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d2_1;
			}

IL_0028_1:
			{
				// foreach (var cnt in tmp_contours)
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_8;
				L_8 = Enumerator_get_Current_mD9C51BD4F2CBEF843AA01F95E6CF0C13CD9EA434_inline((&V_2), Enumerator_get_Current_mD9C51BD4F2CBEF843AA01F95E6CF0C13CD9EA434_RuntimeMethod_var);
				// MatOfInt hull = new MatOfInt();
				MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* L_9 = (MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE*)il2cpp_codegen_object_new(MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				MatOfInt__ctor_m8D3E8F02CA067F938C0AABE502432FE8134038CA(L_9, NULL);
				V_3 = L_9;
				// Imgproc.convexHull(cnt, hull, false);
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_10 = L_8;
				MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* L_11 = V_3;
				Imgproc_convexHull_m07829BB03B2B781E8900448B0171EAF055838ECB(L_10, L_11, (bool)0, NULL);
				// Point[] cnt_arr = cnt.toArray();
				NullCheck(L_10);
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_12;
				L_12 = MatOfPoint_toArray_mD69EA8997A4F9D0269DF0F30CBC83ECD4517D53C(L_10, NULL);
				V_4 = L_12;
				// int[] hull_arr = hull.toArray();
				MatOfInt_t8AFEE0415B125946B15DF40EA2E6D4950FD383FE* L_13 = V_3;
				NullCheck(L_13);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14;
				L_14 = MatOfInt_toArray_m4A629D87F345165EB4FFE0AB5D5605CE76E21F06(L_13, NULL);
				V_5 = L_14;
				// Point[] pts = new Point[hull_arr.Length];
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_5;
				NullCheck(L_15);
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_16 = (PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB*)(PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB*)SZArrayNew(PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)));
				V_6 = L_16;
				// for (int i = 0; i < hull_arr.Length; i++)
				V_10 = 0;
				goto IL_006f_1;
			}

IL_005c_1:
			{
				// pts[i] = cnt_arr[hull_arr[i]];
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_17 = V_6;
				int32_t L_18 = V_10;
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_19 = V_4;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_5;
				int32_t L_21 = V_10;
				NullCheck(L_20);
				int32_t L_22 = L_21;
				int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				NullCheck(L_19);
				int32_t L_24 = L_23;
				Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_25 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_25);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682*)L_25);
				// for (int i = 0; i < hull_arr.Length; i++)
				int32_t L_26 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_26, 1));
			}

IL_006f_1:
			{
				// for (int i = 0; i < hull_arr.Length; i++)
				int32_t L_27 = V_10;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_5;
				NullCheck(L_28);
				if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
				{
					goto IL_005c_1;
				}
			}
			{
				// MatOfPoint2f ptsFC2 = new MatOfPoint2f(pts);
				PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_29 = V_6;
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_30 = (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8*)il2cpp_codegen_object_new(MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
				NullCheck(L_30);
				MatOfPoint2f__ctor_mC15533B7B2669AC472D3660C15E68273D45501BF(L_30, L_29, NULL);
				// MatOfPoint2f approxFC2 = new MatOfPoint2f();
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_31 = (MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8*)il2cpp_codegen_object_new(MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8_il2cpp_TypeInfo_var);
				NullCheck(L_31);
				MatOfPoint2f__ctor_mF795E49FC607B1CF96E0357B1A9A2749BDB3EA89(L_31, NULL);
				V_7 = L_31;
				// MatOfPoint approxSC2 = new MatOfPoint();
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_32 = (MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE*)il2cpp_codegen_object_new(MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE_il2cpp_TypeInfo_var);
				NullCheck(L_32);
				MatOfPoint__ctor_mAA7B53549CCEC7AB5314CEC4FD89D0881EE4ADF2(L_32, NULL);
				V_8 = L_32;
				// double arclen = Imgproc.arcLength(ptsFC2, true);
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_33 = L_30;
				double L_34;
				L_34 = Imgproc_arcLength_m72362E6E3BFA56AE3BDFBE94B692FE0D7EDBA67B(L_33, (bool)1, NULL);
				V_9 = L_34;
				// Imgproc.approxPolyDP(ptsFC2, approxFC2, 0.01 * arclen, true);
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_35 = V_7;
				double L_36 = V_9;
				Imgproc_approxPolyDP_m4C7E0B69BB94F15C3974E9ED171CCC2732809D4E(L_33, L_35, ((double)il2cpp_codegen_multiply((0.01), L_36)), (bool)1, NULL);
				// approxFC2.convertTo(approxSC2, CvType.CV_32S);
				MatOfPoint2f_t7D0D66E72B6A4B3BE99855914814D50BE04210F8* L_37 = V_7;
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_38 = V_8;
				NullCheck(L_37);
				Mat_convertTo_mF38EA12022EEE5C1AA9EE6679451F0CF324179D8(L_37, L_38, 4, NULL);
				// if (approxSC2.size().area() != 4)
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_39 = V_8;
				NullCheck(L_39);
				Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_40;
				L_40 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_39, NULL);
				NullCheck(L_40);
				double L_41;
				L_41 = Size_area_mF7EE627885FFCF58D91D0FE30D81670932C777C8(L_40, NULL);
				if ((!(((double)L_41) == ((double)(4.0)))))
				{
					goto IL_00d2_1;
				}
			}
			{
				// contours.Add(approxSC2);
				List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_42 = ___1_contours;
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_43 = V_8;
				NullCheck(L_42);
				List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_inline(L_42, L_43, List_1_Add_mE2CA480CD5C6D89958A51A305CDAFD1BA5B1E306_RuntimeMethod_var);
			}

IL_00d2_1:
			{
				// foreach (var cnt in tmp_contours)
				bool L_44;
				L_44 = Enumerator_MoveNext_mD67579F73150DFC55BB8588B38C47842B0A24CA4((&V_2), Enumerator_MoveNext_mD67579F73150DFC55BB8588B38C47842B0A24CA4_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_00ee;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ee:
	{
		// }
		return;
	}
}
// OpenCVForUnity.CoreModule.MatOfPoint QRCodeDetectController::GetMaxAreaContour(System.Collections.Generic.List`1<OpenCVForUnity.CoreModule.MatOfPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* QRCodeDetectController_GetMaxAreaContour_m8B58514E1B0B9194FEAD5D02A0E519BA335B95B5 (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* ___0_contours, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	{
		// if (contours.Count == 0)
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_0 = ___0_contours;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_inline(L_0, List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return new MatOfPoint();
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_2 = (MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE*)il2cpp_codegen_object_new(MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MatOfPoint__ctor_mAA7B53549CCEC7AB5314CEC4FD89D0881EE4ADF2(L_2, NULL);
		return L_2;
	}

IL_000e:
	{
		// int index = -1;
		V_0 = (-1);
		// double area = 0;
		V_1 = (0.0);
		// for (int i = 0; i < contours.Count; i++)
		V_2 = 0;
		goto IL_0037;
	}

IL_001e:
	{
		// double tmp = Imgproc.contourArea(contours[i]);
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_3 = ___0_contours;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_5;
		L_5 = List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F(L_3, L_4, List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F_RuntimeMethod_var);
		double L_6;
		L_6 = Imgproc_contourArea_m160506EBB44AB6500ED602B345F2D58208BBBD9C(L_5, NULL);
		V_3 = L_6;
		// if (area < tmp)
		double L_7 = V_1;
		double L_8 = V_3;
		if ((!(((double)L_7) < ((double)L_8))))
		{
			goto IL_0033;
		}
	}
	{
		// area = tmp;
		double L_9 = V_3;
		V_1 = L_9;
		// index = i;
		int32_t L_10 = V_2;
		V_0 = L_10;
	}

IL_0033:
	{
		// for (int i = 0; i < contours.Count; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < contours.Count; i++)
		int32_t L_12 = V_2;
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_13 = ___0_contours;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_inline(L_13, List_1_get_Count_mAD978FB9D03ED97E3F474F7896934B618A4D6FA6_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_001e;
		}
	}
	{
		// return contours[index];
		List_1_tA0BFC0BEB74828FB04F499BFD90A8A968930D39F* L_15 = ___0_contours;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_17;
		L_17 = List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F(L_15, L_16, List_1_get_Item_m6EA1B23860B250E40FF74361DE57BA34BB19517F_RuntimeMethod_var);
		return L_17;
	}
}
// OpenCVForUnity.CoreModule.MatOfPoint QRCodeDetectController::OrderCornerPoints(OpenCVForUnity.CoreModule.MatOfPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* QRCodeDetectController_OrderCornerPoints_mC550C6E4F97D8FE80F98961862A5A402FDBF25EF (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___0_corners, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_0 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_1 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_2 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_3 = NULL;
	MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* V_4 = NULL;
	{
		// if (corners.size().area() <= 0 || corners.rows() < 4)
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_0 = ___0_corners;
		NullCheck(L_0);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_1;
		L_1 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_0, NULL);
		NullCheck(L_1);
		double L_2;
		L_2 = Size_area_mF7EE627885FFCF58D91D0FE30D81670932C777C8(L_1, NULL);
		if ((((double)L_2) <= ((double)(0.0))))
		{
			goto IL_001f;
		}
	}
	{
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_3 = ___0_corners;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5(L_3, NULL);
		if ((((int32_t)L_4) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}

IL_001f:
	{
		// return corners;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_5 = ___0_corners;
		return L_5;
	}

IL_0021:
	{
		// using (Mat x = new Mat(corners.size(), CvType.CV_32SC1))
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_6 = ___0_corners;
		NullCheck(L_6);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_7;
		L_7 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		int32_t L_8 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32SC1_25;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_9 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Mat__ctor_mF7419A657F207CCB04C9B13E13D89F25198221B8(L_9, L_7, L_8, NULL);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0130:
			{// begin finally (depth: 1)
				{
					Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_10 = V_0;
					if (!L_10)
					{
						goto IL_0139;
					}
				}
				{
					Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_11 = V_0;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0139:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (Mat y = new Mat(corners.size(), CvType.CV_32SC1))
				MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_12 = ___0_corners;
				NullCheck(L_12);
				Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_13;
				L_13 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
				int32_t L_14 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32SC1_25;
				Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_15 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				Mat__ctor_mF7419A657F207CCB04C9B13E13D89F25198221B8(L_15, L_13, L_14, NULL);
				V_1 = L_15;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0126_1:
					{// begin finally (depth: 2)
						{
							Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_16 = V_1;
							if (!L_16)
							{
								goto IL_012f_1;
							}
						}
						{
							Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_17 = V_1;
							NullCheck(L_17);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
						}

IL_012f_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (Mat d = new Mat(corners.size(), CvType.CV_32SC1))
						MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_18 = ___0_corners;
						NullCheck(L_18);
						Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_19;
						L_19 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_18, NULL);
						il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
						int32_t L_20 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32SC1_25;
						Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_21 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
						NullCheck(L_21);
						Mat__ctor_mF7419A657F207CCB04C9B13E13D89F25198221B8(L_21, L_19, L_20, NULL);
						V_2 = L_21;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_011c_2:
							{// begin finally (depth: 3)
								{
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_22 = V_2;
									if (!L_22)
									{
										goto IL_0125_2;
									}
								}
								{
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_23 = V_2;
									NullCheck(L_23);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
								}

IL_0125_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (Mat dst = new Mat(corners.size(), CvType.CV_32SC2))
								MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_24 = ___0_corners;
								NullCheck(L_24);
								Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_25;
								L_25 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_24, NULL);
								il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
								int32_t L_26 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32SC2_26;
								Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_27 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
								NullCheck(L_27);
								Mat__ctor_mF7419A657F207CCB04C9B13E13D89F25198221B8(L_27, L_25, L_26, NULL);
								V_3 = L_27;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0112_3:
									{// begin finally (depth: 4)
										{
											Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_28 = V_3;
											if (!L_28)
											{
												goto IL_011b_3;
											}
										}
										{
											Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_29 = V_3;
											NullCheck(L_29);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
										}

IL_011b_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									// Core.extractChannel(corners, x, 0);
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_30 = ___0_corners;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_31 = V_0;
									il2cpp_codegen_runtime_class_init_inline(Core_t5CB657C811F686A6605FA45AE3A981DFEF1745D7_il2cpp_TypeInfo_var);
									Core_extractChannel_m845E1AD5ED60796369E7AF47AFAA30A46FB4417F(L_30, L_31, 0, NULL);
									// Core.extractChannel(corners, y, 1);
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_32 = ___0_corners;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_33 = V_1;
									Core_extractChannel_m845E1AD5ED60796369E7AF47AFAA30A46FB4417F(L_32, L_33, 1, NULL);
									// Core.add(x, y, d);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_34 = V_0;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_35 = V_1;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_36 = V_2;
									Core_add_mAFCE2FBFB521122CAA2727059741CB5F93E15DC2(L_34, L_35, L_36, NULL);
									// Core.MinMaxLocResult result = Core.minMaxLoc(d);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_37 = V_2;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_38;
									L_38 = Core_minMaxLoc_mCE544C1DA9B5DAEDAB256CD2558CB3C599AD72A5(L_37, NULL);
									V_4 = L_38;
									// dst.put(0, 0, corners.get((int)result.minLoc.y, 0));
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_39 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_40 = ___0_corners;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_41 = V_4;
									NullCheck(L_41);
									Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_42 = L_41->___minLoc_2;
									NullCheck(L_42);
									double L_43 = L_42->___y_1;
									NullCheck(L_40);
									DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44;
									L_44 = Mat_get_mF6D242DB45F408ED1148C4EC0AA92AAEEA2DC0C2(L_40, il2cpp_codegen_cast_double_to_int<int32_t>(L_43), 0, NULL);
									NullCheck(L_39);
									int32_t L_45;
									L_45 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_39, 0, 0, L_44, NULL);
									// dst.put(2, 0, corners.get((int)result.maxLoc.y, 0));
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_46 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_47 = ___0_corners;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_48 = V_4;
									NullCheck(L_48);
									Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_49 = L_48->___maxLoc_3;
									NullCheck(L_49);
									double L_50 = L_49->___y_1;
									NullCheck(L_47);
									DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_51;
									L_51 = Mat_get_mF6D242DB45F408ED1148C4EC0AA92AAEEA2DC0C2(L_47, il2cpp_codegen_cast_double_to_int<int32_t>(L_50), 0, NULL);
									NullCheck(L_46);
									int32_t L_52;
									L_52 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_46, 2, 0, L_51, NULL);
									// Core.subtract(y, x, d);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_53 = V_1;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_54 = V_0;
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_55 = V_2;
									Core_subtract_m55B4480582071A327BC6C13463D07125788F7427(L_53, L_54, L_55, NULL);
									// result = Core.minMaxLoc(d);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_56 = V_2;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_57;
									L_57 = Core_minMaxLoc_mCE544C1DA9B5DAEDAB256CD2558CB3C599AD72A5(L_56, NULL);
									V_4 = L_57;
									// dst.put(1, 0, corners.get((int)result.minLoc.y, 0));
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_58 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_59 = ___0_corners;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_60 = V_4;
									NullCheck(L_60);
									Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_61 = L_60->___minLoc_2;
									NullCheck(L_61);
									double L_62 = L_61->___y_1;
									NullCheck(L_59);
									DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_63;
									L_63 = Mat_get_mF6D242DB45F408ED1148C4EC0AA92AAEEA2DC0C2(L_59, il2cpp_codegen_cast_double_to_int<int32_t>(L_62), 0, NULL);
									NullCheck(L_58);
									int32_t L_64;
									L_64 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_58, 1, 0, L_63, NULL);
									// dst.put(3, 0, corners.get((int)result.maxLoc.y, 0));
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_65 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_66 = ___0_corners;
									MinMaxLocResult_t61A370CDF9B3D86F5985C46B113C877B5873581A* L_67 = V_4;
									NullCheck(L_67);
									Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_68 = L_67->___maxLoc_3;
									NullCheck(L_68);
									double L_69 = L_68->___y_1;
									NullCheck(L_66);
									DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_70;
									L_70 = Mat_get_mF6D242DB45F408ED1148C4EC0AA92AAEEA2DC0C2(L_66, il2cpp_codegen_cast_double_to_int<int32_t>(L_69), 0, NULL);
									NullCheck(L_65);
									int32_t L_71;
									L_71 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_65, 3, 0, L_70, NULL);
									// dst.copyTo(corners);
									Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_72 = V_3;
									MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_73 = ___0_corners;
									NullCheck(L_72);
									Mat_copyTo_m7D410D11F7740D4B79443B4526E2282FC9D5FBF3(L_72, L_73, NULL);
									// }
									goto IL_013a;
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013a:
	{
		// return corners;
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_74 = ___0_corners;
		return L_74;
	}
}
// OpenCVForUnity.CoreModule.Mat QRCodeDetectController::PerspectiveTransform(OpenCVForUnity.CoreModule.Mat,OpenCVForUnity.CoreModule.MatOfPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* QRCodeDetectController_PerspectiveTransform_mB2B12655E382AE35F79595C9F0698D9554D677F1 (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* ___0_image, MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* ___1_corners, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_0 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_1 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_2 = NULL;
	Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* V_3 = NULL;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_8 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_9 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_10 = NULL;
	Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* V_11 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// if (corners.size().area() <= 0 || corners.rows() < 4)
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_0 = ___1_corners;
		NullCheck(L_0);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_1;
		L_1 = Mat_size_m709E4850D465857C21270FC240259A901E44196D(L_0, NULL);
		NullCheck(L_1);
		double L_2;
		L_2 = Size_area_mF7EE627885FFCF58D91D0FE30D81670932C777C8(L_1, NULL);
		if ((((double)L_2) <= ((double)(0.0))))
		{
			goto IL_001f;
		}
	}
	{
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_3 = ___1_corners;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5(L_3, NULL);
		if ((((int32_t)L_4) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}

IL_001f:
	{
		// return image;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_5 = ___0_image;
		return L_5;
	}

IL_0021:
	{
		// Point[] pts = corners.toArray();
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_6 = ___1_corners;
		NullCheck(L_6);
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_7;
		L_7 = MatOfPoint_toArray_mD69EA8997A4F9D0269DF0F30CBC83ECD4517D53C(L_6, NULL);
		// Point tl = pts[0];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		// Point tr = pts[1];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_11 = L_8;
		NullCheck(L_11);
		int32_t L_12 = 1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// Point br = pts[2];
		PointU5BU5D_tDFBBDA23AD436C1370A3F4F615643513D13560BB* L_14 = L_11;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		// Point bl = pts[3];
		NullCheck(L_14);
		int32_t L_17 = 3;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = L_18;
		// double widthA = Math.Sqrt((br.x - bl.x) * (br.x - bl.x) + (br.y - bl.y) * (br.y - bl.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_19 = V_2;
		NullCheck(L_19);
		double L_20 = L_19->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_21 = V_3;
		NullCheck(L_21);
		double L_22 = L_21->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_23 = V_2;
		NullCheck(L_23);
		double L_24 = L_23->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_25 = V_3;
		NullCheck(L_25);
		double L_26 = L_25->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_27 = V_2;
		NullCheck(L_27);
		double L_28 = L_27->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_29 = V_3;
		NullCheck(L_29);
		double L_30 = L_29->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_31 = V_2;
		NullCheck(L_31);
		double L_32 = L_31->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_33 = V_3;
		NullCheck(L_33);
		double L_34 = L_33->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_35;
		L_35 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_20, L_22)), ((double)il2cpp_codegen_subtract(L_24, L_26)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_28, L_30)), ((double)il2cpp_codegen_subtract(L_32, L_34)))))));
		// double widthB = Math.Sqrt((tr.x - tl.x) * (tr.x - tl.x) + (tr.y - tl.y) * (tr.y - tl.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_36 = V_1;
		NullCheck(L_36);
		double L_37 = L_36->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_38 = V_0;
		NullCheck(L_38);
		double L_39 = L_38->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_40 = V_1;
		NullCheck(L_40);
		double L_41 = L_40->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_42 = V_0;
		NullCheck(L_42);
		double L_43 = L_42->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_44 = V_1;
		NullCheck(L_44);
		double L_45 = L_44->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_46 = V_0;
		NullCheck(L_46);
		double L_47 = L_46->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_48 = V_1;
		NullCheck(L_48);
		double L_49 = L_48->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_50 = V_0;
		NullCheck(L_50);
		double L_51 = L_50->___y_1;
		double L_52;
		L_52 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_37, L_39)), ((double)il2cpp_codegen_subtract(L_41, L_43)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_45, L_47)), ((double)il2cpp_codegen_subtract(L_49, L_51)))))));
		V_4 = L_52;
		// int maxWidth = Math.Max((int)widthA, (int)widthB);
		double L_53 = V_4;
		int32_t L_54;
		L_54 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(il2cpp_codegen_cast_double_to_int<int32_t>(L_35), il2cpp_codegen_cast_double_to_int<int32_t>(L_53), NULL);
		V_5 = L_54;
		// double heightA = Math.Sqrt((tr.x - br.x) * (tr.x - br.x) + (tr.y - br.y) * (tr.y - br.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_55 = V_1;
		NullCheck(L_55);
		double L_56 = L_55->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_57 = V_2;
		NullCheck(L_57);
		double L_58 = L_57->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_59 = V_1;
		NullCheck(L_59);
		double L_60 = L_59->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_61 = V_2;
		NullCheck(L_61);
		double L_62 = L_61->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_63 = V_1;
		NullCheck(L_63);
		double L_64 = L_63->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_65 = V_2;
		NullCheck(L_65);
		double L_66 = L_65->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_67 = V_1;
		NullCheck(L_67);
		double L_68 = L_67->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_69 = V_2;
		NullCheck(L_69);
		double L_70 = L_69->___y_1;
		double L_71;
		L_71 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_56, L_58)), ((double)il2cpp_codegen_subtract(L_60, L_62)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_64, L_66)), ((double)il2cpp_codegen_subtract(L_68, L_70)))))));
		// double heightB = Math.Sqrt((tl.x - bl.x) * (tl.x - bl.x) + (tl.y - bl.y) * (tl.y - bl.y));
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_72 = V_0;
		NullCheck(L_72);
		double L_73 = L_72->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_74 = V_3;
		NullCheck(L_74);
		double L_75 = L_74->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_76 = V_0;
		NullCheck(L_76);
		double L_77 = L_76->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_78 = V_3;
		NullCheck(L_78);
		double L_79 = L_78->___x_0;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_80 = V_0;
		NullCheck(L_80);
		double L_81 = L_80->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_82 = V_3;
		NullCheck(L_82);
		double L_83 = L_82->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_84 = V_0;
		NullCheck(L_84);
		double L_85 = L_84->___y_1;
		Point_t25762AFCB396A1DFA7BB5E179C06F81CB8242682* L_86 = V_3;
		NullCheck(L_86);
		double L_87 = L_86->___y_1;
		double L_88;
		L_88 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_73, L_75)), ((double)il2cpp_codegen_subtract(L_77, L_79)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_81, L_83)), ((double)il2cpp_codegen_subtract(L_85, L_87)))))));
		V_6 = L_88;
		// int maxHeight = Math.Max((int)heightA, (int)heightB);
		double L_89 = V_6;
		int32_t L_90;
		L_90 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(il2cpp_codegen_cast_double_to_int<int32_t>(L_71), il2cpp_codegen_cast_double_to_int<int32_t>(L_89), NULL);
		V_7 = L_90;
		// maxWidth = (maxWidth < 1) ? 1 : maxWidth;
		int32_t L_91 = V_5;
		if ((((int32_t)L_91) < ((int32_t)1)))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_92 = V_5;
		G_B6_0 = L_92;
		goto IL_014a;
	}

IL_0149:
	{
		G_B6_0 = 1;
	}

IL_014a:
	{
		V_5 = G_B6_0;
		// maxHeight = (maxHeight < 1) ? 1 : maxHeight;
		int32_t L_93 = V_7;
		if ((((int32_t)L_93) < ((int32_t)1)))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_94 = V_7;
		G_B9_0 = L_94;
		goto IL_0156;
	}

IL_0155:
	{
		G_B9_0 = 1;
	}

IL_0156:
	{
		V_7 = G_B9_0;
		// Mat src = new Mat();
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_95 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		Mat__ctor_m33CFD784658180D92515E91D18801F5898892AB8(L_95, NULL);
		V_8 = L_95;
		// corners.convertTo(src, CvType.CV_32FC2);
		MatOfPoint_t0DCB1B071F13E7B653327B28B9B04F2D86A6F4AE* L_96 = ___1_corners;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_97 = V_8;
		il2cpp_codegen_runtime_class_init_inline(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var);
		int32_t L_98 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32FC2_30;
		NullCheck(L_96);
		Mat_convertTo_mF38EA12022EEE5C1AA9EE6679451F0CF324179D8(L_96, L_97, L_98, NULL);
		// Mat dst = new Mat(4, 1, CvType.CV_32FC2);
		int32_t L_99 = ((CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_StaticFields*)il2cpp_codegen_static_fields_for(CvType_tBA09B794CDA34D79A6D254E7828D859F01ED376E_il2cpp_TypeInfo_var))->___CV_32FC2_30;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_100 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_100);
		Mat__ctor_m0B3B26A3BA6F97AB00B308B798383746116E8058(L_100, 4, 1, L_99, NULL);
		V_9 = L_100;
		// dst.put(0, 0, 0, 0, maxWidth - 1, 0, maxWidth - 1, maxHeight - 1, 0, maxHeight - 1);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_101 = V_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_102 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_103 = L_102;
		int32_t L_104 = V_5;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)((int32_t)il2cpp_codegen_subtract(L_104, 1))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_105 = L_103;
		int32_t L_106 = V_5;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)((int32_t)il2cpp_codegen_subtract(L_106, 1))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_107 = L_105;
		int32_t L_108 = V_7;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)((double)((int32_t)il2cpp_codegen_subtract(L_108, 1))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_109 = L_107;
		int32_t L_110 = V_7;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(7), (double)((double)((int32_t)il2cpp_codegen_subtract(L_110, 1))));
		NullCheck(L_101);
		int32_t L_111;
		L_111 = Mat_put_m9BF8BDDCD56D458A11CCE0D873D29609E3E7C867(L_101, 0, 0, L_109, NULL);
		// Mat outputMat = new Mat(maxHeight, maxWidth, image.type(), new Scalar(0, 0, 0, 255));
		int32_t L_112 = V_7;
		int32_t L_113 = V_5;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_114 = ___0_image;
		NullCheck(L_114);
		int32_t L_115;
		L_115 = Mat_type_mBCEE28CEFDDD469234C5ACEB5FE5437B41AC906E(L_114, NULL);
		Scalar_tE735F77B112DB70B398114EC1C89E947307001D7* L_116 = (Scalar_tE735F77B112DB70B398114EC1C89E947307001D7*)il2cpp_codegen_object_new(Scalar_tE735F77B112DB70B398114EC1C89E947307001D7_il2cpp_TypeInfo_var);
		NullCheck(L_116);
		Scalar__ctor_m8155B1108B5496DCE1BC374D3983C4F96490B339(L_116, (0.0), (0.0), (0.0), (255.0), NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_117 = (Mat_t63C614C1527F3B965A572FEA6C95C5552E219875*)il2cpp_codegen_object_new(Mat_t63C614C1527F3B965A572FEA6C95C5552E219875_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		Mat__ctor_m1FCA33ACB157E2421388259EE1D18A2666CBA16B(L_117, L_112, L_113, L_115, L_116, NULL);
		V_10 = L_117;
		// Mat perspectiveTransform = Imgproc.getPerspectiveTransform(src, dst);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_118 = V_8;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_119 = V_9;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_120;
		L_120 = Imgproc_getPerspectiveTransform_mCB819091C45D8732F7FDAB6FDAF7953D86BA99A2(L_118, L_119, NULL);
		V_11 = L_120;
		// Imgproc.warpPerspective(image, outputMat, perspectiveTransform, new Size(outputMat.cols(), outputMat.rows()));
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_121 = ___0_image;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_122 = V_10;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_123 = V_11;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_124 = V_10;
		NullCheck(L_124);
		int32_t L_125;
		L_125 = Mat_cols_mA8C3EC315EC7F3EB97B30381F8D8269BCA475297(L_124, NULL);
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_126 = V_10;
		NullCheck(L_126);
		int32_t L_127;
		L_127 = Mat_rows_m18769322C579BD5B1E62113E020EF10CB98CDDE5(L_126, NULL);
		Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC* L_128 = (Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC*)il2cpp_codegen_object_new(Size_t0BE799C510D0E483D534EF12B8A1D68E1A5C76CC_il2cpp_TypeInfo_var);
		NullCheck(L_128);
		Size__ctor_mD7D3D4B7411F9791AFE27A8D82C9D5091ED56EE6(L_128, ((double)L_125), ((double)L_127), NULL);
		Imgproc_warpPerspective_m7425FF7E5641458A73A72045274072B49A0FE663(L_121, L_122, L_123, L_128, NULL);
		// return outputMat;
		Mat_t63C614C1527F3B965A572FEA6C95C5552E219875* L_129 = V_10;
		return L_129;
	}
}
// System.Void QRCodeDetectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeDetectController__ctor_mB969BAFA09C6290FEE31EA7A5BA56006DE709600 (QRCodeDetectController_tBC46A876351C0FEBE0775501E4596829464B4104* __this, const RuntimeMethod* method) 
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
// System.Void ReadQRCode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadQRCode_Update_m0A6E6060777640FEA78DBE912BBF16DFF14694BC (ReadQRCode_t4544083189C582CBE8568DF87F763D170C736B8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* V_5 = NULL;
	void* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	{
		// if (CameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___CameraManager_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_00a7;
		}
	}
	{
		// using (image)
		XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 L_2 = V_0;
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{// begin finally (depth: 1)
				XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var conversionParams = new XRCpuImage.ConversionParams(image, TextureFormat.R8, XRCpuImage.Transformation.MirrorY);
				XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 L_3 = V_0;
				ConversionParams__ctor_m2EA9FC7BD411FA61269B314ACD03174F5BB96273((&V_2), L_3, ((int32_t)63), 2, NULL);
				// var dataSize = image.GetConvertedDataSize(conversionParams);
				ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_4 = V_2;
				int32_t L_5;
				L_5 = XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE((&V_0), L_4, NULL);
				V_3 = L_5;
				// var grayscalePixels = new byte[dataSize];
				int32_t L_6 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
				V_4 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0060_1:
					{// begin finally (depth: 2)
						V_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// fixed (void* ptr = grayscalePixels)
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_4;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
						V_7 = L_9;
						if (!L_9)
						{
							goto IL_003d_2;
						}
					}
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_7;
						NullCheck(L_10);
						if (((int32_t)(((RuntimeArray*)L_10)->max_length)))
						{
							goto IL_0043_2;
						}
					}

IL_003d_2:
					{
						V_6 = (void*)((uintptr_t)0);
						goto IL_004e_2;
					}

IL_0043_2:
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_7;
						NullCheck(L_11);
						V_6 = (void*)((uintptr_t)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
					}

IL_004e_2:
					{
						// image.Convert(conversionParams, new System.IntPtr(ptr), dataSize);
						ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_12 = V_2;
						void* L_13 = V_6;
						intptr_t L_14;
						memset((&L_14), 0, sizeof(L_14));
						IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_14), L_13, /*hidden argument*/NULL);
						int32_t L_15 = V_3;
						XRCpuImage_Convert_m04EB3992B85AEB87D03C5626EFD0A9C0158AC9CB((&V_0), L_12, L_14, L_15, NULL);
						goto IL_0064_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0064_1:
			{
				// IBarcodeReader barcodeReader = new BarcodeReader();
				BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* L_16 = (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB*)il2cpp_codegen_object_new(BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D(L_16, NULL);
				// var result = barcodeReader.Decode(grayscalePixels, image.width, image.height, RGBLuminanceSource.BitmapFormat.Gray8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_4;
				int32_t L_18;
				L_18 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
				int32_t L_19;
				L_19 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
				NullCheck(L_16);
				Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_20;
				L_20 = InterfaceFuncInvoker4< Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t >::Invoke(7 /* ZXing.Result ZXing.IBarcodeReader::Decode(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat) */, IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var, L_16, L_17, L_18, L_19, 1);
				V_5 = L_20;
				// if (result != null)
				Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_21 = V_5;
				if (!L_21)
				{
					goto IL_0097_1;
				}
			}
			{
				// txt.text = result.Text;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___txt_5;
				Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_23 = V_5;
				NullCheck(L_23);
				String_t* L_24;
				L_24 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(L_23, NULL);
				NullCheck(L_22);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_24);
			}

IL_0097_1:
			{
				// }
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void ReadQRCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadQRCode__ctor_mFBA021819FFE11B0F309E988C82679A735301E23 (ReadQRCode_t4544083189C582CBE8568DF87F763D170C736B8E* __this, const RuntimeMethod* method) 
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
// System.Void Temp::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Temp_Update_m845155B067812A9321000AED1AD63292CDE130EA (Temp_t73656C78FC7C614000959679D544AF43FDB0BD13* __this, const RuntimeMethod* method) 
{
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (CameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___CameraManager_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// using (image)
		XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 L_2 = V_0;
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// UpdateRawImage(camImage, image);
			RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_3 = __this->___camImage_4;
			XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 L_4 = V_0;
			Temp_UpdateRawImage_mC184E89A32AABAD6178945DFBE35BBEA6902AB0B(L_3, L_4, NULL);
			// }
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Temp::UpdateRawImage(UnityEngine.UI.RawImage,UnityEngine.XR.ARSubsystems.XRCpuImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Temp_UpdateRawImage_mC184E89A32AABAD6178945DFBE35BBEA6902AB0B (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___0_rawImage, XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 ___1_cpuImage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var texture = rawImage.texture as Texture2D;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = ___0_rawImage;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1;
		L_1 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline(L_0, NULL);
		V_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		// if (texture == null || texture.width != cpuImage.width || texture.height != cpuImage.height)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		int32_t L_6;
		L_6 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&___1_cpuImage), NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0033;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		int32_t L_9;
		L_9 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&___1_cpuImage), NULL);
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_005b;
		}
	}

IL_0033:
	{
		// texture = new Texture2D(cpuImage.width, cpuImage.height, cpuImage.format.AsTextureFormat(), false);
		int32_t L_10;
		L_10 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&___1_cpuImage), NULL);
		int32_t L_11;
		L_11 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&___1_cpuImage), NULL);
		int32_t L_12;
		L_12 = XRCpuImage_get_format_mB777BBC485ED5A88CD78536F78F43E9795DEEE20_inline((&___1_cpuImage), NULL);
		int32_t L_13;
		L_13 = XRCpuImageFormatExtensions_AsTextureFormat_mEDB46C7DB6DE6C62926ECD7FE9EBAE000A4F7E18(L_12, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_14, L_10, L_11, L_13, (bool)0, NULL);
		V_0 = L_14;
		// rawImage.texture = texture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_15 = ___0_rawImage;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_0;
		NullCheck(L_15);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_15, L_16, NULL);
	}

IL_005b:
	{
		// var conversionParams = new XRCpuImage.ConversionParams(cpuImage, cpuImage.format.AsTextureFormat(), XRCpuImage.Transformation.MirrorY);
		XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 L_17 = ___1_cpuImage;
		int32_t L_18;
		L_18 = XRCpuImage_get_format_mB777BBC485ED5A88CD78536F78F43E9795DEEE20_inline((&___1_cpuImage), NULL);
		int32_t L_19;
		L_19 = XRCpuImageFormatExtensions_AsTextureFormat_mEDB46C7DB6DE6C62926ECD7FE9EBAE000A4F7E18(L_18, NULL);
		ConversionParams__ctor_m2EA9FC7BD411FA61269B314ACD03174F5BB96273((&V_1), L_17, L_19, 2, NULL);
		// var rawTextureData = texture.GetRawTextureData<byte>();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = V_0;
		NullCheck(L_20);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_21;
		L_21 = Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608(L_20, Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		V_2 = L_21;
		// cpuImage.Convert(conversionParams, rawTextureData);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_22 = V_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_23 = V_2;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_24;
		L_24 = NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9(L_23, NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_RuntimeMethod_var);
		XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1((&___1_cpuImage), L_22, L_24, NULL);
		// texture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
		NullCheck(L_25);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_25, NULL);
		// }
		return;
	}
}
// System.Void Temp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Temp__ctor_mB1BDC11EB0CA9FE4BAA0B41FE47C18970A21EB99 (Temp_t73656C78FC7C614000959679D544AF43FDB0BD13* __this, const RuntimeMethod* method) 
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
// System.Void SceneLoad::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoad_OnGUI_mC6F5B58C3415A654D31DA882DE9379C7D6569B5F (SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral422457F901751FA3B57100A103387F681147FE63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GUI.Button(new Rect(10, 120, 120, 30), "LoadScene"))
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (10.0f), (120.0f), (120.0f), (30.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B(L_0, _stringLiteral422457F901751FA3B57100A103387F681147FE63, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// LoadScene();
		SceneLoad_LoadScene_m3AABBDBF0361FC80F0487347E09CE880124445E4(__this, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void SceneLoad::LoadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoad_LoadScene_m3AABBDBF0361FC80F0487347E09CE880124445E4 (SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(num);
		int32_t L_0 = __this->___num_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoad__ctor_m8528315E2E98506800DE3E08AB3C0C9590D5A560 (SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9* __this, const RuntimeMethod* method) 
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
// System.Void FirebaseConnection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseConnection_Awake_mB2E08EA9125D008A7514B99F1CC41756F5E1A92E (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance)
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_0 = ((FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		return;
	}

IL_0013:
	{
		// Instance = this;
		((FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// }
		return;
	}
}
// System.Void FirebaseConnection::DisableUploadPopup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseConnection_DisableUploadPopup_m11A587C6FA89A0C11339BA6867BAD1033D9EECE2 (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, const RuntimeMethod* method) 
{
	{
		// uploadPopup.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___uploadPopup_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FirebaseConnection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseConnection_Start_m4CDC8CCE758E79E6C5B4B7B6F1E923B0FED487C2 (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, const RuntimeMethod* method) 
{
	{
		// Init();
		FirebaseConnection_Init_m4EC5EF5A2AE403AB6F87EC360B69A50C81BB0BF0(__this, NULL);
		// }
		return;
	}
}
// System.Void FirebaseConnection::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseConnection_Init_m4EC5EF5A2AE403AB6F87EC360B69A50C81BB0BF0 (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66C8218D1627932C49B43BA3A848F674EA0C33ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// storage = FirebaseStorage.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1_il2cpp_TypeInfo_var);
		FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1* L_0;
		L_0 = FirebaseStorage_get_DefaultInstance_m952DFCAD322579C0B618C41909810A192DEAE935(NULL);
		__this->___storage_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___storage_7), (void*)L_0);
		// storageRef = storage.GetReferenceFromUrl("gs://unity-tempserver.appspot.com");
		FirebaseStorage_t7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1* L_1 = __this->___storage_7;
		NullCheck(L_1);
		StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* L_2;
		L_2 = FirebaseStorage_GetReferenceFromUrl_m62E1995DDD883BAB36CED64EADE346BA8EA4421A(L_1, _stringLiteral66C8218D1627932C49B43BA3A848F674EA0C33ED, NULL);
		__this->___storageRef_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___storageRef_8), (void*)L_2);
		// databaseRef = FirebaseDatabase.DefaultInstance.RootReference;
		il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_3;
		L_3 = FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118(NULL);
		NullCheck(L_3);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_4;
		L_4 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_3, NULL);
		__this->___databaseRef_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___databaseRef_9), (void*)L_4);
		// }
		return;
	}
}
// System.Void FirebaseConnection::UploadBytes(UnityEngine.Texture2D,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseConnection_UploadBytes_m16E778C2FE50B67DEE88663F3F8B56BC500CFECB (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, String_t* ___1_folder, String_t* ___2_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageProgress_1__ctor_mC466EDE99F4F49BC074EFBB69335E7242E055E5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageProgress_1_t83B8245748D55F1E37B32C976A36D62B7E2AC8F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m34F7ABAD9CBC92591FEC2AD4001EBA1DF9539A4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUploadBytesU3Eb__11_0_m4C3FE7F34CBF90225F4C5E87074E331D7D3E454E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUploadBytesU3Eb__11_1_mA114D642F60AA825BB99A5EBE784D2F62AB60020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1679B0111995A46561748EC18432C07E3B85F2BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A* V_2 = NULL;
	int32_t V_3 = 0;
	Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* G_B2_0 = NULL;
	MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_2 = NULL;
	StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* G_B2_3 = NULL;
	Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* G_B1_0 = NULL;
	MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A* G_B1_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_2 = NULL;
	StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* G_B1_3 = NULL;
	Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* G_B4_0 = NULL;
	Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* G_B4_1 = NULL;
	Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* G_B3_0 = NULL;
	Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* G_B3_1 = NULL;
	{
		// byte[] customBytes = texture.EncodeToPNG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_0, NULL);
		V_0 = L_1;
		// string customByteLength = customBytes.Length.ToString();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		V_3 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		V_1 = L_3;
		// StorageReference targetReference = storageRef.Child(folder + "/" + fileName + ".png");
		StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* L_4 = __this->___storageRef_8;
		String_t* L_5 = ___1_folder;
		String_t* L_6 = ___2_fileName;
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_5, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_6, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		NullCheck(L_4);
		StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* L_8;
		L_8 = StorageReference_Child_m9F88459EAF9C20A744124271AB52DCE825FD0B68(L_4, L_7, NULL);
		// var newMetadata = new MetadataChange {
		//     CustomMetadata = new Dictionary<string, string>
		//     {
		//         { "bytelength", customByteLength }
		//     }
		// };
		MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A* L_9 = (MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A*)il2cpp_codegen_object_new(MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MetadataChange__ctor_m5F678B37FBB3791E8F9B00BB82D1C0EB57DECD48(L_9, NULL);
		MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A* L_10 = L_9;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_11, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = L_11;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_12, _stringLiteral1679B0111995A46561748EC18432C07E3B85F2BD, L_13, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		NullCheck(L_10);
		MetadataChange_set_CustomMetadata_m44A0316F126270F4DFAF3883D703456E7A4192E5(L_10, L_12, NULL);
		V_2 = L_10;
		// targetReference.PutBytesAsync(customBytes, newMetadata,
		//     new StorageProgress<UploadState>(state => {
		//         Debug.Log(String.Format("Progress: {0} of {1} bytes transferred.",
		//             state.BytesTransferred, state.TotalByteCount));
		//     }), CancellationToken.None, null)
		//     .ContinueWith((Task<StorageMetadata> task) => {
		// 
		//         if (task.IsFaulted || task.IsCanceled)
		//         {
		//             Debug.Log(task.Exception.ToString());
		//         }
		//         else
		//         {
		//             // Metadata contains file metadata such as size, content-type, and md5hash.
		//             StorageMetadata metadata = task.Result;
		//                     string md5Hash = metadata.Md5Hash;
		//                     Debug.Log("Finished uploading...");
		//                     Debug.Log("md5 hash = " + md5Hash);
		// 
		//         }
		//     });
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		MetadataChange_t3D34D5C6AD7552CE090B259247BE2D65868B780A* L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* L_16 = ((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1;
		Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* L_17 = L_16;
		G_B1_0 = L_17;
		G_B1_1 = L_15;
		G_B1_2 = L_14;
		G_B1_3 = L_8;
		if (L_17)
		{
			G_B2_0 = L_17;
			G_B2_1 = L_15;
			G_B2_2 = L_14;
			G_B2_3 = L_8;
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* L_18 = ((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* L_19 = (Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592*)il2cpp_codegen_object_new(Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_mEF9F9B1405690D13555B829E4948BA1B51083663(L_19, L_18, (intptr_t)((void*)U3CU3Ec_U3CUploadBytesU3Eb__11_0_m4C3FE7F34CBF90225F4C5E87074E331D7D3E454E_RuntimeMethod_var), NULL);
		Action_1_tB13E8E6B0A7C4519EF2D92995AA4A433C7C24592* L_20 = L_19;
		((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1), (void*)L_20);
		G_B2_0 = L_20;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_006d:
	{
		StorageProgress_1_t83B8245748D55F1E37B32C976A36D62B7E2AC8F8* L_21 = (StorageProgress_1_t83B8245748D55F1E37B32C976A36D62B7E2AC8F8*)il2cpp_codegen_object_new(StorageProgress_1_t83B8245748D55F1E37B32C976A36D62B7E2AC8F8_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		StorageProgress_1__ctor_mC466EDE99F4F49BC074EFBB69335E7242E055E5C(L_21, G_B2_0, StorageProgress_1__ctor_mC466EDE99F4F49BC074EFBB69335E7242E055E5C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_22;
		L_22 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		NullCheck(G_B2_3);
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_23;
		L_23 = StorageReference_PutBytesAsync_m83D404D547C8F800423DD9ED811E52A8DD0F9053(G_B2_3, G_B2_2, G_B2_1, L_21, L_22, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* L_24 = ((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_2;
		Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* L_25 = L_24;
		G_B3_0 = L_25;
		G_B3_1 = L_23;
		if (L_25)
		{
			G_B4_0 = L_25;
			G_B4_1 = L_23;
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* L_26 = ((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* L_27 = (Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F*)il2cpp_codegen_object_new(Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mC35F13E22D56F85284B1BD4FDC79A1FF9E66DF08(L_27, L_26, (intptr_t)((void*)U3CU3Ec_U3CUploadBytesU3Eb__11_1_mA114D642F60AA825BB99A5EBE784D2F62AB60020_RuntimeMethod_var), NULL);
		Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* L_28 = L_27;
		((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9__11_1_2), (void*)L_28);
		G_B4_0 = L_28;
		G_B4_1 = G_B3_1;
	}

IL_009c:
	{
		NullCheck(G_B4_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_29;
		L_29 = Task_1_ContinueWith_m34F7ABAD9CBC92591FEC2AD4001EBA1DF9539A4C(G_B4_1, G_B4_0, Task_1_ContinueWith_m34F7ABAD9CBC92591FEC2AD4001EBA1DF9539A4C_RuntimeMethod_var);
		// StartCoroutine(UpdateList(folder, fileName));
		String_t* L_30 = ___1_folder;
		String_t* L_31 = ___2_fileName;
		RuntimeObject* L_32;
		L_32 = FirebaseConnection_UpdateList_mF0A44F30ADFA4EA70156E177F22B3BF72192379F(__this, L_30, L_31, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_33;
		L_33 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_32, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FirebaseConnection::UpdateList(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseConnection_UpdateList_mF0A44F30ADFA4EA70156E177F22B3BF72192379F (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, String_t* ___0_folder, String_t* ___1_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* L_0 = (U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4*)il2cpp_codegen_object_new(U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateListU3Ed__12__ctor_m591E8C41E912605A685E778F51B020BF70FF22CE(L_0, 0, NULL);
		U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* L_2 = L_1;
		String_t* L_3 = ___0_folder;
		NullCheck(L_2);
		L_2->___folder_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___folder_4), (void*)L_3);
		U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* L_4 = L_2;
		String_t* L_5 = ___1_fileName;
		NullCheck(L_4);
		L_4->___fileName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___fileName_2), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator FirebaseConnection::LoadBytes(System.String,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseConnection_LoadBytes_m67F99545F778899EF84088B4EF313D637E2EE00E (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, String_t* ___0_path, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_targetTexture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* L_0 = (U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08*)il2cpp_codegen_object_new(U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadBytesU3Ed__13__ctor_m21702E45C1851D55720C6B4F3146DBEAF6EF3CD7(L_0, 0, NULL);
		U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* L_2 = L_1;
		String_t* L_3 = ___0_path;
		NullCheck(L_2);
		L_2->___path_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___path_4), (void*)L_3);
		U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* L_4 = L_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___1_targetTexture;
		NullCheck(L_4);
		L_4->___targetTexture_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___targetTexture_2), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator FirebaseConnection::LoadList(ReaderManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseConnection_LoadList_m2C7CBDF5D02EFF5DEDF1A91F5D4D41C0AF2A3CAE (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* ___0_readerManager, String_t* ___1_folder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* L_0 = (U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8*)il2cpp_codegen_object_new(U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadListU3Ed__14__ctor_m5C38F029A35742A7E7D1758A64305AEEAB8ACC1C(L_0, 0, NULL);
		U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* L_2 = L_1;
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_3 = ___0_readerManager;
		NullCheck(L_2);
		L_2->___readerManager_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___readerManager_4), (void*)L_3);
		U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* L_4 = L_2;
		String_t* L_5 = ___1_folder;
		NullCheck(L_4);
		L_4->___folder_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___folder_3), (void*)L_5);
		return L_4;
	}
}
// System.Void FirebaseConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseConnection__ctor_m2E05176B428EBEB213342190366049ED040AF78A (FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* __this, const RuntimeMethod* method) 
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
// System.Void FirebaseConnection/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1E972B2FE18FE519ADF3A149D8F8CFD1BD0969B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* L_0 = (U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135*)il2cpp_codegen_object_new(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4B67346A6D62F3654F4A7F0379A3A8D3A890B5A6(L_0, NULL);
		((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void FirebaseConnection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4B67346A6D62F3654F4A7F0379A3A8D3A890B5A6 (U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FirebaseConnection/<>c::<UploadBytes>b__11_0(Firebase.Storage.UploadState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUploadBytesU3Eb__11_0_m4C3FE7F34CBF90225F4C5E87074E331D7D3E454E (U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* __this, UploadState_t6B87C49409111DB6BF258284429CF077E49DB28B* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D7836CA675C3A618A16F9B062B65399971595BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(String.Format("Progress: {0} of {1} bytes transferred.",
		//     state.BytesTransferred, state.TotalByteCount));
		UploadState_t6B87C49409111DB6BF258284429CF077E49DB28B* L_0 = ___0_state;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = UploadState_get_BytesTransferred_mA931DDDED32EE48A453D06A51593BF9A8790EFAF(L_0, NULL);
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		UploadState_t6B87C49409111DB6BF258284429CF077E49DB28B* L_4 = ___0_state;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = UploadState_get_TotalByteCount_m870CAE7FF6FECDE6DB1140366E42502A7FA11A82(L_4, NULL);
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6D7836CA675C3A618A16F9B062B65399971595BC, L_3, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// }), CancellationToken.None, null)
		return;
	}
}
// System.Void FirebaseConnection/<>c::<UploadBytes>b__11_1(System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUploadBytesU3Eb__11_1_mA114D642F60AA825BB99A5EBE784D2F62AB60020 (U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* __this, Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m9AF50FF9577BEB04961F8E61F740CCEF43A43FD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BB25C8DC7EA48E78B84C1E42EC8050DD777C23C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE31FE94D0AAFEAD10A6D831EBC5CD45742B874A8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (task.IsFaulted || task.IsCanceled)
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_0 = ___0_task;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_2 = ___0_task;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}

IL_0010:
	{
		// Debug.Log(task.Exception.ToString());
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_4 = ___0_task;
		NullCheck(L_4);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_5;
		L_5 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		return;
	}

IL_0021:
	{
		// StorageMetadata metadata = task.Result;
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_7 = ___0_task;
		NullCheck(L_7);
		StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* L_8;
		L_8 = Task_1_get_Result_m9AF50FF9577BEB04961F8E61F740CCEF43A43FD9(L_7, Task_1_get_Result_m9AF50FF9577BEB04961F8E61F740CCEF43A43FD9_RuntimeMethod_var);
		// string md5Hash = metadata.Md5Hash;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = StorageMetadata_get_Md5Hash_mA3BB9E0C886BC7CBF6BBA3E47E295DE6FE41EB2B(L_8, NULL);
		V_0 = L_9;
		// Debug.Log("Finished uploading...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2BB25C8DC7EA48E78B84C1E42EC8050DD777C23C, NULL);
		// Debug.Log("md5 hash = " + md5Hash);
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE31FE94D0AAFEAD10A6D831EBC5CD45742B874A8, L_10, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// });
		return;
	}
}
// System.Void FirebaseConnection/<>c::<LoadBytes>b__13_1(Firebase.Storage.DownloadState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadBytesU3Eb__13_1_m65F2B2926A436905FCA283F229637C12201863DD (U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* __this, DownloadState_tEEE10B9954757DC1A3FCDB34BDA68A66B6DB89E7* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D7836CA675C3A618A16F9B062B65399971595BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(String.Format("Progress: {0} of {1} bytes transferred.",
		//     state.BytesTransferred, state.TotalByteCount));
		DownloadState_tEEE10B9954757DC1A3FCDB34BDA68A66B6DB89E7* L_0 = ___0_state;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = DownloadState_get_BytesTransferred_m6BC96CF7184BFFDEB440ED0235AE6790D2308943(L_0, NULL);
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		DownloadState_tEEE10B9954757DC1A3FCDB34BDA68A66B6DB89E7* L_4 = ___0_state;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = DownloadState_get_TotalByteCount_m581E4056F0E06AAFD7D79BC53F64EB8BAE1F6C77(L_4, NULL);
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6D7836CA675C3A618A16F9B062B65399971595BC, L_3, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// }), CancellationToken.None)
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
// System.Void FirebaseConnection/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mD410B34B4217D4F98C6F59C50B2E4DB42A3C8D97 (U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FirebaseConnection/<>c__DisplayClass12_0::<UpdateList>b__0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CUpdateListU3Eb__0_m886A55E0437CFE575D97251162689B4952E020C9 (U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral793A509D769F73CB7DFD6BD20D25476599F22346);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.IsFaulted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___0_task;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.Log(task.Exception.ToString());
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___0_task;
		NullCheck(L_2);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_3;
		L_3 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		goto IL_002c;
	}

IL_001a:
	{
		// else if (task.IsCompleted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = ___0_task;
		NullCheck(L_5);
		bool L_6;
		L_6 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_5, NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// Debug.Log("?????? ??? ???");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral793A509D769F73CB7DFD6BD20D25476599F22346, NULL);
	}

IL_002c:
	{
		// isLoad = true;
		__this->___isLoad_0 = (bool)1;
		// });
		return;
	}
}
// System.Boolean FirebaseConnection/<>c__DisplayClass12_0::<UpdateList>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CUpdateListU3Eb__1_m4F9E3E51C7ABAC47D376A90ED8203AD14416EDCE (U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => isLoad == true);
		bool L_0 = __this->___isLoad_0;
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
// System.Void FirebaseConnection/<UpdateList>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateListU3Ed__12__ctor_m591E8C41E912605A685E778F51B020BF70FF22CE (U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseConnection/<UpdateList>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateListU3Ed__12_System_IDisposable_Dispose_m7DC81387D8F295C12EAAD13DBF8BD858243B9410 (U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseConnection/<UpdateList>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateListU3Ed__12_MoveNext_mA26E0E90FA320F31D736F0397898AC7F39068D99 (U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CUpdateListU3Eb__0_m886A55E0437CFE575D97251162689B4952E020C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CUpdateListU3Eb__1_m4F9E3E51C7ABAC47D376A90ED8203AD14416EDCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F52DB53D604195B4FC3A8234C3B19619090FB2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* V_1 = NULL;
	U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30* V_2 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ac;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30* L_4 = (U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass12_0__ctor_mD410B34B4217D4F98C6F59C50B2E4DB42A3C8D97(L_4, NULL);
		V_2 = L_4;
		// bool isLoad = false;
		U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30* L_5 = V_2;
		NullCheck(L_5);
		L_5->___isLoad_0 = (bool)0;
		// Dictionary<string, object> dictionary = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_6, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_3 = L_6;
		// dictionary[fileName] = fileName + ".png";
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = V_3;
		String_t* L_8 = __this->___fileName_2;
		String_t* L_9 = __this->___fileName_2;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		NullCheck(L_7);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_7, L_8, L_10, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// loadingPopup.SetActive(true);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___loadingPopup_5;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// string json = JsonUtility.ToJson(dictionary);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_3;
		String_t* L_14;
		L_14 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_13, NULL);
		// databaseRef.Child(folder).UpdateChildrenAsync(dictionary)
		// .ContinueWith(task =>
		// {
		// 
		//     if (task.IsFaulted)
		//     {
		//         Debug.Log(task.Exception.ToString());
		//     }
		//     else if (task.IsCompleted)
		//     {
		//         // ??? ???? ?? ???
		//         Debug.Log("?????? ??? ???");
		//     }
		// 
		//     isLoad = true;
		// });
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_15 = V_1;
		NullCheck(L_15);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_16 = L_15->___databaseRef_9;
		String_t* L_17 = __this->___folder_4;
		NullCheck(L_16);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_18;
		L_18 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_16, L_17, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = V_3;
		NullCheck(L_18);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_20;
		L_20 = DatabaseReference_UpdateChildrenAsync_m1B21DCF2FB0E471325973394373094C875940EBE(L_18, L_19, NULL);
		U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30* L_21 = V_2;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_22 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_22, L_21, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CUpdateListU3Eb__0_m886A55E0437CFE575D97251162689B4952E020C9_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_23;
		L_23 = Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C(L_20, L_22, NULL);
		// yield return new WaitUntil(() => isLoad == true);
		U3CU3Ec__DisplayClass12_0_t4659A6CD935C5FE79DEDF356015350F4AECA3E30* L_24 = V_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_25 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CUpdateListU3Eb__1_m4F9E3E51C7ABAC47D376A90ED8203AD14416EDCE_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_26 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_26, L_25, NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ac:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// loadingPopup.SetActive(false);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_27 = V_1;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___loadingPopup_5;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// uploadPopup.SetActive(true);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_29 = V_1;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29->___uploadPopup_6;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		// Invoke("DisableUploadPopup", 1.0f);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_31 = V_1;
		NullCheck(L_31);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(L_31, _stringLiteral7F52DB53D604195B4FC3A8234C3B19619090FB2D, (1.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object FirebaseConnection/<UpdateList>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateListU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m25BCE338D9453D71BDBB28CBD955C66D04B40DF2 (U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseConnection/<UpdateList>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateListU3Ed__12_System_Collections_IEnumerator_Reset_mD85C2EEE50925EE3C61C819B381AF5DB6FCC4BB8 (U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateListU3Ed__12_System_Collections_IEnumerator_Reset_mD85C2EEE50925EE3C61C819B381AF5DB6FCC4BB8_RuntimeMethod_var)));
	}
}
// System.Object FirebaseConnection/<UpdateList>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateListU3Ed__12_System_Collections_IEnumerator_get_Current_m07CF35AE8B3277F42652F1ED75BBBC7C56AE79B2 (U3CUpdateListU3Ed__12_tC19F698F00F07DB9D7ABC10B0FAB3FE367A3BBA4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void FirebaseConnection/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m12072703DADD8C49022428866820B15328B5025F (U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FirebaseConnection/<>c__DisplayClass13_0::<LoadBytes>b__0(System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__0_mE75C7B005B75EE778339FDEAEB2BDB60401B89CD (U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* __this, Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m9AF50FF9577BEB04961F8E61F740CCEF43A43FD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1679B0111995A46561748EC18432C07E3B85F2BD);
		s_Il2CppMethodInitialized = true;
	}
	StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* V_0 = NULL;
	{
		// if (!task.IsFaulted && !task.IsCanceled)
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_0 = ___0_task;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_0, NULL);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_2 = ___0_task;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_2, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// StorageMetadata meta = task.Result;
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_4 = ___0_task;
		NullCheck(L_4);
		StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* L_5;
		L_5 = Task_1_get_Result_m9AF50FF9577BEB04961F8E61F740CCEF43A43FD9(L_4, Task_1_get_Result_m9AF50FF9577BEB04961F8E61F740CCEF43A43FD9_RuntimeMethod_var);
		V_0 = L_5;
		// target_bytelength = long.Parse(meta.GetCustomMetadata("bytelength"));
		StorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = StorageMetadata_GetCustomMetadata_mECE397387A5E5FF20BABF5652994E62C5DEC49C3(L_6, _stringLiteral1679B0111995A46561748EC18432C07E3B85F2BD, NULL);
		int64_t L_8;
		L_8 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_7, NULL);
		__this->___target_bytelength_0 = L_8;
		return;
	}

IL_002e:
	{
		// Debug.LogException(task.Exception);
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_9 = ___0_task;
		NullCheck(L_9);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_10;
		L_10 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_10, NULL);
		// });
		return;
	}
}
// System.Void FirebaseConnection/<>c__DisplayClass13_0::<LoadBytes>b__2(System.Threading.Tasks.Task`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__2_m2B1A8ACE92615602575DA597FC15393D226DFB4C (U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* __this, Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_mCC697EA9316278EB9734A0AB03CF147AD43345F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52E7F480095E63B137D469C30D2AB7ECA192CDDA);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (task.IsFaulted || task.IsCanceled)
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_0 = ___0_task;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_2 = ___0_task;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_2, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_0010:
	{
		// Debug.LogException(task.Exception);
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_4 = ___0_task;
		NullCheck(L_4);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_5;
		L_5 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_5, NULL);
		goto IL_003b;
	}

IL_001d:
	{
		// byte[] customBytes = task.Result;
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_6 = ___0_task;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = Task_1_get_Result_mCC697EA9316278EB9734A0AB03CF147AD43345F6(L_6, Task_1_get_Result_mCC697EA9316278EB9734A0AB03CF147AD43345F6_RuntimeMethod_var);
		V_0 = L_7;
		// targetTexture.LoadImage(customBytes);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___targetTexture_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		bool L_10;
		L_10 = ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041(L_8, L_9, NULL);
		// Debug.Log("Finished downloading!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral52E7F480095E63B137D469C30D2AB7ECA192CDDA, NULL);
	}

IL_003b:
	{
		// isLoad = true;
		__this->___isLoad_2 = (bool)1;
		// });
		return;
	}
}
// System.Boolean FirebaseConnection/<>c__DisplayClass13_0::<LoadBytes>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__3_mCB3FF83AB1EEC2FF7563E0B67B72D7671FE45F2F (U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => isLoad == true);
		bool L_0 = __this->___isLoad_2;
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
// System.Void FirebaseConnection/<LoadBytes>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadBytesU3Ed__13__ctor_m21702E45C1851D55720C6B4F3146DBEAF6EF3CD7 (U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseConnection/<LoadBytes>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadBytesU3Ed__13_System_IDisposable_Dispose_mC980A9BAD0C42E248B8CAAF76AA59966A5190398 (U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseConnection/<LoadBytes>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadBytesU3Ed__13_MoveNext_m60856DA8B965A04210F5180CBC495272DEF938A6 (U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageProgress_1__ctor_mD46A390B6DA10715807B4E614CD9D242295345BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageProgress_1_t9508C56782D1B24C4F6E39A08FABB7A3DFE1E161_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m50422B9DE23F0109C7119A4FB229B30B8C7117BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisStorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099_m8A026AC83350DCE43CB1230A93FC350A4F315DA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLoadBytesU3Eb__13_1_m65F2B2926A436905FCA283F229637C12201863DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__0_mE75C7B005B75EE778339FDEAEB2BDB60401B89CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__2_m2B1A8ACE92615602575DA597FC15393D226DFB4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__3_mCB3FF83AB1EEC2FF7563E0B67B72D7671FE45F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* V_1 = NULL;
	Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* G_B5_0 = NULL;
	int64_t G_B5_1 = 0;
	StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* G_B5_2 = NULL;
	Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* G_B4_0 = NULL;
	int64_t G_B4_1 = 0;
	StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* G_B4_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0105;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* L_4 = (U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass13_0__ctor_m12072703DADD8C49022428866820B15328B5025F(L_4, NULL);
		__this->___U3CU3E8__1_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_4);
		U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* L_5 = __this->___U3CU3E8__1_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___targetTexture_2;
		NullCheck(L_5);
		L_5->___targetTexture_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___targetTexture_1), (void*)L_6);
		// bool isLoad = false;
		U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* L_7 = __this->___U3CU3E8__1_5;
		NullCheck(L_7);
		L_7->___isLoad_2 = (bool)0;
		// long target_bytelength = 0;
		U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* L_8 = __this->___U3CU3E8__1_5;
		NullCheck(L_8);
		L_8->___target_bytelength_0 = ((int64_t)0);
		// loadingPopup.SetActive(true);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___loadingPopup_5;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// StorageReference targetRef = storageRef.Child(path);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_11 = V_1;
		NullCheck(L_11);
		StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* L_12 = L_11->___storageRef_8;
		String_t* L_13 = __this->___path_4;
		NullCheck(L_12);
		StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* L_14;
		L_14 = StorageReference_Child_m9F88459EAF9C20A744124271AB52DCE825FD0B68(L_12, L_13, NULL);
		// targetRef.GetMetadataAsync().ContinueWithOnMainThread(task => {
		//     if (!task.IsFaulted && !task.IsCanceled)
		//     {
		//         StorageMetadata meta = task.Result;
		//         target_bytelength = long.Parse(meta.GetCustomMetadata("bytelength"));
		//     }
		//     else
		//     {
		//         Debug.LogException(task.Exception);
		//     }
		// });
		StorageReference_t33F43540227458BFCCC2980F614D70CD663C9019* L_15 = L_14;
		NullCheck(L_15);
		Task_1_tF88E32FB2529207D8CADA86C56C89C07E68D6B26* L_16;
		L_16 = StorageReference_GetMetadataAsync_m51B1104CC559C76EACD0DA1F231B2132A35496F0(L_15, NULL);
		U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* L_17 = __this->___U3CU3E8__1_5;
		Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F* L_18 = (Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F*)il2cpp_codegen_object_new(Action_1_t13507C9930B6D093A83B2B62809BA8728E663B9F_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_mC35F13E22D56F85284B1BD4FDC79A1FF9E66DF08(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__0_mE75C7B005B75EE778339FDEAEB2BDB60401B89CD_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_19;
		L_19 = TaskExtension_ContinueWithOnMainThread_TisStorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099_m8A026AC83350DCE43CB1230A93FC350A4F315DA2(L_16, L_18, TaskExtension_ContinueWithOnMainThread_TisStorageMetadata_tD3444C8BB3AAC75A90B4B0A6D3A1611B14763099_m8A026AC83350DCE43CB1230A93FC350A4F315DA2_RuntimeMethod_var);
		// targetRef.GetBytesAsync(target_bytelength, new StorageProgress<DownloadState>(state => {
		//     Debug.Log(String.Format("Progress: {0} of {1} bytes transferred.",
		//         state.BytesTransferred, state.TotalByteCount));
		// }), CancellationToken.None)
		// .ContinueWithOnMainThread(task => {
		// 
		//     if (task.IsFaulted || task.IsCanceled)
		//     {
		//         Debug.LogException(task.Exception);
		//     }
		//     else
		//     {
		//         byte[] customBytes = task.Result;
		//         targetTexture.LoadImage(customBytes);
		//         Debug.Log("Finished downloading!");
		//     }
		//     isLoad = true;
		// });
		U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* L_20 = __this->___U3CU3E8__1_5;
		NullCheck(L_20);
		int64_t L_21 = L_20->___target_bytelength_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* L_22 = ((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_3;
		Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* L_23 = L_22;
		G_B4_0 = L_23;
		G_B4_1 = L_21;
		G_B4_2 = L_15;
		if (L_23)
		{
			G_B5_0 = L_23;
			G_B5_1 = L_21;
			G_B5_2 = L_15;
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var);
		U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135* L_24 = ((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* L_25 = (Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D*)il2cpp_codegen_object_new(Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_m8179F46294FA4AE6F9D7EABF4B2224FF7FA93BA0(L_25, L_24, (intptr_t)((void*)U3CU3Ec_U3CLoadBytesU3Eb__13_1_m65F2B2926A436905FCA283F229637C12201863DD_RuntimeMethod_var), NULL);
		Action_1_t031205407324F465F5B750AA67AA9D07DF9E8F9D* L_26 = L_25;
		((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_3 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B485359177C6D078547EDB0937BBB63AEF90135_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_3), (void*)L_26);
		G_B5_0 = L_26;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_00ba:
	{
		StorageProgress_1_t9508C56782D1B24C4F6E39A08FABB7A3DFE1E161* L_27 = (StorageProgress_1_t9508C56782D1B24C4F6E39A08FABB7A3DFE1E161*)il2cpp_codegen_object_new(StorageProgress_1_t9508C56782D1B24C4F6E39A08FABB7A3DFE1E161_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		StorageProgress_1__ctor_mD46A390B6DA10715807B4E614CD9D242295345BA(L_27, G_B5_0, StorageProgress_1__ctor_mD46A390B6DA10715807B4E614CD9D242295345BA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		NullCheck(G_B5_2);
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_29;
		L_29 = StorageReference_GetBytesAsync_mE133F8182861016E9F319D180DE1C8BC140399CE(G_B5_2, G_B5_1, L_27, L_28, NULL);
		U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* L_30 = __this->___U3CU3E8__1_5;
		Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186* L_31 = (Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186*)il2cpp_codegen_object_new(Action_1_t4F8901C9F869AD33A14634B303F4ABDCA6E2C186_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA400868203E99619DB9DE7C39ECC7445E0057791(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__2_m2B1A8ACE92615602575DA597FC15393D226DFB4C_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_32;
		L_32 = TaskExtension_ContinueWithOnMainThread_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m50422B9DE23F0109C7119A4FB229B30B8C7117BD(L_29, L_31, TaskExtension_ContinueWithOnMainThread_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m50422B9DE23F0109C7119A4FB229B30B8C7117BD_RuntimeMethod_var);
		// yield return new WaitUntil(() => isLoad == true);
		U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* L_33 = __this->___U3CU3E8__1_5;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_34 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_34, L_33, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CLoadBytesU3Eb__3_mCB3FF83AB1EEC2FF7563E0B67B72D7671FE45F2F_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_35 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_35, L_34, NULL);
		__this->___U3CU3E2__current_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_35);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0105:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// targetTexture.Apply();
		U3CU3Ec__DisplayClass13_0_t4ECF274F92384BDB556359DF810C12D1379606F4* L_36 = __this->___U3CU3E8__1_5;
		NullCheck(L_36);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = L_36->___targetTexture_1;
		NullCheck(L_37);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_37, NULL);
		// loadingPopup.SetActive(false);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_38 = V_1;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = L_38->___loadingPopup_5;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FirebaseConnection/<LoadBytes>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadBytesU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8396EA23646224E6B27081A12C526C06B13F9676 (U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseConnection/<LoadBytes>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadBytesU3Ed__13_System_Collections_IEnumerator_Reset_mFC5C799253CE7B091D016A426DE84ECCFB528BC7 (U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadBytesU3Ed__13_System_Collections_IEnumerator_Reset_mFC5C799253CE7B091D016A426DE84ECCFB528BC7_RuntimeMethod_var)));
	}
}
// System.Object FirebaseConnection/<LoadBytes>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadBytesU3Ed__13_System_Collections_IEnumerator_get_Current_m6BE26BC09DCED8E72521FCEFBAC28FD1307C42A7 (U3CLoadBytesU3Ed__13_tA9DF3FA3B02783BA11E4B2B46471AF3FB11D4D08* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void FirebaseConnection/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m94CA708F8C70DBAC1B2022A9D0F6DEAD9F49DBC7 (U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FirebaseConnection/<>c__DisplayClass14_0::<LoadList>b__0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CLoadListU3Eb__0_m2F06D28E00889B91D2FDBDA93BA5ED3D127421F8 (U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* __this, Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650F80C11F87CA414C2A5A21A477E1CBFD820D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D7AA0495D0D9744597253028E2C43F57A23599);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* V_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	{
		// if (task.IsFaulted)
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_0 = ___0_task;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.Log("LoadList Failed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral650F80C11F87CA414C2A5A21A477E1CBFD820D47, NULL);
		goto IL_0052;
	}

IL_0014:
	{
		// else if (task.IsCompleted)
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_2 = ___0_task;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_2, NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		// DataSnapshot snapshot = task.Result;
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_4 = ___0_task;
		NullCheck(L_4);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_5;
		L_5 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_4, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		V_0 = L_5;
		// if (snapshot.Exists)
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = DataSnapshot_get_Exists_mA540904D75EBE3EE4BA7E7BF842F5CBD52BD0A1A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// var dictionary = snapshot.Value as Dictionary<string, object>;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(L_8, NULL);
		V_1 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_9, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
		// if (dictionary != null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10 = V_1;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// curruntDic = dictionary;
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_11 = __this->___U3CU3E4__this_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12 = V_1;
		NullCheck(L_11);
		L_11->___curruntDic_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___curruntDic_10), (void*)L_12);
		goto IL_0052;
	}

IL_0048:
	{
		// Debug.Log("List Data None");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC2D7AA0495D0D9744597253028E2C43F57A23599, NULL);
	}

IL_0052:
	{
		// isLoad = true;
		__this->___isLoad_1 = (bool)1;
		// });
		return;
	}
}
// System.Boolean FirebaseConnection/<>c__DisplayClass14_0::<LoadList>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CLoadListU3Eb__1_m1B7D059A0B9A6EBF23CEDC3A67C38CA7A096F761 (U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => isLoad == true);
		bool L_0 = __this->___isLoad_1;
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
// System.Void FirebaseConnection/<LoadList>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadListU3Ed__14__ctor_m5C38F029A35742A7E7D1758A64305AEEAB8ACC1C (U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseConnection/<LoadList>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadListU3Ed__14_System_IDisposable_Dispose_mF664F6C7CB4CAF7767B2D408DC276EDD49CCB3B2 (U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseConnection/<LoadList>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadListU3Ed__14_MoveNext_m9DB0B6ACDC9530627348BE581EB30A3E5A639F25 (U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m031394788113E40263A8EEBC8B505FA024A6377C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CLoadListU3Eb__0_m2F06D28E00889B91D2FDBDA93BA5ED3D127421F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CLoadListU3Eb__1_m1B7D059A0B9A6EBF23CEDC3A67C38CA7A096F761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* V_1 = NULL;
	U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* L_4 = (U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass14_0__ctor_m94CA708F8C70DBAC1B2022A9D0F6DEAD9F49DBC7(L_4, NULL);
		V_2 = L_4;
		U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* L_5 = V_2;
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		L_5->___U3CU3E4__this_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E4__this_0), (void*)L_6);
		// bool isLoad = false;
		U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* L_7 = V_2;
		NullCheck(L_7);
		L_7->___isLoad_1 = (bool)0;
		// loadingPopup.SetActive(true);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___loadingPopup_5;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// databaseRef.Child(folder).GetValueAsync().ContinueWith(task =>
		// {
		// 
		//     if (task.IsFaulted)
		//     {
		//         // ??????? ???? ?? ???? ???
		//         Debug.Log("LoadList Failed");
		//     }
		//     else if (task.IsCompleted)
		//     {
		//         DataSnapshot snapshot = task.Result;
		//         if (snapshot.Exists)
		//         {
		// 
		//             var dictionary = snapshot.Value as Dictionary<string, object>;
		//             if (dictionary != null)
		//             {
		//                 curruntDic = dictionary;
		//                 //readerManager.SetList(folder, dictionary);
		//             }
		// 
		//         }
		//         else
		//         {
		//             // ????? ??????? ???? ?? ???
		//             Debug.Log("List Data None");
		//         }
		//     }
		//     isLoad = true;
		// });
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_10 = V_1;
		NullCheck(L_10);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_11 = L_10->___databaseRef_9;
		String_t* L_12 = __this->___folder_3;
		NullCheck(L_11);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_13;
		L_13 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_11, L_12, NULL);
		NullCheck(L_13);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_14;
		L_14 = Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5(L_13, NULL);
		U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* L_15 = V_2;
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_16 = (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*)il2cpp_codegen_object_new(Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m47FFCA5D7CA1940EDC58E9D6F823C7710794F537(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CLoadListU3Eb__0_m2F06D28E00889B91D2FDBDA93BA5ED3D127421F8_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17;
		L_17 = Task_1_ContinueWith_m031394788113E40263A8EEBC8B505FA024A6377C(L_14, L_16, Task_1_ContinueWith_m031394788113E40263A8EEBC8B505FA024A6377C_RuntimeMethod_var);
		// yield return new WaitUntil(() => isLoad == true);
		U3CU3Ec__DisplayClass14_0_t6C7A0439F19AD27A33F715216088427A8A453139* L_18 = V_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_19 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CLoadListU3Eb__1_m1B7D059A0B9A6EBF23CEDC3A67C38CA7A096F761_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_20 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_20, L_19, NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// loadingPopup.SetActive(false);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_21 = V_1;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21->___loadingPopup_5;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// readerManager.SetList(folder, curruntDic);
		ReaderManager_t09CFFA2F7E6C836D6D1B893C99085689CDEDF97F* L_23 = __this->___readerManager_4;
		String_t* L_24 = __this->___folder_3;
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_25 = V_1;
		NullCheck(L_25);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_26 = L_25->___curruntDic_10;
		NullCheck(L_23);
		ReaderManager_SetList_mAD2F3E5062B8B8EC545C1D57F15A8C83D2D16A6A(L_23, L_24, L_26, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FirebaseConnection/<LoadList>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadListU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0801801DBEE5CAED8D932015B48EC9AF6B6DEA27 (U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseConnection/<LoadList>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadListU3Ed__14_System_Collections_IEnumerator_Reset_mCA82C304A3BD12D5A93B2E47AE567F4AC29AB063 (U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadListU3Ed__14_System_Collections_IEnumerator_Reset_mCA82C304A3BD12D5A93B2E47AE567F4AC29AB063_RuntimeMethod_var)));
	}
}
// System.Object FirebaseConnection/<LoadList>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadListU3Ed__14_System_Collections_IEnumerator_get_Current_m946E1C0ED1D3C87866A535684A9AE8153EED3E88 (U3CLoadListU3Ed__14_t19F823B7EA87BD56571A6F27BE2B18A40AAA4DC8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void DrawTool::DrawLine(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawTool_DrawLine_m0835D7EBB9D867C3E98A593529B3028F9492E2EC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_p1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_p2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_col, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector2 t = p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_p1;
		V_0 = L_0;
		// float frac = 1 / Mathf.Sqrt(Mathf.Pow(p2.x - p1.x, 2) + Mathf.Pow(p2.y - p1.y, 2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___2_p2;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_p1;
		float L_4 = L_3.___x_0;
		float L_5;
		L_5 = powf(((float)il2cpp_codegen_subtract(L_2, L_4)), (2.0f));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___2_p2;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___1_p1;
		float L_9 = L_8.___y_1;
		float L_10;
		L_10 = powf(((float)il2cpp_codegen_subtract(L_7, L_9)), (2.0f));
		float L_11;
		L_11 = sqrtf(((float)il2cpp_codegen_add(L_5, L_10)));
		V_1 = ((float)((1.0f)/L_11));
		// float ctr = 0;
		V_2 = (0.0f);
		goto IL_0067;
	}

IL_0045:
	{
		// t = Vector2.Lerp(p1, p2, ctr);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___1_p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___2_p2;
		float L_14 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_12, L_13, L_14, NULL);
		V_0 = L_15;
		// ctr += frac;
		float L_16 = V_2;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_add(L_16, L_17));
		// tex.SetPixel((int)t.x, (int)t.y, col);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___0_tex;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		float L_22 = L_21.___y_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___3_col;
		NullCheck(L_18);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_18, il2cpp_codegen_cast_double_to_int<int32_t>(L_20), il2cpp_codegen_cast_double_to_int<int32_t>(L_22), L_23, NULL);
	}

IL_0067:
	{
		// while ((int)t.x != (int)p2.x || (int)t.y != (int)p2.y)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___2_p2;
		float L_27 = L_26.___x_0;
		if ((!(((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_25)) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_27)))))
		{
			goto IL_0045;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		float L_29 = L_28.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___2_p2;
		float L_31 = L_30.___y_1;
		if ((!(((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_29)) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_31)))))
		{
			goto IL_0045;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DrawTool::DrawLine(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawTool_DrawLine_mF90D00BDDE4ACC2570EAE01DEA1BC379FC42C106 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_p1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_p2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_col, int32_t ___4_tick, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// Vector2 t = p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_p1;
		V_0 = L_0;
		// float frac = 1 / Mathf.Sqrt(Mathf.Pow(p2.x - p1.x, 2) + Mathf.Pow(p2.y - p1.y, 2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___2_p2;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_p1;
		float L_4 = L_3.___x_0;
		float L_5;
		L_5 = powf(((float)il2cpp_codegen_subtract(L_2, L_4)), (2.0f));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___2_p2;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___1_p1;
		float L_9 = L_8.___y_1;
		float L_10;
		L_10 = powf(((float)il2cpp_codegen_subtract(L_7, L_9)), (2.0f));
		float L_11;
		L_11 = sqrtf(((float)il2cpp_codegen_add(L_5, L_10)));
		V_1 = ((float)((1.0f)/L_11));
		// float ctr = 0;
		V_2 = (0.0f);
		goto IL_00b3;
	}

IL_0045:
	{
		// t = Vector2.Lerp(p1, p2, ctr);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___1_p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___2_p2;
		float L_14 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_12, L_13, L_14, NULL);
		V_0 = L_15;
		// ctr += frac;
		float L_16 = V_2;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_add(L_16, L_17));
		// for (int tc = tick; tc > 0; tc--)
		int32_t L_18 = ___4_tick;
		V_3 = L_18;
		goto IL_00af;
	}

IL_0057:
	{
		// tex.SetPixel((int)t.x + (tick / 2) - tc, (int)t.y + (tick / 2), col);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = ___0_tex;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		float L_21 = L_20.___x_0;
		int32_t L_22 = ___4_tick;
		int32_t L_23 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___y_1;
		int32_t L_26 = ___4_tick;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___3_col;
		NullCheck(L_19);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_21), ((int32_t)(L_22/2)))), L_23)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_25), ((int32_t)(L_26/2)))), L_27, NULL);
		// for (int tr = tick; tr > 0; tr--)
		int32_t L_28 = ___4_tick;
		V_4 = L_28;
		goto IL_00a6;
	}

IL_007e:
	{
		// tex.SetPixel((int)t.x + (tick / 2), (int)t.y + (tick / 2) - tr, col);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = ___0_tex;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_0;
		float L_31 = L_30.___x_0;
		int32_t L_32 = ___4_tick;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_0;
		float L_34 = L_33.___y_1;
		int32_t L_35 = ___4_tick;
		int32_t L_36 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = ___3_col;
		NullCheck(L_29);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_29, ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_31), ((int32_t)(L_32/2)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_34), ((int32_t)(L_35/2)))), L_36)), L_37, NULL);
		// for (int tr = tick; tr > 0; tr--)
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_00a6:
	{
		// for (int tr = tick; tr > 0; tr--)
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) > ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		// for (int tc = tick; tc > 0; tc--)
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}

IL_00af:
	{
		// for (int tc = tick; tc > 0; tc--)
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) > ((int32_t)0)))
		{
			goto IL_0057;
		}
	}

IL_00b3:
	{
		// while ((int)t.x != (int)p2.x || (int)t.y != (int)p2.y)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_0;
		float L_43 = L_42.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = ___2_p2;
		float L_45 = L_44.___x_0;
		if ((!(((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_43)) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_45)))))
		{
			goto IL_0045;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_0;
		float L_47 = L_46.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___2_p2;
		float L_49 = L_48.___y_1;
		if ((!(((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_47)) == ((uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_49)))))
		{
			goto IL_0045;
		}
	}
	{
		// }
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
// System.Void SaveWriteTexture::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWriteTexture_Start_mBCF94FF906F8ED7E016AE2FB28751E06E94A185E (SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveWriteTexture_U3CStartU3Eb__7_0_m667B0081B2FD8516BD48229EEB419939DF9846DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveWriteTexture_U3CStartU3Eb__7_1_m46A03E62ECD45BC4EE2AFC3B07F16473291D9C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveWriteTexture_U3CStartU3Eb__7_2_mC507AA3E5CA68D01E8B3908E3D723A669C69DEA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShowUploadWindowButton.onClick.AddListener(() => ShowUploadWindow());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___ShowUploadWindowButton_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)SaveWriteTexture_U3CStartU3Eb__7_0_m667B0081B2FD8516BD48229EEB419939DF9846DE_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// UploadButton.onClick.AddListener(() => UploadTexture());
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___UploadButton_7;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)SaveWriteTexture_U3CStartU3Eb__7_1_m46A03E62ECD45BC4EE2AFC3B07F16473291D9C75_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// CancleButton.onClick.AddListener(() => UploadWindow.SetActive(false));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___CancleButton_8;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)SaveWriteTexture_U3CStartU3Eb__7_2_mC507AA3E5CA68D01E8B3908E3D723A669C69DEA9_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void SaveWriteTexture::ShowUploadWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWriteTexture_ShowUploadWindow_mA292DB713349EEEDE749985906CE006FB83BCD9C (SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097* __this, const RuntimeMethod* method) 
{
	{
		// UploadWindow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___UploadWindow_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SaveWriteTexture::UploadTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWriteTexture_UploadTexture_mA5693F972EEC384F4E59E3B148E4B98AEA3F32E0 (SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string folder = FolderText.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___FolderText_9;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		V_0 = L_1;
		// string file = FileText.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___FileText_10;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_2, NULL);
		V_1 = L_3;
		// FirebaseConnection.Instance.UploadBytes(WriteManager.writeTexture, folder, file);
		FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5* L_4 = ((FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseConnection_t90957DBFF40B2E8F634FBBB222C350632BA4CCE5_il2cpp_TypeInfo_var))->___Instance_4;
		WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* L_5 = __this->___WriteManager_4;
		NullCheck(L_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = L_5->___writeTexture_6;
		String_t* L_7 = V_0;
		String_t* L_8 = V_1;
		NullCheck(L_4);
		FirebaseConnection_UploadBytes_m16E778C2FE50B67DEE88663F3F8B56BC500CFECB(L_4, L_6, L_7, L_8, NULL);
		// UploadWindow.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___UploadWindow_6;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SaveWriteTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWriteTexture__ctor_m5DEA4DFEDE65C31D1751E88DCB54D2B9B38563D4 (SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void SaveWriteTexture::<Start>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWriteTexture_U3CStartU3Eb__7_0_m667B0081B2FD8516BD48229EEB419939DF9846DE (SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097* __this, const RuntimeMethod* method) 
{
	{
		// ShowUploadWindowButton.onClick.AddListener(() => ShowUploadWindow());
		SaveWriteTexture_ShowUploadWindow_mA292DB713349EEEDE749985906CE006FB83BCD9C(__this, NULL);
		return;
	}
}
// System.Void SaveWriteTexture::<Start>b__7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWriteTexture_U3CStartU3Eb__7_1_m46A03E62ECD45BC4EE2AFC3B07F16473291D9C75 (SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097* __this, const RuntimeMethod* method) 
{
	{
		// UploadButton.onClick.AddListener(() => UploadTexture());
		SaveWriteTexture_UploadTexture_mA5693F972EEC384F4E59E3B148E4B98AEA3F32E0(__this, NULL);
		return;
	}
}
// System.Void SaveWriteTexture::<Start>b__7_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveWriteTexture_U3CStartU3Eb__7_2_mC507AA3E5CA68D01E8B3908E3D723A669C69DEA9 (SaveWriteTexture_t25D7630EE7778FE5B088EE1FCA26084A9014E097* __this, const RuntimeMethod* method) 
{
	{
		// CancleButton.onClick.AddListener(() => UploadWindow.SetActive(false));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___UploadWindow_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
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
// System.Void WriteManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_Awake_m4D92C0D397268CC494BAB6948C7E503B54DC4502 (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) 
{
	{
		// clean_colours_array = writeTexture.GetPixels();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___writeTexture_6;
		NullCheck(L_0);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_0, NULL);
		__this->___clean_colours_array_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clean_colours_array_14), (void*)L_1);
		// writeTexture.SetPixels(clean_colours_array);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___writeTexture_6;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = __this->___clean_colours_array_14;
		NullCheck(L_2);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void WriteManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_Start_m1D1790773C0C8968AF55AD5A2A26B710460D9211 (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DataBox.Data != null)
		DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* L_0;
		L_0 = DataBox_get_Data_m5C855E136D51653DD5CCA400E75B9AFF8234E76D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// scanImage.texture = DataBox.Data.scanTexture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_2 = __this->___scanImage_4;
		DataBox_tF121BDD4AD4693C28428BAFCD73D7EE8553E6912* L_3;
		L_3 = DataBox_get_Data_m5C855E136D51653DD5CCA400E75B9AFF8234E76D(NULL);
		NullCheck(L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = L_3->___scanTexture_5;
		NullCheck(L_2);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_2, L_4, NULL);
	}

IL_0022:
	{
		// writeImage.texture = writeTexture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = __this->___writeImage_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___writeTexture_6;
		NullCheck(L_5);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_5, L_6, NULL);
		// penToggle.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_7 = __this->___penToggle_8;
		NullCheck(L_7);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WriteManager::ToogleTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_ToogleTool_mB94F2D69A857149198A79B2E2847905BD4B649DF (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) 
{
	{
		// if (penToggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___penToggle_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// isDraw = true;
		__this->___isDraw_10 = (bool)1;
		// isEraser = false;
		__this->___isEraser_11 = (bool)0;
		return;
	}

IL_001c:
	{
		// } else if (eraserToggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___eraserToggle_9;
		NullCheck(L_2);
		bool L_3;
		L_3 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// isDraw = false;
		__this->___isDraw_10 = (bool)0;
		// isEraser = true;
		__this->___isEraser_11 = (bool)1;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void WriteManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_OnDisable_m9EAD068603754835CFCC0C4A81F30639E166EDB9 (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) 
{
	{
		// writeTexture.SetPixels(clean_colours_array);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___writeTexture_6;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = __this->___clean_colours_array_14;
		NullCheck(L_0);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void WriteManager::BackScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_BackScene_m7924E6E73119617720374E092A02706A536D5D4F (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEED4E15CAE7C78EC40E1F5B861BB5D65134C6B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LobbyScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralFEED4E15CAE7C78EC40E1F5B861BB5D65134C6B3, NULL);
		// }
		return;
	}
}
// System.Void WriteManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_Update_m36763BE4E2461F0505BFD610BE1EDF19806B849F (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) 
{
	{
		// if (isDraw)
		bool L_0 = __this->___isDraw_10;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Draw();
		WriteManager_Draw_m4C7DD9EC715F4E6A76C39675CCE38A6A2E81A8E0(__this, NULL);
	}

IL_000e:
	{
		// if (isEraser)
		bool L_1 = __this->___isEraser_11;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Eraser();
		WriteManager_Eraser_m0149CB64B586174E6614B3CA75027684DF283A44(__this, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void WriteManager::Draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_Draw_m4C7DD9EC715F4E6A76C39675CCE38A6A2E81A8E0 (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1511CA01A938B35921AECC90BF29E6F98BB4AB6);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_1 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (Input.touchCount == 1)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_01b1;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// m_PointerEventData = new PointerEventData(m_EventSystem);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2 = __this->___m_EventSystem_18;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_3, L_2, NULL);
		__this->___m_PointerEventData_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PointerEventData_17), (void*)L_3);
		// m_PointerEventData.position = touch.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = __this->___m_PointerEventData_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		NullCheck(L_4);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_4, L_5, NULL);
		// List<RaycastResult> results = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_6 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_6, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_1 = L_6;
		// m_Raycaster.Raycast(m_PointerEventData, results);
		GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* L_7 = __this->___m_Raycaster_16;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = __this->___m_PointerEventData_17;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_9 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker2< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*, List_1_t8292C421BBB00D7661DC07462822936152BAB446* >::Invoke(17 /* System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>) */, L_7, L_8, L_9);
		// if (!results[0].gameObject.CompareTag("WriteTarget"))
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_10 = V_1;
		NullCheck(L_10);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_11;
		L_11 = List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA(L_10, 0, List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		V_2 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_2), NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_12, _stringLiteralC1511CA01A938B35921AECC90BF29E6F98BB4AB6, NULL);
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		// return;
		return;
	}

IL_0069:
	{
		// if (touch.phase == TouchPhase.Began)
		int32_t L_14;
		L_14 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_14)
		{
			goto IL_00fa;
		}
	}
	{
		// drawing = true;
		__this->___drawing_13 = (bool)1;
		// Vector2 mousePos = new Vector2(touch.position.x, touch.position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		float L_16 = L_15.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		float L_18 = L_17.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_16, L_18, NULL);
		// mousePos = TouchToTextureCoordinate(mousePos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = WriteManager_TouchToTextureCoordinate_m8808AB94B8F8D85A356F0D4F137E06E7AE3B31BC(__this, L_19, NULL);
		V_3 = L_20;
		// mousePos.x *= writeTexture.width;
		float* L_21 = (&(&V_3)->___x_0);
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = __this->___writeTexture_6;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		*((float*)L_22) = (float)((float)il2cpp_codegen_multiply(L_23, ((float)L_25)));
		// mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_3;
		float L_27 = L_26.___y_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->___writeTexture_6;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_28);
		(&V_3)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_27)), ((float)L_29)));
		// preMousePos = mousePos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_3;
		__this->___preMousePos_15 = L_30;
		// writeTexture.DrawLine(preMousePos, mousePos, Color.black, 3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = __this->___writeTexture_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = __this->___preMousePos_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		DrawTool_DrawLine_mF90D00BDDE4ACC2570EAE01DEA1BC379FC42C106(L_31, L_32, L_33, L_34, 3, NULL);
		return;
	}

IL_00fa:
	{
		// else if (drawing && touch.phase == TouchPhase.Moved)
		bool L_35 = __this->___drawing_13;
		if (!L_35)
		{
			goto IL_01a0;
		}
	}
	{
		int32_t L_36;
		L_36 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_01a0;
		}
	}
	{
		// Vector2 mousePos = new Vector2(touch.position.x, touch.position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		float L_38 = L_37.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		float L_40 = L_39.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_4), L_38, L_40, NULL);
		// mousePos = TouchToTextureCoordinate(mousePos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = WriteManager_TouchToTextureCoordinate_m8808AB94B8F8D85A356F0D4F137E06E7AE3B31BC(__this, L_41, NULL);
		V_4 = L_42;
		// mousePos.x *= writeTexture.width;
		float* L_43 = (&(&V_4)->___x_0);
		float* L_44 = L_43;
		float L_45 = *((float*)L_44);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_46 = __this->___writeTexture_6;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_46);
		*((float*)L_44) = (float)((float)il2cpp_codegen_multiply(L_45, ((float)L_47)));
		// mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_4;
		float L_49 = L_48.___y_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_50 = __this->___writeTexture_6;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_50);
		(&V_4)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_49)), ((float)L_51)));
		// writeTexture.DrawLine(preMousePos, mousePos, Color.black, 3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_52 = __this->___writeTexture_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = __this->___preMousePos_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		L_55 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		DrawTool_DrawLine_mF90D00BDDE4ACC2570EAE01DEA1BC379FC42C106(L_52, L_53, L_54, L_55, 3, NULL);
		// preMousePos = mousePos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_4;
		__this->___preMousePos_15 = L_56;
		// writeTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_57 = __this->___writeTexture_6;
		NullCheck(L_57);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_57, NULL);
		return;
	}

IL_01a0:
	{
		// } else if (touch.phase == TouchPhase.Ended)
		int32_t L_58;
		L_58 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_58) == ((uint32_t)3))))
		{
			goto IL_01b1;
		}
	}
	{
		// drawing = false;
		__this->___drawing_13 = (bool)0;
	}

IL_01b1:
	{
		// }
		return;
	}
}
// System.Void WriteManager::Eraser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager_Eraser_m0149CB64B586174E6614B3CA75027684DF283A44 (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1511CA01A938B35921AECC90BF29E6F98BB4AB6);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_1 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (Input.touchCount == 1)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0197;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// m_PointerEventData = new PointerEventData(m_EventSystem);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2 = __this->___m_EventSystem_18;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_3, L_2, NULL);
		__this->___m_PointerEventData_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PointerEventData_17), (void*)L_3);
		// m_PointerEventData.position = touch.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = __this->___m_PointerEventData_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		NullCheck(L_4);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_4, L_5, NULL);
		// List<RaycastResult> results = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_6 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_6, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_1 = L_6;
		// m_Raycaster.Raycast(m_PointerEventData, results);
		GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* L_7 = __this->___m_Raycaster_16;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = __this->___m_PointerEventData_17;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_9 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker2< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*, List_1_t8292C421BBB00D7661DC07462822936152BAB446* >::Invoke(17 /* System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>) */, L_7, L_8, L_9);
		// if (!results[0].gameObject.CompareTag("WriteTarget"))
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_10 = V_1;
		NullCheck(L_10);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_11;
		L_11 = List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA(L_10, 0, List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		V_2 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_2), NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_12, _stringLiteralC1511CA01A938B35921AECC90BF29E6F98BB4AB6, NULL);
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		// return;
		return;
	}

IL_0069:
	{
		// if (touch.phase == TouchPhase.Began)
		int32_t L_14;
		L_14 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_14)
		{
			goto IL_00f8;
		}
	}
	{
		// Vector2 mousePos = new Vector2(touch.position.x, touch.position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		float L_16 = L_15.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		float L_18 = L_17.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_16, L_18, NULL);
		// mousePos = TouchToTextureCoordinate(mousePos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = WriteManager_TouchToTextureCoordinate_m8808AB94B8F8D85A356F0D4F137E06E7AE3B31BC(__this, L_19, NULL);
		V_3 = L_20;
		// mousePos.x *= writeTexture.width;
		float* L_21 = (&(&V_3)->___x_0);
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = __this->___writeTexture_6;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		*((float*)L_22) = (float)((float)il2cpp_codegen_multiply(L_23, ((float)L_25)));
		// mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_3;
		float L_27 = L_26.___y_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->___writeTexture_6;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_28);
		(&V_3)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_27)), ((float)L_29)));
		// preMousePos = mousePos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_3;
		__this->___preMousePos_15 = L_30;
		// writeTexture.DrawLine(preMousePos, mousePos, Color.clear, eraserTickness);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = __this->___writeTexture_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = __this->___preMousePos_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		int32_t L_35 = __this->___eraserTickness_12;
		DrawTool_DrawLine_mF90D00BDDE4ACC2570EAE01DEA1BC379FC42C106(L_31, L_32, L_33, L_34, L_35, NULL);
		return;
	}

IL_00f8:
	{
		// else if (touch.phase == TouchPhase.Moved)
		int32_t L_36;
		L_36 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_0197;
		}
	}
	{
		// Vector2 mousePos = new Vector2(touch.position.x, touch.position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		float L_38 = L_37.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		float L_40 = L_39.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_4), L_38, L_40, NULL);
		// mousePos = TouchToTextureCoordinate(mousePos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = WriteManager_TouchToTextureCoordinate_m8808AB94B8F8D85A356F0D4F137E06E7AE3B31BC(__this, L_41, NULL);
		V_4 = L_42;
		// mousePos.x *= writeTexture.width;
		float* L_43 = (&(&V_4)->___x_0);
		float* L_44 = L_43;
		float L_45 = *((float*)L_44);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_46 = __this->___writeTexture_6;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_46);
		*((float*)L_44) = (float)((float)il2cpp_codegen_multiply(L_45, ((float)L_47)));
		// mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_4;
		float L_49 = L_48.___y_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_50 = __this->___writeTexture_6;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_50);
		(&V_4)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_49)), ((float)L_51)));
		// writeTexture.DrawLine(preMousePos, mousePos, Color.clear, eraserTickness);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_52 = __this->___writeTexture_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = __this->___preMousePos_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		L_55 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		int32_t L_56 = __this->___eraserTickness_12;
		DrawTool_DrawLine_mF90D00BDDE4ACC2570EAE01DEA1BC379FC42C106(L_52, L_53, L_54, L_55, L_56, NULL);
		// preMousePos = mousePos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_4;
		__this->___preMousePos_15 = L_57;
		// writeTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_58 = __this->___writeTexture_6;
		NullCheck(L_58);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_58, NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 WriteManager::TouchToTextureCoordinate(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WriteManager_TouchToTextureCoordinate_m8808AB94B8F8D85A356F0D4F137E06E7AE3B31BC (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_touchPosition, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 screenCoordinate = touchPosition / new Vector2(Screen.width, Screen.height);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_touchPosition;
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), ((float)L_1), ((float)L_2), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline(L_0, L_3, NULL);
		V_0 = L_4;
		// Vector2 textureCoordinate = new Vector2(screenCoordinate.x, 1f - screenCoordinate.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_6, ((float)il2cpp_codegen_subtract((1.0f), L_8)), /*hidden argument*/NULL);
		// return textureCoordinate;
		return L_9;
	}
}
// System.Void WriteManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteManager__ctor_mD6B41A092FFA045ABF896C89F4E0383E016D0D10 (WriteManager_tCAA8BA5055286E713C2CBFF0FA7C42480D5BBE79* __this, const RuntimeMethod* method) 
{
	{
		// public bool isDraw = true;
		__this->___isDraw_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_newX, float ___1_newY, float ___2_newZ, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_newX;
		__this->___x_2 = L_0;
		float L_1 = ___1_newY;
		__this->___y_3 = L_1;
		float L_2 = ___2_newZ;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) 
{
	{
		// return m_Texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___m_Texture_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARTrackedImageManager_get_trackedImagePrefab_mC698D56D9B539242437FA40F1DDC6E4FE959DE2A_inline (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackedImagePrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_TrackedImagePrefab_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_format_mB777BBC485ED5A88CD78536F78F43E9795DEEE20_inline (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) 
{
	{
		// public Format format { get; private set; }
		int32_t L_0 = __this->___U3CformatU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_b;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_a;
		float L_7 = L_6.___x_0;
		float L_8 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_a;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_b;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___0_a;
		float L_14 = L_13.___y_1;
		float L_15 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_GameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_GameObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
