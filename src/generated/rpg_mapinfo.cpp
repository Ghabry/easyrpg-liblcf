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


const std::string& RPG::MapInfo::GetName() const  {
	return name;
}

std::string& RPG::MapInfo::GetName() {
	return name;
}

void RPG::MapInfo::SetName(const std::string& name) {
	this->name = name;
}

const int32_t& RPG::MapInfo::GetParentMap() const  {
	return parent_map;
}

int32_t& RPG::MapInfo::GetParentMap() {
	return parent_map;
}

void RPG::MapInfo::SetParentMap(const int32_t& parent_map) {
	this->parent_map = parent_map;
}

int32_t RPG::MapInfo::GetIndentation() const {
	return indentation;
}

void RPG::MapInfo::SetIndentation(int32_t indentation) {
	this->indentation = indentation;
}

const int32_t& RPG::MapInfo::GetType() const  {
	return type;
}

int32_t& RPG::MapInfo::GetType() {
	return type;
}

void RPG::MapInfo::SetType(const int32_t& type) {
	this->type = type;
}

int32_t RPG::MapInfo::GetScrollbarX() const {
	return scrollbar_x;
}

void RPG::MapInfo::SetScrollbarX(int32_t scrollbar_x) {
	this->scrollbar_x = scrollbar_x;
}

int32_t RPG::MapInfo::GetScrollbarY() const {
	return scrollbar_y;
}

void RPG::MapInfo::SetScrollbarY(int32_t scrollbar_y) {
	this->scrollbar_y = scrollbar_y;
}

bool RPG::MapInfo::GetExpandedNode() const {
	return expanded_node;
}

void RPG::MapInfo::SetExpandedNode(bool expanded_node) {
	this->expanded_node = expanded_node;
}

const int32_t& RPG::MapInfo::GetMusicType() const  {
	return music_type;
}

int32_t& RPG::MapInfo::GetMusicType() {
	return music_type;
}

void RPG::MapInfo::SetMusicType(const int32_t& music_type) {
	this->music_type = music_type;
}

const RPG::Music& RPG::MapInfo::GetMusic() const  {
	return music;
}

RPG::Music& RPG::MapInfo::GetMusic() {
	return music;
}

void RPG::MapInfo::SetMusic(const RPG::Music& music) {
	this->music = music;
}

const int32_t& RPG::MapInfo::GetBackgroundType() const  {
	return background_type;
}

int32_t& RPG::MapInfo::GetBackgroundType() {
	return background_type;
}

void RPG::MapInfo::SetBackgroundType(const int32_t& background_type) {
	this->background_type = background_type;
}

const std::string& RPG::MapInfo::GetBackgroundName() const  {
	return background_name;
}

std::string& RPG::MapInfo::GetBackgroundName() {
	return background_name;
}

void RPG::MapInfo::SetBackgroundName(const std::string& background_name) {
	this->background_name = background_name;
}

const int32_t& RPG::MapInfo::GetTeleport() const  {
	return teleport;
}

int32_t& RPG::MapInfo::GetTeleport() {
	return teleport;
}

void RPG::MapInfo::SetTeleport(const int32_t& teleport) {
	this->teleport = teleport;
}

const int32_t& RPG::MapInfo::GetEscape() const  {
	return escape;
}

int32_t& RPG::MapInfo::GetEscape() {
	return escape;
}

void RPG::MapInfo::SetEscape(const int32_t& escape) {
	this->escape = escape;
}

const int32_t& RPG::MapInfo::GetSave() const  {
	return save;
}

int32_t& RPG::MapInfo::GetSave() {
	return save;
}

void RPG::MapInfo::SetSave(const int32_t& save) {
	this->save = save;
}

const std::vector<RPG::Encounter>& RPG::MapInfo::GetEncounters() const  {
	return encounters;
}

std::vector<RPG::Encounter>& RPG::MapInfo::GetEncounters() {
	return encounters;
}

int32_t RPG::MapInfo::GetEncounterSteps() const {
	return encounter_steps;
}

void RPG::MapInfo::SetEncounterSteps(int32_t encounter_steps) {
	this->encounter_steps = encounter_steps;
}

const RPG::Rect& RPG::MapInfo::GetAreaRect() const  {
	return area_rect;
}

RPG::Rect& RPG::MapInfo::GetAreaRect() {
	return area_rect;
}

void RPG::MapInfo::SetAreaRect(const RPG::Rect& area_rect) {
	this->area_rect = area_rect;
}

