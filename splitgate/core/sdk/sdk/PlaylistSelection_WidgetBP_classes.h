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

// WidgetBlueprintGeneratedClass PlaylistSelection_WidgetBP.PlaylistSelection_WidgetBP_C
// 0x0018 (FullSize[0x0378] - InheritedSize[0x0360])
class UPlaylistSelection_WidgetBP_C : public UPortalWarsPlaylistSelectWidget
{
public:
	class UImage*                                      Image_1236;                                                // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuBackground_C*                           MenuBackground;                                            // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USeasonRewards_WidgetBP_C*                   SeasonRewards_WidgetBP;                                    // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlaylistSelection_WidgetBP.PlaylistSelection_WidgetBP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
