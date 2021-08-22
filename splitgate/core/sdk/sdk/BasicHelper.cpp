#include "..\..\pch.h"
#include <iostream>
#include <sstream>



/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{


GNAME_TYPE* FName::GNames = nullptr;
TUObjectArray* UObject::GObjects = nullptr;

//---------------------------------------------------------------------------
#if defined(EXTERNAL_PROPS)
MemoryManager* Mem = new MemoryManager();
#else
bool InitSdk(const uintptr_t gObjectsOffset, const uintptr_t gNamesOffset)
{
	UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(gObjectsOffset);
	FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(gNamesOffset);
	return true;
}
#endif
//---------------------------------------------------------------------------
#ifdef UE4
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
#endif
//---------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

