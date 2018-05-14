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

#ifndef LCF_RPG_TERRAIN_H
#define LCF_RPG_TERRAIN_H

// Headers
#include <stdint.h>
#include <string>
#include "rpg_sound.h"

/**
 * RPG::Terrain class.
 */
namespace RPG {
	class Terrain {
	public:
		enum BushDepth {
			BushDepth_normal = 0,
			BushDepth_third = 1,
			BushDepth_half = 2,
			BushDepth_full = 3
		};
		enum BGAssociation {
			BGAssociation_background = 0,
			BGAssociation_frame = 1
		};

		int ID = 0;
		std::string name;
		int32_t damage = 0;
		int32_t encounter_rate = 100;
		std::string background_name;
		bool boat_pass = false;
		bool ship_pass = false;
		bool airship_pass = true;
		bool airship_land = true;
		int32_t bush_depth = 0;
		Sound footstep;
		bool on_damage_se = false;
		int32_t background_type = 0;
		std::string background_a_name;
		bool background_a_scrollh = false;
		bool background_a_scrollv = false;
		int32_t background_a_scrollh_speed = 0;
		int32_t background_a_scrollv_speed = 0;
		bool background_b = false;
		std::string background_b_name;
		bool background_b_scrollh = false;
		bool background_b_scrollv = false;
		int32_t background_b_scrollh_speed = 0;
		int32_t background_b_scrollv_speed = 0;
		struct Flags {
			bool back_party = false;
			bool back_enemies = false;
			bool lateral_party = false;
			bool lateral_enemies = false;
		} special_flags;
		int32_t special_back_party = 15;
		int32_t special_back_enemies = 10;
		int32_t special_lateral_party = 10;
		int32_t special_lateral_enemies = 5;
		int32_t grid_location = 0;
		int32_t grid_a = 0;
		int32_t grid_b = 0;
		int32_t grid_c = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int32_t GetDamage() const;
		void SetDamage(int32_t damage);

		int32_t GetEncounterRate() const;
		void SetEncounterRate(int32_t encounter_rate);

		const std::string& GetBackgroundName() const;
		std::string& GetBackgroundName();
		void SetBackgroundName(const std::string& background_name);

		bool GetBoatPass() const;
		void SetBoatPass(bool boat_pass);

		bool GetShipPass() const;
		void SetShipPass(bool ship_pass);

		bool GetAirshipPass() const;
		void SetAirshipPass(bool airship_pass);

		bool GetAirshipLand() const;
		void SetAirshipLand(bool airship_land);

		const int32_t& GetBushDepth() const;
		int32_t& GetBushDepth();
		void SetBushDepth(const int32_t& bush_depth);

		const Sound& GetFootstep() const;
		Sound& GetFootstep();
		void SetFootstep(const Sound& footstep);

		bool GetOnDamageSe() const;
		void SetOnDamageSe(bool on_damage_se);

		const int32_t& GetBackgroundType() const;
		int32_t& GetBackgroundType();
		void SetBackgroundType(const int32_t& background_type);

		const std::string& GetBackgroundAName() const;
		std::string& GetBackgroundAName();
		void SetBackgroundAName(const std::string& background_a_name);

		bool GetBackgroundAScrollh() const;
		void SetBackgroundAScrollh(bool background_a_scrollh);

		bool GetBackgroundAScrollv() const;
		void SetBackgroundAScrollv(bool background_a_scrollv);

		int32_t GetBackgroundAScrollhSpeed() const;
		void SetBackgroundAScrollhSpeed(int32_t background_a_scrollh_speed);

		int32_t GetBackgroundAScrollvSpeed() const;
		void SetBackgroundAScrollvSpeed(int32_t background_a_scrollv_speed);

		bool GetBackgroundB() const;
		void SetBackgroundB(bool background_b);

		const std::string& GetBackgroundBName() const;
		std::string& GetBackgroundBName();
		void SetBackgroundBName(const std::string& background_b_name);

		bool GetBackgroundBScrollh() const;
		void SetBackgroundBScrollh(bool background_b_scrollh);

		bool GetBackgroundBScrollv() const;
		void SetBackgroundBScrollv(bool background_b_scrollv);

		int32_t GetBackgroundBScrollhSpeed() const;
		void SetBackgroundBScrollhSpeed(int32_t background_b_scrollh_speed);

		int32_t GetBackgroundBScrollvSpeed() const;
		void SetBackgroundBScrollvSpeed(int32_t background_b_scrollv_speed);

		const Flags& GetSpecialFlags() const;
		Flags& GetSpecialFlags();
		void SetSpecialFlags(const Flags& special_flags);

		int32_t GetSpecialBackParty() const;
		void SetSpecialBackParty(int32_t special_back_party);

		int32_t GetSpecialBackEnemies() const;
		void SetSpecialBackEnemies(int32_t special_back_enemies);

		int32_t GetSpecialLateralParty() const;
		void SetSpecialLateralParty(int32_t special_lateral_party);

		int32_t GetSpecialLateralEnemies() const;
		void SetSpecialLateralEnemies(int32_t special_lateral_enemies);

		int32_t GetGridLocation() const;
		void SetGridLocation(int32_t grid_location);

		int32_t GetGridA() const;
		void SetGridA(int32_t grid_a);

		int32_t GetGridB() const;
		void SetGridB(int32_t grid_b);

		int32_t GetGridC() const;
		void SetGridC(int32_t grid_c);

	};
}

#endif
