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


const std::string& RPG::Terrain::GetName() const  {
	return name;
}

std::string& RPG::Terrain::GetName() {
	return name;
}

void RPG::Terrain::SetName(const std::string& name) {
	this->name = name;
}

int32_t RPG::Terrain::GetDamage() const {
	return damage;
}

void RPG::Terrain::SetDamage(int32_t damage) {
	this->damage = damage;
}

int32_t RPG::Terrain::GetEncounterRate() const {
	return encounter_rate;
}

void RPG::Terrain::SetEncounterRate(int32_t encounter_rate) {
	this->encounter_rate = encounter_rate;
}

const std::string& RPG::Terrain::GetBackgroundName() const  {
	return background_name;
}

std::string& RPG::Terrain::GetBackgroundName() {
	return background_name;
}

void RPG::Terrain::SetBackgroundName(const std::string& background_name) {
	this->background_name = background_name;
}

bool RPG::Terrain::GetBoatPass() const {
	return boat_pass;
}

void RPG::Terrain::SetBoatPass(bool boat_pass) {
	this->boat_pass = boat_pass;
}

bool RPG::Terrain::GetShipPass() const {
	return ship_pass;
}

void RPG::Terrain::SetShipPass(bool ship_pass) {
	this->ship_pass = ship_pass;
}

bool RPG::Terrain::GetAirshipPass() const {
	return airship_pass;
}

void RPG::Terrain::SetAirshipPass(bool airship_pass) {
	this->airship_pass = airship_pass;
}

bool RPG::Terrain::GetAirshipLand() const {
	return airship_land;
}

void RPG::Terrain::SetAirshipLand(bool airship_land) {
	this->airship_land = airship_land;
}

const int32_t& RPG::Terrain::GetBushDepth() const  {
	return bush_depth;
}

int32_t& RPG::Terrain::GetBushDepth() {
	return bush_depth;
}

void RPG::Terrain::SetBushDepth(const int32_t& bush_depth) {
	this->bush_depth = bush_depth;
}

const RPG::Sound& RPG::Terrain::GetFootstep() const  {
	return footstep;
}

RPG::Sound& RPG::Terrain::GetFootstep() {
	return footstep;
}

void RPG::Terrain::SetFootstep(const RPG::Sound& footstep) {
	this->footstep = footstep;
}

bool RPG::Terrain::GetOnDamageSe() const {
	return on_damage_se;
}

void RPG::Terrain::SetOnDamageSe(bool on_damage_se) {
	this->on_damage_se = on_damage_se;
}

const int32_t& RPG::Terrain::GetBackgroundType() const  {
	return background_type;
}

int32_t& RPG::Terrain::GetBackgroundType() {
	return background_type;
}

void RPG::Terrain::SetBackgroundType(const int32_t& background_type) {
	this->background_type = background_type;
}

const std::string& RPG::Terrain::GetBackgroundAName() const  {
	return background_a_name;
}

std::string& RPG::Terrain::GetBackgroundAName() {
	return background_a_name;
}

void RPG::Terrain::SetBackgroundAName(const std::string& background_a_name) {
	this->background_a_name = background_a_name;
}

bool RPG::Terrain::GetBackgroundAScrollh() const {
	return background_a_scrollh;
}

void RPG::Terrain::SetBackgroundAScrollh(bool background_a_scrollh) {
	this->background_a_scrollh = background_a_scrollh;
}

bool RPG::Terrain::GetBackgroundAScrollv() const {
	return background_a_scrollv;
}

void RPG::Terrain::SetBackgroundAScrollv(bool background_a_scrollv) {
	this->background_a_scrollv = background_a_scrollv;
}

int32_t RPG::Terrain::GetBackgroundAScrollhSpeed() const {
	return background_a_scrollh_speed;
}

void RPG::Terrain::SetBackgroundAScrollhSpeed(int32_t background_a_scrollh_speed) {
	this->background_a_scrollh_speed = background_a_scrollh_speed;
}

int32_t RPG::Terrain::GetBackgroundAScrollvSpeed() const {
	return background_a_scrollv_speed;
}

void RPG::Terrain::SetBackgroundAScrollvSpeed(int32_t background_a_scrollv_speed) {
	this->background_a_scrollv_speed = background_a_scrollv_speed;
}

bool RPG::Terrain::GetBackgroundB() const {
	return background_b;
}

void RPG::Terrain::SetBackgroundB(bool background_b) {
	this->background_b = background_b;
}

const std::string& RPG::Terrain::GetBackgroundBName() const  {
	return background_b_name;
}

std::string& RPG::Terrain::GetBackgroundBName() {
	return background_b_name;
}

void RPG::Terrain::SetBackgroundBName(const std::string& background_b_name) {
	this->background_b_name = background_b_name;
}

bool RPG::Terrain::GetBackgroundBScrollh() const {
	return background_b_scrollh;
}

void RPG::Terrain::SetBackgroundBScrollh(bool background_b_scrollh) {
	this->background_b_scrollh = background_b_scrollh;
}

bool RPG::Terrain::GetBackgroundBScrollv() const {
	return background_b_scrollv;
}

void RPG::Terrain::SetBackgroundBScrollv(bool background_b_scrollv) {
	this->background_b_scrollv = background_b_scrollv;
}

int32_t RPG::Terrain::GetBackgroundBScrollhSpeed() const {
	return background_b_scrollh_speed;
}

void RPG::Terrain::SetBackgroundBScrollhSpeed(int32_t background_b_scrollh_speed) {
	this->background_b_scrollh_speed = background_b_scrollh_speed;
}

int32_t RPG::Terrain::GetBackgroundBScrollvSpeed() const {
	return background_b_scrollv_speed;
}

void RPG::Terrain::SetBackgroundBScrollvSpeed(int32_t background_b_scrollv_speed) {
	this->background_b_scrollv_speed = background_b_scrollv_speed;
}

const RPG::Terrain::Flags& RPG::Terrain::GetSpecialFlags() const  {
	return special_flags;
}

RPG::Terrain::Flags& RPG::Terrain::GetSpecialFlags() {
	return special_flags;
}

void RPG::Terrain::SetSpecialFlags(const RPG::Terrain::Flags& special_flags) {
	this->special_flags = special_flags;
}

int32_t RPG::Terrain::GetSpecialBackParty() const {
	return special_back_party;
}

void RPG::Terrain::SetSpecialBackParty(int32_t special_back_party) {
	this->special_back_party = special_back_party;
}

int32_t RPG::Terrain::GetSpecialBackEnemies() const {
	return special_back_enemies;
}

void RPG::Terrain::SetSpecialBackEnemies(int32_t special_back_enemies) {
	this->special_back_enemies = special_back_enemies;
}

int32_t RPG::Terrain::GetSpecialLateralParty() const {
	return special_lateral_party;
}

void RPG::Terrain::SetSpecialLateralParty(int32_t special_lateral_party) {
	this->special_lateral_party = special_lateral_party;
}

int32_t RPG::Terrain::GetSpecialLateralEnemies() const {
	return special_lateral_enemies;
}

void RPG::Terrain::SetSpecialLateralEnemies(int32_t special_lateral_enemies) {
	this->special_lateral_enemies = special_lateral_enemies;
}

int32_t RPG::Terrain::GetGridLocation() const {
	return grid_location;
}

void RPG::Terrain::SetGridLocation(int32_t grid_location) {
	this->grid_location = grid_location;
}

int32_t RPG::Terrain::GetGridA() const {
	return grid_a;
}

void RPG::Terrain::SetGridA(int32_t grid_a) {
	this->grid_a = grid_a;
}

int32_t RPG::Terrain::GetGridB() const {
	return grid_b;
}

void RPG::Terrain::SetGridB(int32_t grid_b) {
	this->grid_b = grid_b;
}

int32_t RPG::Terrain::GetGridC() const {
	return grid_c;
}

void RPG::Terrain::SetGridC(int32_t grid_c) {
	this->grid_c = grid_c;
}

