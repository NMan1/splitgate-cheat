#include "globals.h"
#include "utils.h"
#include "../pch.h"

namespace globals {
	uintptr_t base = NULL;

	uintptr_t gworld = NULL;

	CG::UWorld* uworld = nullptr;

	uintptr_t bone_matrix;

	bool init() {
		base = (uintptr_t)GetModuleHandleW(nullptr);
		if (!base)
			return false;

		utils::log("base: %p", base);

		gworld = utils::rva((uintptr_t)utils::pattern_scan((void*)base, "48 8B 1D ? ? ? ? 48 85 DB 74 3B"), 7);
		if (!gworld)
			return false;

		utils::log("gworld: %p (%p)", gworld, gworld - base);

		uworld = (CG::UWorld*)(*(uintptr_t*)(gworld));
		if (!uworld)
			return false;

		uintptr_t gobjects = utils::rva((uintptr_t)utils::pattern_scan((void*)base, "48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 1C D1 EB 03 49 8B DD"), 7);
		uintptr_t gnames = utils::rva((uintptr_t)utils::pattern_scan((void*)base, "48 8D 05 ? ? ? ? EB 13 48 8D"), 7);
		if (!gobjects || !gnames)
			return false;

		utils::log("gobjects: %p (%p)", gobjects, gobjects - base);
		utils::log("gnames: %p (%p)", gnames, gnames - base);

		CG::InitSdk(gobjects, gnames);

		bone_matrix = utils::rva((uintptr_t)utils::pattern_scan((void*)base, "E8 ? ? ? ? 48 8B 47 30 F3 0F 10 45 ?"), 5);
		if (!bone_matrix)
			return false;
		
		return true;
	}

	CG::FVector get_bone_location(CG::USkinnedMeshComponent* mesh, int index) {
		if (!mesh || !bone_matrix)
			return { 0.f, 0.f, 0.f };

		CG::FMatrix matrix{};
		get_bone_matrix_t get_bone_matrix = (get_bone_matrix_t)(bone_matrix);
		get_bone_matrix(mesh, &matrix, index);
		return matrix.WPlane;
	}
}