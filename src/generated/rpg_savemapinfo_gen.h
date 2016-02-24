/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEMAPINFO_GEN_H
#define LCF_RPG_SAVEMAPINFO_GEN_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_savemapevent.h"

/**
 * RPG::SaveMapInfo class.
 */
namespace RPG {
	class SaveMapInfo_Gen {
	public:
		int position_x = 0;
		int position_y = 0;
		int encounter_rate = -1;
		int chipset_id = 0;
		std::vector<SaveMapEvent> events;
		std::vector<uint8_t> lower_tiles;
		std::vector<uint8_t> upper_tiles;
		std::string parallax_name;
		bool parallax_horz = false;
		bool parallax_vert = false;
		bool parallax_horz_auto = false;
		int parallax_horz_speed = 0;
		bool parallax_vert_auto = false;
		int parallax_vert_speed = 0;
	};
}

#endif
