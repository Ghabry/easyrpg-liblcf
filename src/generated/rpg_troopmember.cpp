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


const int32_t& RPG::TroopMember::GetEnemyId() const  {
	return enemy_id;
}

int32_t& RPG::TroopMember::GetEnemyId() {
	return enemy_id;
}

void RPG::TroopMember::SetEnemyId(const int32_t& enemy_id) {
	this->enemy_id = enemy_id;
}

int32_t RPG::TroopMember::GetX() const {
	return x;
}

void RPG::TroopMember::SetX(int32_t x) {
	this->x = x;
}

int32_t RPG::TroopMember::GetY() const {
	return y;
}

void RPG::TroopMember::SetY(int32_t y) {
	this->y = y;
}

bool RPG::TroopMember::GetInvisible() const {
	return invisible;
}

void RPG::TroopMember::SetInvisible(bool invisible) {
	this->invisible = invisible;
}

