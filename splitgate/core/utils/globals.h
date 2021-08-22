#pragma once
#include <cstdint>

namespace CG {
	class UWorld;
	class FVector;
	class FMatrix;
	class USkinnedMeshComponent;
}

namespace globals {
	extern uintptr_t base;

	extern uintptr_t gworld;

	extern CG::UWorld* uworld;

	extern uintptr_t bone_matrix;

	typedef CG::FMatrix* (__thiscall* get_bone_matrix_t)(CG::USkinnedMeshComponent* mesh, CG::FMatrix* result, int index);

	bool init();

	CG::FVector get_bone_location(CG::USkinnedMeshComponent* mesh, int index);

	enum bones {
		root = 0,
		pelvis = 1,
		spine_01 = 2,
		spine_02 = 3,
		spine_03 = 4,
		clavicle_l = 5,
		upperarm_l = 6,
		lowerarm_l = 7,
		hand_l = 8,
		index_01_l = 9,
		index_02_l = 10,
		index_03_l = 11,
		middle_01_l = 12,
		middle_02_l = 13,
		middle_03_l = 14,
		pinky_01_l = 15,
		pinky_02_l = 16,
		pinky_03_l = 17,
		ring_01_l = 18,
		ring_02_l = 19,
		ring_03_l = 20,
		thumb_01_l = 21,
		thumb_02_l = 22,
		thumb_03_l = 23,
		lowerarm_twist_01_l = 24,
		upperarm_twist_01_l = 25,
		clavicle_r = 26,
		upperarm_r = 27,
		lowerarm_r = 28,
		hand_r = 29,
		index_01_r = 30,
		index_02_r = 31,
		index_03_r = 32,
		middle_01_r = 33,
		middle_02_r = 34,
		middle_03_r = 35,
		pinky_01_r = 36,
		pinky_02_r = 37,
		pinky_03_r = 38,
		ring_01_r = 39,
		ring_02_r = 40,
		ring_03_r = 41,
		thumb_01_r = 42,
		thumb_02_r = 43,
		thumb_03_r = 44,
		lowerarm_twist_01_r = 45,
		upperarm_twist_01_r = 46,
		neck_01 = 47,
		head = 48,
		thigh_l = 49,
		calf_l = 50,
		calf_twist_01_l = 51,
		foot_l = 52,
		ball_l = 53,
		thigh_twist_01_l = 54,
		thigh_r = 55,
		calf_r = 56,
		calf_twist_01_r = 57,
		foot_r = 58,
		ball_r = 59,
		thigh_twist_01_r = 60,
		ik_foot_root = 61,
		ik_foot_l = 62,
		ik_foot_r = 63,
		ik_hand_root = 64,
		ik_hand_gun = 65,
		ik_hand_l = 66,
		ik_hand_r = 67,
		vb_knee_target_l = 68,
		vb_knee_target_r = 69,
		vb_rhs_ik_hand_gun = 70,
	};
}