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
#include "rpg_terrain.h"


const std::string& RPG::Terrain::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Terrain::GetName() {
	return getter<std::string&>("name");
}

void RPG::Terrain::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int32_t RPG::Terrain::GetDamage() const {
	return getter<int32_t>("damage");
}

void RPG::Terrain::SetDamage(int32_t damage) {
	setter<int32_t>("damage", damage);
}

int32_t RPG::Terrain::GetEncounterRate() const {
	return getter<int32_t>("encounter_rate");
}

void RPG::Terrain::SetEncounterRate(int32_t encounter_rate) {
	setter<int32_t>("encounter_rate", encounter_rate);
}

const std::string& RPG::Terrain::GetBackgroundName() const {
	return getter<const std::string&>("background_name");
}

std::string& RPG::Terrain::GetBackgroundName() {
	return getter<std::string&>("background_name");
}

void RPG::Terrain::SetBackgroundName(const std::string& background_name) {
	setter<std::string>("background_name", background_name);
}

bool RPG::Terrain::GetBoatPass() const {
	return getter<bool>("boat_pass");
}

void RPG::Terrain::SetBoatPass(bool boat_pass) {
	setter<bool>("boat_pass", boat_pass);
}

bool RPG::Terrain::GetShipPass() const {
	return getter<bool>("ship_pass");
}

void RPG::Terrain::SetShipPass(bool ship_pass) {
	setter<bool>("ship_pass", ship_pass);
}

bool RPG::Terrain::GetAirshipPass() const {
	return getter<bool>("airship_pass");
}

void RPG::Terrain::SetAirshipPass(bool airship_pass) {
	setter<bool>("airship_pass", airship_pass);
}

bool RPG::Terrain::GetAirshipLand() const {
	return getter<bool>("airship_land");
}

void RPG::Terrain::SetAirshipLand(bool airship_land) {
	setter<bool>("airship_land", airship_land);
}

const int32_t& RPG::Terrain::GetBushDepth() const {
	return getter<const int32_t&>("bush_depth");
}

int32_t& RPG::Terrain::GetBushDepth() {
	return getter<int32_t&>("bush_depth");
}

void RPG::Terrain::SetBushDepth(const int32_t& bush_depth) {
	setter<int32_t>("bush_depth", bush_depth);
}

const RPG::Sound& RPG::Terrain::GetFootstep() const {
	return getter<const RPG::Sound&>("footstep");
}

RPG::Sound& RPG::Terrain::GetFootstep() {
	return getter<RPG::Sound&>("footstep");
}

void RPG::Terrain::SetFootstep(const RPG::Sound& footstep) {
	setter<RPG::Sound>("footstep", footstep);
}

bool RPG::Terrain::GetOnDamageSe() const {
	return getter<bool>("on_damage_se");
}

void RPG::Terrain::SetOnDamageSe(bool on_damage_se) {
	setter<bool>("on_damage_se", on_damage_se);
}

const int32_t& RPG::Terrain::GetBackgroundType() const {
	return getter<const int32_t&>("background_type");
}

int32_t& RPG::Terrain::GetBackgroundType() {
	return getter<int32_t&>("background_type");
}

void RPG::Terrain::SetBackgroundType(const int32_t& background_type) {
	setter<int32_t>("background_type", background_type);
}

const std::string& RPG::Terrain::GetBackgroundAName() const {
	return getter<const std::string&>("background_a_name");
}

std::string& RPG::Terrain::GetBackgroundAName() {
	return getter<std::string&>("background_a_name");
}

void RPG::Terrain::SetBackgroundAName(const std::string& background_a_name) {
	setter<std::string>("background_a_name", background_a_name);
}

bool RPG::Terrain::GetBackgroundAScrollh() const {
	return getter<bool>("background_a_scrollh");
}

void RPG::Terrain::SetBackgroundAScrollh(bool background_a_scrollh) {
	setter<bool>("background_a_scrollh", background_a_scrollh);
}

bool RPG::Terrain::GetBackgroundAScrollv() const {
	return getter<bool>("background_a_scrollv");
}

void RPG::Terrain::SetBackgroundAScrollv(bool background_a_scrollv) {
	setter<bool>("background_a_scrollv", background_a_scrollv);
}

int32_t RPG::Terrain::GetBackgroundAScrollhSpeed() const {
	return getter<int32_t>("background_a_scrollh_speed");
}

void RPG::Terrain::SetBackgroundAScrollhSpeed(int32_t background_a_scrollh_speed) {
	setter<int32_t>("background_a_scrollh_speed", background_a_scrollh_speed);
}

int32_t RPG::Terrain::GetBackgroundAScrollvSpeed() const {
	return getter<int32_t>("background_a_scrollv_speed");
}

void RPG::Terrain::SetBackgroundAScrollvSpeed(int32_t background_a_scrollv_speed) {
	setter<int32_t>("background_a_scrollv_speed", background_a_scrollv_speed);
}

bool RPG::Terrain::GetBackgroundB() const {
	return getter<bool>("background_b");
}

void RPG::Terrain::SetBackgroundB(bool background_b) {
	setter<bool>("background_b", background_b);
}

const std::string& RPG::Terrain::GetBackgroundBName() const {
	return getter<const std::string&>("background_b_name");
}

std::string& RPG::Terrain::GetBackgroundBName() {
	return getter<std::string&>("background_b_name");
}

void RPG::Terrain::SetBackgroundBName(const std::string& background_b_name) {
	setter<std::string>("background_b_name", background_b_name);
}

bool RPG::Terrain::GetBackgroundBScrollh() const {
	return getter<bool>("background_b_scrollh");
}

void RPG::Terrain::SetBackgroundBScrollh(bool background_b_scrollh) {
	setter<bool>("background_b_scrollh", background_b_scrollh);
}

bool RPG::Terrain::GetBackgroundBScrollv() const {
	return getter<bool>("background_b_scrollv");
}

void RPG::Terrain::SetBackgroundBScrollv(bool background_b_scrollv) {
	setter<bool>("background_b_scrollv", background_b_scrollv);
}

int32_t RPG::Terrain::GetBackgroundBScrollhSpeed() const {
	return getter<int32_t>("background_b_scrollh_speed");
}

void RPG::Terrain::SetBackgroundBScrollhSpeed(int32_t background_b_scrollh_speed) {
	setter<int32_t>("background_b_scrollh_speed", background_b_scrollh_speed);
}

int32_t RPG::Terrain::GetBackgroundBScrollvSpeed() const {
	return getter<int32_t>("background_b_scrollv_speed");
}

void RPG::Terrain::SetBackgroundBScrollvSpeed(int32_t background_b_scrollv_speed) {
	setter<int32_t>("background_b_scrollv_speed", background_b_scrollv_speed);
}

const RPG::Terrain::Flags& RPG::Terrain::GetSpecialFlags() const {
	return getter<const RPG::Terrain::Flags&>("special_flags");
}

RPG::Terrain::Flags& RPG::Terrain::GetSpecialFlags() {
	return getter<RPG::Terrain::Flags&>("special_flags");
}

void RPG::Terrain::SetSpecialFlags(const RPG::Terrain::Flags& special_flags) {
	setter<RPG::Terrain::Flags>("special_flags", special_flags);
}

int32_t RPG::Terrain::GetSpecialBackParty() const {
	return getter<int32_t>("special_back_party");
}

void RPG::Terrain::SetSpecialBackParty(int32_t special_back_party) {
	setter<int32_t>("special_back_party", special_back_party);
}

int32_t RPG::Terrain::GetSpecialBackEnemies() const {
	return getter<int32_t>("special_back_enemies");
}

void RPG::Terrain::SetSpecialBackEnemies(int32_t special_back_enemies) {
	setter<int32_t>("special_back_enemies", special_back_enemies);
}

int32_t RPG::Terrain::GetSpecialLateralParty() const {
	return getter<int32_t>("special_lateral_party");
}

void RPG::Terrain::SetSpecialLateralParty(int32_t special_lateral_party) {
	setter<int32_t>("special_lateral_party", special_lateral_party);
}

int32_t RPG::Terrain::GetSpecialLateralEnemies() const {
	return getter<int32_t>("special_lateral_enemies");
}

void RPG::Terrain::SetSpecialLateralEnemies(int32_t special_lateral_enemies) {
	setter<int32_t>("special_lateral_enemies", special_lateral_enemies);
}

int32_t RPG::Terrain::GetGridLocation() const {
	return getter<int32_t>("grid_location");
}

void RPG::Terrain::SetGridLocation(int32_t grid_location) {
	setter<int32_t>("grid_location", grid_location);
}

int32_t RPG::Terrain::GetGridA() const {
	return getter<int32_t>("grid_a");
}

void RPG::Terrain::SetGridA(int32_t grid_a) {
	setter<int32_t>("grid_a", grid_a);
}

int32_t RPG::Terrain::GetGridB() const {
	return getter<int32_t>("grid_b");
}

void RPG::Terrain::SetGridB(int32_t grid_b) {
	setter<int32_t>("grid_b", grid_b);
}

int32_t RPG::Terrain::GetGridC() const {
	return getter<int32_t>("grid_c");
}

void RPG::Terrain::SetGridC(int32_t grid_c) {
	setter<int32_t>("grid_c", grid_c);
}

