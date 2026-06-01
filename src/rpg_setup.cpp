/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/config.h"
#include "lcf/rpg/actor.h"
#include "lcf/rpg/event.h"
#include "lcf/rpg/map.h"
#include "lcf/rpg/mapinfo.h"
#include "lcf/rpg/system.h"
#include "lcf/rpg/save.h"
#include "lcf/rpg/chipset.h"
#include "lcf/rpg/parameters.h"

namespace lcf {

void rpg::Actor::Setup(bool is2k3) {
	int max_final_level = 0;
	if (is2k3) {
		max_final_level = 99;
		if (final_level == -1) {
			final_level = max_final_level;
		}
		exp_base = exp_base == -1 ? 300 : exp_base;
		exp_inflation = exp_inflation == -1 ? 300 : exp_inflation;
	}
	else {
		max_final_level = 50;
		if (final_level == -1) {
			final_level = max_final_level;
		}
		exp_base = exp_base == -1 ? 30 : exp_base;
		exp_inflation = exp_inflation == -1 ? 30 : exp_inflation;
	}
	parameters.Setup(max_final_level);
}

void rpg::Parameters::Setup(int final_level) {
	size_t level = 0;
	if (final_level > 0) level = final_level;

	if (maxhp.size() < level) {
		auto prev_array = maxhp;
		maxhp = DBArray<int16_t>(level, 1);
		std::copy(prev_array.begin(), prev_array.end(), maxhp.begin());
	}
	if (maxsp.size() < level) {
		auto prev_array = maxsp;
		maxsp = DBArray<int16_t>(level, 0);
		std::copy(prev_array.begin(), prev_array.end(), maxsp.begin());
	}
	if (attack.size() < level) {
		auto prev_array = attack;
		attack = DBArray<int16_t>(level, 1);
		std::copy(prev_array.begin(), prev_array.end(), attack.begin());
	}
	if (defense.size() < level) {
		auto prev_array = defense;
		defense = DBArray<int16_t>(level, 1);
		std::copy(prev_array.begin(), prev_array.end(), defense.begin());
	}
	if (spirit.size() < level) {
		auto prev_array = spirit;
		spirit = DBArray<int16_t>(level, 1);
		std::copy(prev_array.begin(), prev_array.end(), spirit.begin());
	}
	if (agility.size() < level) {
		auto prev_array = agility;
		agility = DBArray<int16_t>(level, 1);
		std::copy(prev_array.begin(), prev_array.end(), agility.begin());
	}
}

} // namespace lcf
