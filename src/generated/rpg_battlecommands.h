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

#ifndef LCF_RPG_BATTLECOMMANDS_H
#define LCF_RPG_BATTLECOMMANDS_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <vector>
#include "rpg_battlecommand.h"

/**
 * RPG::BattleCommands class.
 */
namespace RPG {
	class BattleCommands : public Base {
	public:
		enum Placement {
			Placement_manual = 0,
			Placement_automatic = 1
		};
		enum RowShown {
			RowShown_front = 0,
			RowShown_back = 1
		};
		enum BattleType {
			BattleType_traditional = 0,
			BattleType_alternative = 1,
			BattleType_gauge = 2
		};
		enum WindowSize {
			WindowSize_large = 0,
			WindowSize_small = 1
		};
		enum Transparency {
			Transparency_opaque = 0,
			Transparency_transparent = 1
		};
		enum Facing {
			Facing_retain = 0,
			Facing_up = 1,
			Facing_right = 2,
			Facing_down = 3,
			Facing_left = 4
		};

		BattleCommands() {}
		int32_t placement = 0;
		int32_t death_handler1 = 0;
		int32_t row = 0;
		int32_t battle_type = 0;
		int32_t unknown_09 = 0;
		std::vector<BattleCommand> commands;
		int32_t death_handler2 = 0;
		int32_t death_event = 0;
		int32_t window_size = 0;
		int32_t transparency = 0;
		bool teleport = false;
		int32_t teleport_id = 0;
		int32_t teleport_x = 0;
		int32_t teleport_y = 0;
		int32_t teleport_face = 0;
		const int32_t& GetPlacement() const;
		int32_t& GetPlacement();
		void SetPlacement(const int32_t& placement);

		int32_t GetDeathHandler1() const;
		void SetDeathHandler1(int32_t death_handler1);

		const int32_t& GetRow() const;
		int32_t& GetRow();
		void SetRow(const int32_t& row);

		const int32_t& GetBattleType() const;
		int32_t& GetBattleType();
		void SetBattleType(const int32_t& battle_type);

		int32_t GetUnknown09() const;
		void SetUnknown09(int32_t unknown_09);

		const std::vector<BattleCommand>& GetCommands() const;
		std::vector<BattleCommand>& GetCommands();

		int32_t GetDeathHandler2() const;
		void SetDeathHandler2(int32_t death_handler2);

		const int32_t& GetDeathEvent() const;
		int32_t& GetDeathEvent();
		void SetDeathEvent(const int32_t& death_event);

		const int32_t& GetWindowSize() const;
		int32_t& GetWindowSize();
		void SetWindowSize(const int32_t& window_size);

		const int32_t& GetTransparency() const;
		int32_t& GetTransparency();
		void SetTransparency(const int32_t& transparency);

		bool GetTeleport() const;
		void SetTeleport(bool teleport);

		const int32_t& GetTeleportId() const;
		int32_t& GetTeleportId();
		void SetTeleportId(const int32_t& teleport_id);

		int32_t GetTeleportX() const;
		void SetTeleportX(int32_t teleport_x);

		int32_t GetTeleportY() const;
		void SetTeleportY(int32_t teleport_y);

		const int32_t& GetTeleportFace() const;
		int32_t& GetTeleportFace();
		void SetTeleportFace(const int32_t& teleport_face);

	};
}

#endif
