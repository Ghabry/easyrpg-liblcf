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
#include "rpg_troopmember.h"


const int32_t& RPG::TroopMember::GetEnemyId() const {
	return getter<const int32_t&>("enemy_id");
}

int32_t& RPG::TroopMember::GetEnemyId() {
	return getter<int32_t&>("enemy_id");
}

void RPG::TroopMember::SetEnemyId(const int32_t& enemy_id) {
	setter<int32_t>("enemy_id", enemy_id);
}

int32_t RPG::TroopMember::GetX() const {
	return getter<int32_t>("x");
}

void RPG::TroopMember::SetX(int32_t x) {
	setter<int32_t>("x", x);
}

int32_t RPG::TroopMember::GetY() const {
	return getter<int32_t>("y");
}

void RPG::TroopMember::SetY(int32_t y) {
	setter<int32_t>("y", y);
}

bool RPG::TroopMember::GetInvisible() const {
	return getter<bool>("invisible");
}

void RPG::TroopMember::SetInvisible(bool invisible) {
	setter<bool>("invisible", invisible);
}

