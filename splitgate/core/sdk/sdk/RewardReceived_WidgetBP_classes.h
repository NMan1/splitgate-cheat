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

// WidgetBlueprintGeneratedClass RewardReceived_WidgetBP.RewardReceived_WidgetBP_C
// 0x0010 (FullSize[0x03F0] - InheritedSize[0x03E0])
class URewardReceived_WidgetBP_C : public UPortalWarsRewardReceivedWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMenuBackground_C*                           MenuBackground;                                            // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardReceived_WidgetBP.RewardReceived_WidgetBP_C");
		return ptr;
	}



	void SetRewardType(PortalWars_ERewardReceivedType InType);
	void ExecuteUbergraph_RewardReceived_WidgetBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
