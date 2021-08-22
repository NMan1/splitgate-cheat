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

// WidgetBlueprintGeneratedClass FriendRequestNotificationEntry_WidgetBP.FriendRequestNotificationEntry_WidgetBP_C
// 0x0020 (FullSize[0x06F0] - InheritedSize[0x06D0])
class UFriendRequestNotificationEntry_WidgetBP_C : public UPortalWarsFriendRequestEntry
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OpenAnimation;                                             // 0x06D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x06E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_141;                                                 // 0x06E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendRequestNotificationEntry_WidgetBP.FriendRequestNotificationEntry_WidgetBP_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_FriendRequestNotificationEntry_WidgetBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
