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
#include "rpg_savemapinfo.h"


int32_t RPG::SaveMapInfo::GetPositionX() const {
	return getter<int32_t>("position_x");
}

void RPG::SaveMapInfo::SetPositionX(int32_t position_x) {
	setter<int32_t>("position_x", position_x);
}

int32_t RPG::SaveMapInfo::GetPositionY() const {
	return getter<int32_t>("position_y");
}

void RPG::SaveMapInfo::SetPositionY(int32_t position_y) {
	setter<int32_t>("position_y", position_y);
}

int32_t RPG::SaveMapInfo::GetEncounterRate() const {
	return getter<int32_t>("encounter_rate");
}

void RPG::SaveMapInfo::SetEncounterRate(int32_t encounter_rate) {
	setter<int32_t>("encounter_rate", encounter_rate);
}

int32_t RPG::SaveMapInfo::GetChipsetId() const {
	return getter<int32_t>("chipset_id");
}

void RPG::SaveMapInfo::SetChipsetId(int32_t chipset_id) {
	setter<int32_t>("chipset_id", chipset_id);
}

const std::vector<RPG::SaveMapEvent>& RPG::SaveMapInfo::GetEvents() const {
	return vector_getter<const std::vector<RPG::SaveMapEvent>&, RPG::SaveMapEvent>("events");
}

std::vector<RPG::SaveMapEvent>& RPG::SaveMapInfo::GetEvents() {
	return vector_getter<std::vector<RPG::SaveMapEvent>&, RPG::SaveMapEvent>("events");
}

const std::vector<uint8_t>& RPG::SaveMapInfo::GetLowerTiles() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("lower_tiles");
}

std::vector<uint8_t>& RPG::SaveMapInfo::GetLowerTiles() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("lower_tiles");
}

const std::vector<uint8_t>& RPG::SaveMapInfo::GetUpperTiles() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("upper_tiles");
}

std::vector<uint8_t>& RPG::SaveMapInfo::GetUpperTiles() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("upper_tiles");
}

const std::string& RPG::SaveMapInfo::GetParallaxName() const {
	return getter<const std::string&>("parallax_name");
}

std::string& RPG::SaveMapInfo::GetParallaxName() {
	return getter<std::string&>("parallax_name");
}

void RPG::SaveMapInfo::SetParallaxName(const std::string& parallax_name) {
	setter<std::string>("parallax_name", parallax_name);
}

bool RPG::SaveMapInfo::GetParallaxHorz() const {
	return getter<bool>("parallax_horz");
}

void RPG::SaveMapInfo::SetParallaxHorz(bool parallax_horz) {
	setter<bool>("parallax_horz", parallax_horz);
}

bool RPG::SaveMapInfo::GetParallaxVert() const {
	return getter<bool>("parallax_vert");
}

void RPG::SaveMapInfo::SetParallaxVert(bool parallax_vert) {
	setter<bool>("parallax_vert", parallax_vert);
}

bool RPG::SaveMapInfo::GetParallaxHorzAuto() const {
	return getter<bool>("parallax_horz_auto");
}

void RPG::SaveMapInfo::SetParallaxHorzAuto(bool parallax_horz_auto) {
	setter<bool>("parallax_horz_auto", parallax_horz_auto);
}

int32_t RPG::SaveMapInfo::GetParallaxHorzSpeed() const {
	return getter<int32_t>("parallax_horz_speed");
}

void RPG::SaveMapInfo::SetParallaxHorzSpeed(int32_t parallax_horz_speed) {
	setter<int32_t>("parallax_horz_speed", parallax_horz_speed);
}

bool RPG::SaveMapInfo::GetParallaxVertAuto() const {
	return getter<bool>("parallax_vert_auto");
}

void RPG::SaveMapInfo::SetParallaxVertAuto(bool parallax_vert_auto) {
	setter<bool>("parallax_vert_auto", parallax_vert_auto);
}

int32_t RPG::SaveMapInfo::GetParallaxVertSpeed() const {
	return getter<int32_t>("parallax_vert_speed");
}

void RPG::SaveMapInfo::SetParallaxVertSpeed(int32_t parallax_vert_speed) {
	setter<int32_t>("parallax_vert_speed", parallax_vert_speed);
}

