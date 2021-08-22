#include "features.h"
#include "../utils/globals.h"
#include "../pch.h"
#include "../utils/utils.h"
#include "../renderer/renderer.h"

namespace features {
	void esp() {
		if (!globals::uworld)
			return;

		if (!globals::uworld->OwningGameInstance || !globals::uworld->PersistentLevel)
			return;

		auto local_player = globals::uworld->OwningGameInstance->LocalPlayers[0];
		if (!local_player)
			return;

		auto local_player_controller = (CG::APortalWarsBasePlayerController*)local_player->PlayerController;
		if (!local_player_controller || !local_player_controller->IsA(CG::APlayerController::StaticClass()))	
			return;

		auto ack_pawn = (CG::APortalWarsCharacter*)local_player_controller->AcknowledgedPawn;
		if (!ack_pawn || !ack_pawn->IsA(CG::ACharacter::StaticClass()))
			return;

		auto local_player_state = (CG::APortalWarsPlayerState*)ack_pawn->PlayerState;
		if (!local_player_state || !local_player_state->IsA(CG::APlayerState::StaticClass()))
			return;

		auto array_pointer = *(CG::TArray<CG::AActor*>*)((uintptr_t)globals::uworld->PersistentLevel + 0x98);
		for (int i = 0; i < array_pointer.Num(); i++) {
			auto actor = array_pointer[i];
			if (!actor)
				continue;

			if (actor->IsA(CG::APortalWarsCharacter::StaticClass())) {
				auto character = (CG::APortalWarsCharacter*)actor;
				if (!character->IsAlive() || character->IsDead())
					continue;

				auto player_state = (CG::APortalWarsPlayerState*)character->PlayerState;
				if (!player_state)
					continue;

				if (player_state->TeamNum == local_player_state->TeamNum)
					continue;

				//character->EnemyStencilValue = 1;
				//character->AlphaTeamStencilValue = 1;
				//character->BravoTeamStencilValue = 1;
				//character->BlueOutlineColor = { 138, 43, 226, 255 };
				//character->RedOutlineColor = { 138, 43, 226, 255 };
				//character->ColorIntensity3P = 2;
				//character->ColorIntensity1P = 2;

				auto head_pos = globals::get_bone_location(character->Mesh, globals::bones::head);
				CG::FVector2D head_2d{};
				if (!local_player_controller->ProjectWorldLocationToScreen(head_pos, &head_2d, false))
					continue;

				auto root_pos = globals::get_bone_location(character->Mesh, globals::bones::root);
				CG::FVector2D root_2d{};
				if (!local_player_controller->ProjectWorldLocationToScreen(root_pos, &root_2d, false))
					continue;
				
				auto local_root_pos = globals::get_bone_location(ack_pawn->Mesh, globals::bones::root);
				CG::FVector2D local_root_2d{};
				if (!local_player_controller->ProjectWorldLocationToScreen(local_root_pos, &local_root_2d, false))
					continue;

				// can use getbounds for bounding box if u care enough

				float x = head_2d.X;
				float y = head_2d.Y;
				float h = root_2d.Y - y - 2;
				float w = h / 1.5;

				render::draw_corner_box(x - (w / 2), y, w, h, 2, { 138, 43, 226, 255 });
				render::draw_circle(head_2d.X, head_2d.Y, 5, { 138, 43, 226, 150 });
				render::draw_line(local_root_2d.X, local_root_2d.Y, root_2d.X, root_2d.Y, 2, { 138, 43, 226, 255 });
			}
		}
	}
}