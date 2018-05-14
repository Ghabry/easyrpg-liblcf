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

// Headers
#include "rpg_savetarget.h"


int32_t RPG::SaveTarget::GetMapId() const {
	return getter<int32_t>("map_id");
}

void RPG::SaveTarget::SetMapId(int32_t map_id) {
	setter<int32_t>("map_id", map_id);
}

int32_t RPG::SaveTarget::GetMapX() const {
	return getter<int32_t>("map_x");
}

void RPG::SaveTarget::SetMapX(int32_t map_x) {
	setter<int32_t>("map_x", map_x);
}

int32_t RPG::SaveTarget::GetMapY() const {
	return getter<int32_t>("map_y");
}

void RPG::SaveTarget::SetMapY(int32_t map_y) {
	setter<int32_t>("map_y", map_y);
}

bool RPG::SaveTarget::GetSwitchOn() const {
	return getter<bool>("switch_on");
}

void RPG::SaveTarget::SetSwitchOn(bool switch_on) {
	setter<bool>("switch_on", switch_on);
}

const int32_t& RPG::SaveTarget::GetSwitchId() const {
	return getter<const int32_t&>("switch_id");
}

int32_t& RPG::SaveTarget::GetSwitchId() {
	return getter<int32_t&>("switch_id");
}

void RPG::SaveTarget::SetSwitchId(const int32_t& switch_id) {
	setter<int32_t>("switch_id", switch_id);
}

