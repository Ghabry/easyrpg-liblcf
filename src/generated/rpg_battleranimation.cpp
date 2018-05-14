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


const std::string& RPG::BattlerAnimation::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::BattlerAnimation::GetName() {
	return getter<std::string&>("name");
}

void RPG::BattlerAnimation::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const int32_t& RPG::BattlerAnimation::GetSpeed() const {
	return getter<const int32_t&>("speed");
}

int32_t& RPG::BattlerAnimation::GetSpeed() {
	return getter<int32_t&>("speed");
}

void RPG::BattlerAnimation::SetSpeed(const int32_t& speed) {
	setter<int32_t>("speed", speed);
}

const std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetBaseData() const {
	return vector_getter<const std::vector<RPG::BattlerAnimationExtension>&, RPG::BattlerAnimationExtension>("base_data");
}

std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetBaseData() {
	return vector_getter<std::vector<RPG::BattlerAnimationExtension>&, RPG::BattlerAnimationExtension>("base_data");
}

const std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetWeaponData() const {
	return vector_getter<const std::vector<RPG::BattlerAnimationExtension>&, RPG::BattlerAnimationExtension>("weapon_data");
}

std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetWeaponData() {
	return vector_getter<std::vector<RPG::BattlerAnimationExtension>&, RPG::BattlerAnimationExtension>("weapon_data");
}

