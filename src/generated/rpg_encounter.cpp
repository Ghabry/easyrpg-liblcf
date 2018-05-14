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
#include "rpg_encounter.h"


const int32_t& RPG::Encounter::GetTroopId() const {
	return getter<const int32_t&>("troop_id");
}

int32_t& RPG::Encounter::GetTroopId() {
	return getter<int32_t&>("troop_id");
}

void RPG::Encounter::SetTroopId(const int32_t& troop_id) {
	setter<int32_t>("troop_id", troop_id);
}

