#pragma once

#include "..\..\pch.h"


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ProgressionUpdateDialog_WidgetBP.ProgressionUpdateDialog_WidgetBP_C
// 0x0010 (FullSize[0x03E8] - InheritedSize[0x03D8])
class UProgressionUpdateDialog_WidgetBP_C : public UPortalWarsProgressionUpdateDialogWidget
{
public:
	class UImage*                                      Image_84;                                                  // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuBackground_C*                           MenuBackground;                                            // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgressionUpdateDialog_WidgetBP.ProgressionUpdateDialog_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
