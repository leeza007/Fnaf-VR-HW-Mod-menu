#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prize_ToyChica.Prize_ToyChica_C
// 0x0010 (0x03E8 - 0x03D8)
class APrize_ToyChica_C : public APrize_Parent_C
{
public:
	class USphereComponent*                            Sphere;                                                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ToyChica;                                                 // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prize_ToyChica.Prize_ToyChica_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
