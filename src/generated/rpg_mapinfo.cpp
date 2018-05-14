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
#include "rpg_mapinfo.h"
/**
 * Constructor.
 */
RPG::MapInfo::MapInfo() {
	Init();
}


const std::string& RPG::MapInfo::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::MapInfo::GetName() {
	return getter<std::string&>("name");
}

void RPG::MapInfo::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const int32_t& RPG::MapInfo::GetParentMap() const {
	return getter<const int32_t&>("parent_map");
}

int32_t& RPG::MapInfo::GetParentMap() {
	return getter<int32_t&>("parent_map");
}

void RPG::MapInfo::SetParentMap(const int32_t& parent_map) {
	setter<int32_t>("parent_map", parent_map);
}

int32_t RPG::MapInfo::GetIndentation() const {
	return getter<int32_t>("indentation");
}

void RPG::MapInfo::SetIndentation(int32_t indentation) {
	setter<int32_t>("indentation", indentation);
}

const int32_t& RPG::MapInfo::GetType() const {
	return getter<const int32_t&>("type");
}

int32_t& RPG::MapInfo::GetType() {
	return getter<int32_t&>("type");
}

void RPG::MapInfo::SetType(const int32_t& type) {
	setter<int32_t>("type", type);
}

int32_t RPG::MapInfo::GetScrollbarX() const {
	return getter<int32_t>("scrollbar_x");
}

void RPG::MapInfo::SetScrollbarX(int32_t scrollbar_x) {
	setter<int32_t>("scrollbar_x", scrollbar_x);
}

int32_t RPG::MapInfo::GetScrollbarY() const {
	return getter<int32_t>("scrollbar_y");
}

void RPG::MapInfo::SetScrollbarY(int32_t scrollbar_y) {
	setter<int32_t>("scrollbar_y", scrollbar_y);
}

bool RPG::MapInfo::GetExpandedNode() const {
	return getter<bool>("expanded_node");
}

void RPG::MapInfo::SetExpandedNode(bool expanded_node) {
	setter<bool>("expanded_node", expanded_node);
}

const int32_t& RPG::MapInfo::GetMusicType() const {
	return getter<const int32_t&>("music_type");
}

int32_t& RPG::MapInfo::GetMusicType() {
	return getter<int32_t&>("music_type");
}

void RPG::MapInfo::SetMusicType(const int32_t& music_type) {
	setter<int32_t>("music_type", music_type);
}

const RPG::Music& RPG::MapInfo::GetMusic() const {
	return getter<const RPG::Music&>("music");
}

RPG::Music& RPG::MapInfo::GetMusic() {
	return getter<RPG::Music&>("music");
}

void RPG::MapInfo::SetMusic(const RPG::Music& music) {
	setter<RPG::Music>("music", music);
}

const int32_t& RPG::MapInfo::GetBackgroundType() const {
	return getter<const int32_t&>("background_type");
}

int32_t& RPG::MapInfo::GetBackgroundType() {
	return getter<int32_t&>("background_type");
}

void RPG::MapInfo::SetBackgroundType(const int32_t& background_type) {
	setter<int32_t>("background_type", background_type);
}

const std::string& RPG::MapInfo::GetBackgroundName() const {
	return getter<const std::string&>("background_name");
}

std::string& RPG::MapInfo::GetBackgroundName() {
	return getter<std::string&>("background_name");
}

void RPG::MapInfo::SetBackgroundName(const std::string& background_name) {
	setter<std::string>("background_name", background_name);
}

const int32_t& RPG::MapInfo::GetTeleport() const {
	return getter<const int32_t&>("teleport");
}

int32_t& RPG::MapInfo::GetTeleport() {
	return getter<int32_t&>("teleport");
}

void RPG::MapInfo::SetTeleport(const int32_t& teleport) {
	setter<int32_t>("teleport", teleport);
}

const int32_t& RPG::MapInfo::GetEscape() const {
	return getter<const int32_t&>("escape");
}

int32_t& RPG::MapInfo::GetEscape() {
	return getter<int32_t&>("escape");
}

void RPG::MapInfo::SetEscape(const int32_t& escape) {
	setter<int32_t>("escape", escape);
}

const int32_t& RPG::MapInfo::GetSave() const {
	return getter<const int32_t&>("save");
}

int32_t& RPG::MapInfo::GetSave() {
	return getter<int32_t&>("save");
}

void RPG::MapInfo::SetSave(const int32_t& save) {
	setter<int32_t>("save", save);
}

const std::vector<RPG::Encounter>& RPG::MapInfo::GetEncounters() const {
	return vector_getter<const std::vector<RPG::Encounter>&, RPG::Encounter>("encounters");
}

std::vector<RPG::Encounter>& RPG::MapInfo::GetEncounters() {
	return vector_getter<std::vector<RPG::Encounter>&, RPG::Encounter>("encounters");
}

int32_t RPG::MapInfo::GetEncounterSteps() const {
	return getter<int32_t>("encounter_steps");
}

void RPG::MapInfo::SetEncounterSteps(int32_t encounter_steps) {
	setter<int32_t>("encounter_steps", encounter_steps);
}

const RPG::Rect& RPG::MapInfo::GetAreaRect() const {
	return getter<const RPG::Rect&>("area_rect");
}

RPG::Rect& RPG::MapInfo::GetAreaRect() {
	return getter<RPG::Rect&>("area_rect");
}

void RPG::MapInfo::SetAreaRect(const RPG::Rect& area_rect) {
	setter<RPG::Rect>("area_rect", area_rect);
}

