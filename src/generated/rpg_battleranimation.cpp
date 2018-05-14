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
#include "rpg_battleranimation.h"


const std::string& RPG::BattlerAnimation::GetName() const  {
	return name;
}

std::string& RPG::BattlerAnimation::GetName() {
	return name;
}

void RPG::BattlerAnimation::SetName(const std::string& name) {
	this->name = name;
}

const int32_t& RPG::BattlerAnimation::GetSpeed() const  {
	return speed;
}

int32_t& RPG::BattlerAnimation::GetSpeed() {
	return speed;
}

void RPG::BattlerAnimation::SetSpeed(const int32_t& speed) {
	this->speed = speed;
}

const std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetBaseData() const  {
	return base_data;
}

std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetBaseData() {
	return base_data;
}

const std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetWeaponData() const  {
	return weapon_data;
}

std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetWeaponData() {
	return weapon_data;
}

