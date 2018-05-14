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
	return chipset_id;
}

void RPG::Map::SetChipsetId(int32_t chipset_id) {
	this->chipset_id = chipset_id;
}

int32_t RPG::Map::GetWidth() const {
	return width;
}

void RPG::Map::SetWidth(int32_t width) {
	this->width = width;
}

int32_t RPG::Map::GetHeight() const {
	return height;
}

void RPG::Map::SetHeight(int32_t height) {
	this->height = height;
}

const int32_t& RPG::Map::GetScrollType() const  {
	return scroll_type;
}

int32_t& RPG::Map::GetScrollType() {
	return scroll_type;
}

void RPG::Map::SetScrollType(const int32_t& scroll_type) {
	this->scroll_type = scroll_type;
}

bool RPG::Map::GetParallaxFlag() const {
	return parallax_flag;
}

void RPG::Map::SetParallaxFlag(bool parallax_flag) {
	this->parallax_flag = parallax_flag;
}

const std::string& RPG::Map::GetParallaxName() const  {
	return parallax_name;
}

std::string& RPG::Map::GetParallaxName() {
	return parallax_name;
}

void RPG::Map::SetParallaxName(const std::string& parallax_name) {
	this->parallax_name = parallax_name;
}

bool RPG::Map::GetParallaxLoopX() const {
	return parallax_loop_x;
}

void RPG::Map::SetParallaxLoopX(bool parallax_loop_x) {
	this->parallax_loop_x = parallax_loop_x;
}

bool RPG::Map::GetParallaxLoopY() const {
	return parallax_loop_y;
}

void RPG::Map::SetParallaxLoopY(bool parallax_loop_y) {
	this->parallax_loop_y = parallax_loop_y;
}

bool RPG::Map::GetParallaxAutoLoopX() const {
	return parallax_auto_loop_x;
}

void RPG::Map::SetParallaxAutoLoopX(bool parallax_auto_loop_x) {
	this->parallax_auto_loop_x = parallax_auto_loop_x;
}

int32_t RPG::Map::GetParallaxSx() const {
	return parallax_sx;
}

void RPG::Map::SetParallaxSx(int32_t parallax_sx) {
	this->parallax_sx = parallax_sx;
}

bool RPG::Map::GetParallaxAutoLoopY() const {
	return parallax_auto_loop_y;
}

void RPG::Map::SetParallaxAutoLoopY(bool parallax_auto_loop_y) {
	this->parallax_auto_loop_y = parallax_auto_loop_y;
}

int32_t RPG::Map::GetParallaxSy() const {
	return parallax_sy;
}

void RPG::Map::SetParallaxSy(int32_t parallax_sy) {
	this->parallax_sy = parallax_sy;
}

bool RPG::Map::GetGeneratorFlag() const {
	return generator_flag;
}

void RPG::Map::SetGeneratorFlag(bool generator_flag) {
	this->generator_flag = generator_flag;
}

const int32_t& RPG::Map::GetGeneratorMode() const  {
	return generator_mode;
}

int32_t& RPG::Map::GetGeneratorMode() {
	return generator_mode;
}

void RPG::Map::SetGeneratorMode(const int32_t& generator_mode) {
	this->generator_mode = generator_mode;
}

bool RPG::Map::GetTopLevel() const {
	return top_level;
}

void RPG::Map::SetTopLevel(bool top_level) {
	this->top_level = top_level;
}

const int32_t& RPG::Map::GetGeneratorTiles() const  {
	return generator_tiles;
}

int32_t& RPG::Map::GetGeneratorTiles() {
	return generator_tiles;
}

void RPG::Map::SetGeneratorTiles(const int32_t& generator_tiles) {
	this->generator_tiles = generator_tiles;
}

int32_t RPG::Map::GetGeneratorWidth() const {
	return generator_width;
}

void RPG::Map::SetGeneratorWidth(int32_t generator_width) {
	this->generator_width = generator_width;
}

int32_t RPG::Map::GetGeneratorHeight() const {
	return generator_height;
}

void RPG::Map::SetGeneratorHeight(int32_t generator_height) {
	this->generator_height = generator_height;
}

bool RPG::Map::GetGeneratorSurround() const {
	return generator_surround;
}

void RPG::Map::SetGeneratorSurround(bool generator_surround) {
	this->generator_surround = generator_surround;
}

bool RPG::Map::GetGeneratorUpperWall() const {
	return generator_upper_wall;
}

void RPG::Map::SetGeneratorUpperWall(bool generator_upper_wall) {
	this->generator_upper_wall = generator_upper_wall;
}

bool RPG::Map::GetGeneratorFloorB() const {
	return generator_floor_b;
}

void RPG::Map::SetGeneratorFloorB(bool generator_floor_b) {
	this->generator_floor_b = generator_floor_b;
}

bool RPG::Map::GetGeneratorFloorC() const {
	return generator_floor_c;
}

void RPG::Map::SetGeneratorFloorC(bool generator_floor_c) {
	this->generator_floor_c = generator_floor_c;
}

bool RPG::Map::GetGeneratorExtraB() const {
	return generator_extra_b;
}

void RPG::Map::SetGeneratorExtraB(bool generator_extra_b) {
	this->generator_extra_b = generator_extra_b;
}

bool RPG::Map::GetGeneratorExtraC() const {
	return generator_extra_c;
}

void RPG::Map::SetGeneratorExtraC(bool generator_extra_c) {
	this->generator_extra_c = generator_extra_c;
}

const std::vector<uint32_t>& RPG::Map::GetGeneratorX() const  {
	return generator_x;
}

std::vector<uint32_t>& RPG::Map::GetGeneratorX() {
	return generator_x;
}

const std::vector<uint32_t>& RPG::Map::GetGeneratorY() const  {
	return generator_y;
}

std::vector<uint32_t>& RPG::Map::GetGeneratorY() {
	return generator_y;
}

const std::vector<int16_t>& RPG::Map::GetGeneratorTileIds() const  {
	return generator_tile_ids;
}

std::vector<int16_t>& RPG::Map::GetGeneratorTileIds() {
	return generator_tile_ids;
}

const std::vector<int16_t>& RPG::Map::GetLowerLayer() const  {
	return lower_layer;
}

std::vector<int16_t>& RPG::Map::GetLowerLayer() {
	return lower_layer;
}

const std::vector<int16_t>& RPG::Map::GetUpperLayer() const  {
	return upper_layer;
}

std::vector<int16_t>& RPG::Map::GetUpperLayer() {
	return upper_layer;
}

const std::vector<RPG::Event>& RPG::Map::GetEvents() const  {
	return events;
}

std::vector<RPG::Event>& RPG::Map::GetEvents() {
	return events;
}

int32_t RPG::Map::GetSaveCount() const {
	return save_count;
}

void RPG::Map::SetSaveCount(int32_t save_count) {
	this->save_count = save_count;
}

