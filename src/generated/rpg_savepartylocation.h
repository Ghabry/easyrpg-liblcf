/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEPARTYLOCATION_H
#define LCF_RPG_SAVEPARTYLOCATION_H

// Headers
#include <stdint.h>
#include <string>
#include "rpg_moveroute.h"

/**
 * RPG::SavePartyLocation class.
 */
namespace RPG {
	class SavePartyLocation {
	public:
		enum VehicleType {
			VehicleType_none = 0,
			VehicleType_skiff = 1,
			VehicleType_ship = 2,
			VehicleType_airship = 3
		};

		bool active = true;
		int32_t map_id = -1;
		int32_t position_x = -1;
		int32_t position_y = -1;
		int32_t direction = 2;
		int32_t sprite_direction = 2;
		int32_t anim_frame = 1;
		int32_t transparency = 0;
		int32_t remaining_step = 0;
		int32_t move_frequency = 2;
		int32_t layer = 1;
		bool overlap_forbidden = false;
		int32_t animation_type = 1;
		bool lock_facing = false;
		int32_t move_speed = 4;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int32_t move_route_index = 0;
		bool move_route_repeated = false;
		bool sprite_transparent = false;
		int32_t unknown_2f_overlap = 0;
		int32_t anim_paused = 0;
		bool through = false;
		int32_t stop_count = 0;
		int32_t anim_count = 0;
		int32_t max_stop_count = 0;
		bool jumping = false;
		int32_t begin_jump_x = 0;
		int32_t begin_jump_y = 0;
		int32_t unknown_47_pause = 0;
		bool flying = false;
		std::string sprite_name;
		int32_t sprite_id = 0;
		int32_t unknown_4b_sprite_move = 0;
		int32_t flash_red = 100;
		int32_t flash_green = 100;
		int32_t flash_blue = 100;
		double flash_current_level = 0.0;
		int32_t flash_time_left = 0;
		bool boarding = false;
		bool aboard = false;
		int32_t vehicle = 0;
		bool unboarding = false;
		int32_t preboard_move_speed = 4;
		int32_t unknown_6c_menu_calling = 0;
		int32_t pan_state = 1;
		int32_t pan_current_x = 2304;
		int32_t pan_current_y = 1792;
		int32_t pan_finish_x = 2304;
		int32_t pan_finish_y = 1792;
		int32_t pan_speed = 16;
		int32_t encounter_steps = 0;
		bool unknown_7d_encounter_calling = false;
		int32_t map_save_count = 0;
		int32_t database_save_count = 0;
		bool GetActive() const;
		void SetActive(bool active);

		int32_t GetMapId() const;
		void SetMapId(int32_t map_id);

		int32_t GetPositionX() const;
		void SetPositionX(int32_t position_x);

		int32_t GetPositionY() const;
		void SetPositionY(int32_t position_y);

		int32_t GetDirection() const;
		void SetDirection(int32_t direction);

		int32_t GetSpriteDirection() const;
		void SetSpriteDirection(int32_t sprite_direction);

		int32_t GetAnimFrame() const;
		void SetAnimFrame(int32_t anim_frame);

		int32_t GetTransparency() const;
		void SetTransparency(int32_t transparency);

		int32_t GetRemainingStep() const;
		void SetRemainingStep(int32_t remaining_step);

		int32_t GetMoveFrequency() const;
		void SetMoveFrequency(int32_t move_frequency);

		int32_t GetLayer() const;
		void SetLayer(int32_t layer);

		bool GetOverlapForbidden() const;
		void SetOverlapForbidden(bool overlap_forbidden);

		const int32_t& GetAnimationType() const;
		int32_t& GetAnimationType();
		void SetAnimationType(const int32_t& animation_type);

		bool GetLockFacing() const;
		void SetLockFacing(bool lock_facing);

		int32_t GetMoveSpeed() const;
		void SetMoveSpeed(int32_t move_speed);

		const MoveRoute& GetMoveRoute() const;
		MoveRoute& GetMoveRoute();
		void SetMoveRoute(const MoveRoute& move_route);

		bool GetMoveRouteOverwrite() const;
		void SetMoveRouteOverwrite(bool move_route_overwrite);

		int32_t GetMoveRouteIndex() const;
		void SetMoveRouteIndex(int32_t move_route_index);

		bool GetMoveRouteRepeated() const;
		void SetMoveRouteRepeated(bool move_route_repeated);

		bool GetSpriteTransparent() const;
		void SetSpriteTransparent(bool sprite_transparent);

		int32_t GetUnknown2fOverlap() const;
		void SetUnknown2fOverlap(int32_t unknown_2f_overlap);

		int32_t GetAnimPaused() const;
		void SetAnimPaused(int32_t anim_paused);

		bool GetThrough() const;
		void SetThrough(bool through);

		int32_t GetStopCount() const;
		void SetStopCount(int32_t stop_count);

		int32_t GetAnimCount() const;
		void SetAnimCount(int32_t anim_count);

		int32_t GetMaxStopCount() const;
		void SetMaxStopCount(int32_t max_stop_count);

		bool GetJumping() const;
		void SetJumping(bool jumping);

		int32_t GetBeginJumpX() const;
		void SetBeginJumpX(int32_t begin_jump_x);

		int32_t GetBeginJumpY() const;
		void SetBeginJumpY(int32_t begin_jump_y);

		int32_t GetUnknown47Pause() const;
		void SetUnknown47Pause(int32_t unknown_47_pause);

		bool GetFlying() const;
		void SetFlying(bool flying);

		const std::string& GetSpriteName() const;
		std::string& GetSpriteName();
		void SetSpriteName(const std::string& sprite_name);

		int32_t GetSpriteId() const;
		void SetSpriteId(int32_t sprite_id);

		int32_t GetUnknown4bSpriteMove() const;
		void SetUnknown4bSpriteMove(int32_t unknown_4b_sprite_move);

		int32_t GetFlashRed() const;
		void SetFlashRed(int32_t flash_red);

		int32_t GetFlashGreen() const;
		void SetFlashGreen(int32_t flash_green);

		int32_t GetFlashBlue() const;
		void SetFlashBlue(int32_t flash_blue);

		double GetFlashCurrentLevel() const;
		void SetFlashCurrentLevel(double flash_current_level);

		int32_t GetFlashTimeLeft() const;
		void SetFlashTimeLeft(int32_t flash_time_left);

		bool GetBoarding() const;
		void SetBoarding(bool boarding);

		bool GetAboard() const;
		void SetAboard(bool aboard);

		const int32_t& GetVehicle() const;
		int32_t& GetVehicle();
		void SetVehicle(const int32_t& vehicle);

		bool GetUnboarding() const;
		void SetUnboarding(bool unboarding);

		int32_t GetPreboardMoveSpeed() const;
		void SetPreboardMoveSpeed(int32_t preboard_move_speed);

		int32_t GetUnknown6cMenuCalling() const;
		void SetUnknown6cMenuCalling(int32_t unknown_6c_menu_calling);

		int32_t GetPanState() const;
		void SetPanState(int32_t pan_state);

		int32_t GetPanCurrentX() const;
		void SetPanCurrentX(int32_t pan_current_x);

		int32_t GetPanCurrentY() const;
		void SetPanCurrentY(int32_t pan_current_y);

		int32_t GetPanFinishX() const;
		void SetPanFinishX(int32_t pan_finish_x);

		int32_t GetPanFinishY() const;
		void SetPanFinishY(int32_t pan_finish_y);

		int32_t GetPanSpeed() const;
		void SetPanSpeed(int32_t pan_speed);

		int32_t GetEncounterSteps() const;
		void SetEncounterSteps(int32_t encounter_steps);

		bool GetUnknown7dEncounterCalling() const;
		void SetUnknown7dEncounterCalling(bool unknown_7d_encounter_calling);

		int32_t GetMapSaveCount() const;
		void SetMapSaveCount(int32_t map_save_count);

		int32_t GetDatabaseSaveCount() const;
		void SetDatabaseSaveCount(int32_t database_save_count);

	};
}

#endif
