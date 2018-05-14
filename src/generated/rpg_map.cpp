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
#include "rpg_map.h"


int32_t RPG::Map::GetChipsetId() const {
	return getter<int32_t>("chipset_id");
}

void RPG::Map::SetChipsetId(int32_t chipset_id) {
	setter<int32_t>("chipset_id", chipset_id);
}

int32_t RPG::Map::GetWidth() const {
	return getter<int32_t>("width");
}

void RPG::Map::SetWidth(int32_t width) {
	setter<int32_t>("width", width);
}

int32_t RPG::Map::GetHeight() const {
	return getter<int32_t>("height");
}

void RPG::Map::SetHeight(int32_t height) {
	setter<int32_t>("height", height);
}

const int32_t& RPG::Map::GetScrollType() const {
	return getter<const int32_t&>("scroll_type");
}

int32_t& RPG::Map::GetScrollType() {
	return getter<int32_t&>("scroll_type");
}

void RPG::Map::SetScrollType(const int32_t& scroll_type) {
	setter<int32_t>("scroll_type", scroll_type);
}

bool RPG::Map::GetParallaxFlag() const {
	return getter<bool>("parallax_flag");
}

void RPG::Map::SetParallaxFlag(bool parallax_flag) {
	setter<bool>("parallax_flag", parallax_flag);
}

const std::string& RPG::Map::GetParallaxName() const {
	return getter<const std::string&>("parallax_name");
}

std::string& RPG::Map::GetParallaxName() {
	return getter<std::string&>("parallax_name");
}

void RPG::Map::SetParallaxName(const std::string& parallax_name) {
	setter<std::string>("parallax_name", parallax_name);
}

bool RPG::Map::GetParallaxLoopX() const {
	return getter<bool>("parallax_loop_x");
}

void RPG::Map::SetParallaxLoopX(bool parallax_loop_x) {
	setter<bool>("parallax_loop_x", parallax_loop_x);
}

bool RPG::Map::GetParallaxLoopY() const {
	return getter<bool>("parallax_loop_y");
}

void RPG::Map::SetParallaxLoopY(bool parallax_loop_y) {
	setter<bool>("parallax_loop_y", parallax_loop_y);
}

bool RPG::Map::GetParallaxAutoLoopX() const {
	return getter<bool>("parallax_auto_loop_x");
}

void RPG::Map::SetParallaxAutoLoopX(bool parallax_auto_loop_x) {
	setter<bool>("parallax_auto_loop_x", parallax_auto_loop_x);
}

int32_t RPG::Map::GetParallaxSx() const {
	return getter<int32_t>("parallax_sx");
}

void RPG::Map::SetParallaxSx(int32_t parallax_sx) {
	setter<int32_t>("parallax_sx", parallax_sx);
}

bool RPG::Map::GetParallaxAutoLoopY() const {
	return getter<bool>("parallax_auto_loop_y");
}

void RPG::Map::SetParallaxAutoLoopY(bool parallax_auto_loop_y) {
	setter<bool>("parallax_auto_loop_y", parallax_auto_loop_y);
}

int32_t RPG::Map::GetParallaxSy() const {
	return getter<int32_t>("parallax_sy");
}

void RPG::Map::SetParallaxSy(int32_t parallax_sy) {
	setter<int32_t>("parallax_sy", parallax_sy);
}

bool RPG::Map::GetGeneratorFlag() const {
	return getter<bool>("generator_flag");
}

void RPG::Map::SetGeneratorFlag(bool generator_flag) {
	setter<bool>("generator_flag", generator_flag);
}

const int32_t& RPG::Map::GetGeneratorMode() const {
	return getter<const int32_t&>("generator_mode");
}

int32_t& RPG::Map::GetGeneratorMode() {
	return getter<int32_t&>("generator_mode");
}

void RPG::Map::SetGeneratorMode(const int32_t& generator_mode) {
	setter<int32_t>("generator_mode", generator_mode);
}

bool RPG::Map::GetTopLevel() const {
	return getter<bool>("top_level");
}

void RPG::Map::SetTopLevel(bool top_level) {
	setter<bool>("top_level", top_level);
}

const int32_t& RPG::Map::GetGeneratorTiles() const {
	return getter<const int32_t&>("generator_tiles");
}

int32_t& RPG::Map::GetGeneratorTiles() {
	return getter<int32_t&>("generator_tiles");
}

void RPG::Map::SetGeneratorTiles(const int32_t& generator_tiles) {
	setter<int32_t>("generator_tiles", generator_tiles);
}

int32_t RPG::Map::GetGeneratorWidth() const {
	return getter<int32_t>("generator_width");
}

void RPG::Map::SetGeneratorWidth(int32_t generator_width) {
	setter<int32_t>("generator_width", generator_width);
}

int32_t RPG::Map::GetGeneratorHeight() const {
	return getter<int32_t>("generator_height");
}

void RPG::Map::SetGeneratorHeight(int32_t generator_height) {
	setter<int32_t>("generator_height", generator_height);
}

bool RPG::Map::GetGeneratorSurround() const {
	return getter<bool>("generator_surround");
}

void RPG::Map::SetGeneratorSurround(bool generator_surround) {
	setter<bool>("generator_surround", generator_surround);
}

bool RPG::Map::GetGeneratorUpperWall() const {
	return getter<bool>("generator_upper_wall");
}

void RPG::Map::SetGeneratorUpperWall(bool generator_upper_wall) {
	setter<bool>("generator_upper_wall", generator_upper_wall);
}

bool RPG::Map::GetGeneratorFloorB() const {
	return getter<bool>("generator_floor_b");
}

void RPG::Map::SetGeneratorFloorB(bool generator_floor_b) {
	setter<bool>("generator_floor_b", generator_floor_b);
}

bool RPG::Map::GetGeneratorFloorC() const {
	return getter<bool>("generator_floor_c");
}

void RPG::Map::SetGeneratorFloorC(bool generator_floor_c) {
	setter<bool>("generator_floor_c", generator_floor_c);
}

bool RPG::Map::GetGeneratorExtraB() const {
	return getter<bool>("generator_extra_b");
}

void RPG::Map::SetGeneratorExtraB(bool generator_extra_b) {
	setter<bool>("generator_extra_b", generator_extra_b);
}

bool RPG::Map::GetGeneratorExtraC() const {
	return getter<bool>("generator_extra_c");
}

void RPG::Map::SetGeneratorExtraC(bool generator_extra_c) {
	setter<bool>("generator_extra_c", generator_extra_c);
}

const std::vector<uint32_t>& RPG::Map::GetGeneratorX() const {
	return vector_getter<const std::vector<uint32_t>&, uint32_t>("generator_x");
}

std::vector<uint32_t>& RPG::Map::GetGeneratorX() {
	return vector_getter<std::vector<uint32_t>&, uint32_t>("generator_x");
}

const std::vector<uint32_t>& RPG::Map::GetGeneratorY() const {
	return vector_getter<const std::vector<uint32_t>&, uint32_t>("generator_y");
}

std::vector<uint32_t>& RPG::Map::GetGeneratorY() {
	return vector_getter<std::vector<uint32_t>&, uint32_t>("generator_y");
}

const std::vector<int16_t>& RPG::Map::GetGeneratorTileIds() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("generator_tile_ids");
}

std::vector<int16_t>& RPG::Map::GetGeneratorTileIds() {
	return vector_getter<std::vector<int16_t>&, int16_t>("generator_tile_ids");
}

const std::vector<int16_t>& RPG::Map::GetLowerLayer() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("lower_layer");
}

std::vector<int16_t>& RPG::Map::GetLowerLayer() {
	return vector_getter<std::vector<int16_t>&, int16_t>("lower_layer");
}

const std::vector<int16_t>& RPG::Map::GetUpperLayer() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("upper_layer");
}

std::vector<int16_t>& RPG::Map::GetUpperLayer() {
	return vector_getter<std::vector<int16_t>&, int16_t>("upper_layer");
}

const std::vector<RPG::Event>& RPG::Map::GetEvents() const {
	return vector_getter<const std::vector<RPG::Event>&, RPG::Event>("events");
}

std::vector<RPG::Event>& RPG::Map::GetEvents() {
	return vector_getter<std::vector<RPG::Event>&, RPG::Event>("events");
}

int32_t RPG::Map::GetSaveCount() const {
	return getter<int32_t>("save_count");
}

void RPG::Map::SetSaveCount(int32_t save_count) {
	setter<int32_t>("save_count", save_count);
}

