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

// WidgetBlueprintGeneratedClass GameModeEntry_WidgetBP.GameModeEntry_WidgetBP_C
// 0x0008 (FullSize[0x0998] - InheritedSize[0x0990])
class UGameModeEntry_WidgetBP_C : public UPortalWarsPlaylistGameModeEntry
{
public:
	class UImage*                                      GamepadKeyImage;                                           // 0x0990(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameModeEntry_WidgetBP.GameModeEntry_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
