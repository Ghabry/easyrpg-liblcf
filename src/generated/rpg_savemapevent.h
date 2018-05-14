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

#ifndef LCF_RPG_SAVEMAPEVENT_H
#define LCF_RPG_SAVEMAPEVENT_H

// Headers
#include <stdint.h>
#include <string>
#include "rpg_event.h"
#include "rpg_moveroute.h"
#include "rpg_saveeventdata.h"

/**
 * RPG::SaveMapEvent class.
 */
namespace RPG {
	class SaveMapEvent {
	public:
		void Setup(const RPG::Event& event);
		void Fixup(const RPG::EventPage& page);
		int ID = 0;
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
		int32_t move_speed = -1;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int32_t move_route_index = 0;
		bool move_route_repeated = false;
		int32_t unknown_2f_overlap = -1;
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
		int32_t sprite_id = -1;
		int32_t unknown_4b_sprite_move = -1;
		int32_t flash_red = 100;
		int32_t flash_green = 100;
		int32_t flash_blue = 100;
		double flash_current_level = 0.0;
		int32_t flash_time_left = 0;
		bool running = false;
		int32_t original_move_route_index = 0;
		bool pending = false;
		SaveEventData event_data;
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

		bool GetRunning() const;
		void SetRunning(bool running);

		int32_t GetOriginalMoveRouteIndex() const;
		void SetOriginalMoveRouteIndex(int32_t original_move_route_index);

		bool GetPending() const;
		void SetPending(bool pending);

		const SaveEventData& GetEventData() const;
		SaveEventData& GetEventData();
		void SetEventData(const SaveEventData& event_data);

	};
}

#endif
