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
#include "rpg_chipset.h"
/**
 * Constructor.
 */
RPG::Chipset::Chipset() {
	Init();
}


const std::string& RPG::Chipset::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Chipset::GetName() {
	return getter<std::string&>("name");
}

void RPG::Chipset::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::Chipset::GetChipsetName() const {
	return getter<const std::string&>("chipset_name");
}

std::string& RPG::Chipset::GetChipsetName() {
	return getter<std::string&>("chipset_name");
}

void RPG::Chipset::SetChipsetName(const std::string& chipset_name) {
	setter<std::string>("chipset_name", chipset_name);
}

const std::vector<int16_t>& RPG::Chipset::GetTerrainData() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("terrain_data");
}

std::vector<int16_t>& RPG::Chipset::GetTerrainData() {
	return vector_getter<std::vector<int16_t>&, int16_t>("terrain_data");
}

const std::vector<uint8_t>& RPG::Chipset::GetPassableDataLower() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("passable_data_lower");
}

std::vector<uint8_t>& RPG::Chipset::GetPassableDataLower() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("passable_data_lower");
}

const std::vector<uint8_t>& RPG::Chipset::GetPassableDataUpper() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("passable_data_upper");
}

std::vector<uint8_t>& RPG::Chipset::GetPassableDataUpper() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("passable_data_upper");
}

const int32_t& RPG::Chipset::GetAnimationType() const {
	return getter<const int32_t&>("animation_type");
}

int32_t& RPG::Chipset::GetAnimationType() {
	return getter<int32_t&>("animation_type");
}

void RPG::Chipset::SetAnimationType(const int32_t& animation_type) {
	setter<int32_t>("animation_type", animation_type);
}

int32_t RPG::Chipset::GetAnimationSpeed() const {
	return getter<int32_t>("animation_speed");
}

void RPG::Chipset::SetAnimationSpeed(int32_t animation_speed) {
	setter<int32_t>("animation_speed", animation_speed);
}

