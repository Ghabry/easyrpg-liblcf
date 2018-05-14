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

#ifndef LCF_RPG_SAVEMAPINFO_H
#define LCF_RPG_SAVEMAPINFO_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_map.h"
#include "rpg_mapinfo.h"
#include "rpg_savemapevent.h"

/**
 * RPG::SaveMapInfo class.
 */
namespace RPG {
	class SaveMapInfo : public Base {
	public:
		SaveMapInfo() {}
		void Setup();
		void Setup(const RPG::Map& map);
		void Setup(const RPG::MapInfo& map_info);
		void Fixup(const RPG::Map& map);
		int32_t position_x = 0;
		int32_t position_y = 0;
		int32_t encounter_rate = -1;
		int32_t chipset_id = 0;
		std::vector<SaveMapEvent> events;
		std::vector<uint8_t> lower_tiles;
		std::vector<uint8_t> upper_tiles;
		std::string parallax_name;
		bool parallax_horz = false;
		bool parallax_vert = false;
		bool parallax_horz_auto = false;
		int32_t parallax_horz_speed = 0;
		bool parallax_vert_auto = false;
		int32_t parallax_vert_speed = 0;
		int32_t GetPositionX() const;
		void SetPositionX(int32_t position_x);

		int32_t GetPositionY() const;
		void SetPositionY(int32_t position_y);

		int32_t GetEncounterRate() const;
		void SetEncounterRate(int32_t encounter_rate);

		int32_t GetChipsetId() const;
		void SetChipsetId(int32_t chipset_id);

		const std::vector<SaveMapEvent>& GetEvents() const;
		std::vector<SaveMapEvent>& GetEvents();

		const std::vector<uint8_t>& GetLowerTiles() const;
		std::vector<uint8_t>& GetLowerTiles();

		const std::vector<uint8_t>& GetUpperTiles() const;
		std::vector<uint8_t>& GetUpperTiles();

		const std::string& GetParallaxName() const;
		std::string& GetParallaxName();
		void SetParallaxName(const std::string& parallax_name);

		bool GetParallaxHorz() const;
		void SetParallaxHorz(bool parallax_horz);

		bool GetParallaxVert() const;
		void SetParallaxVert(bool parallax_vert);

		bool GetParallaxHorzAuto() const;
		void SetParallaxHorzAuto(bool parallax_horz_auto);

		int32_t GetParallaxHorzSpeed() const;
		void SetParallaxHorzSpeed(int32_t parallax_horz_speed);

		bool GetParallaxVertAuto() const;
		void SetParallaxVertAuto(bool parallax_vert_auto);

		int32_t GetParallaxVertSpeed() const;
		void SetParallaxVertSpeed(int32_t parallax_vert_speed);

	};
}

#endif
