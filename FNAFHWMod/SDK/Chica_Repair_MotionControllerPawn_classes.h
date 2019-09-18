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

// BlueprintGeneratedClass Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C
// 0x0023 (0x0E78 - 0x0E55)
class AChica_Repair_MotionControllerPawn_C : public ASaul_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E55(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E58(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight2;                                               // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PlayerVisionCone;                                         // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFNAFVisionDetector_C*                       FNAFVisionDetector;                                       // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C");
		return ptr;
	}


	void IsValidActorForVisionTest(class AActor* Actor, bool* IsValid);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature(class AActor* Actor);
	void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature(class AActor* Actor);
	void ExecuteUbergraph_Chica_Repair_MotionControllerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif