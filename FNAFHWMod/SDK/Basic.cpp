
#include "../SDK.h"
#include <Windows.h>

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{

TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;

//---------------------------------------------------------------------------
void InitSdk(const std::string& moduleName, const size_t gObjectsOffset, const size_t gNamesOffset)
{
	auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(moduleName.c_str()));

	UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(mBaseAddress + gObjectsOffset - 0x10);
	FName::GNames = reinterpret_cast<SDK::TNameEntryArray*>(mBaseAddress + gNamesOffset);
}
void InitSdk()
{
	InitSdk("freddys-Win64-Shipping.exe", 0x320BB70, 0x30C9A78);
}
//---------------------------------------------------------------------------
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
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
