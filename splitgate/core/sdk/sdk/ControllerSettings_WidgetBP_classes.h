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

// WidgetBlueprintGeneratedClass ControllerSettings_WidgetBP.ControllerSettings_WidgetBP_C
// 0x0008 (FullSize[0x03A0] - InheritedSize[0x0398])
class UControllerSettings_WidgetBP_C : public UPortalWarsGamepadSettingsWidget
{
public:
	class UMenuBackground_C*                           MenuBackground;                                            // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerSettings_WidgetBP.ControllerSettings_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
