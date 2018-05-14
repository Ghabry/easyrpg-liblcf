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
#include "rpg_class.h"


const std::string& RPG::Class::GetName() const  {
	return name;
}

std::string& RPG::Class::GetName() {
	return name;
}

void RPG::Class::SetName(const std::string& name) {
	this->name = name;
}

bool RPG::Class::GetTwoWeapon() const {
	return two_weapon;
}

void RPG::Class::SetTwoWeapon(bool two_weapon) {
	this->two_weapon = two_weapon;
}

bool RPG::Class::GetLockEquipment() const {
	return lock_equipment;
}

void RPG::Class::SetLockEquipment(bool lock_equipment) {
	this->lock_equipment = lock_equipment;
}

bool RPG::Class::GetAutoBattle() const {
	return auto_battle;
}

void RPG::Class::SetAutoBattle(bool auto_battle) {
	this->auto_battle = auto_battle;
}

bool RPG::Class::GetSuperGuard() const {
	return super_guard;
}

void RPG::Class::SetSuperGuard(bool super_guard) {
	this->super_guard = super_guard;
}

const RPG::Parameters& RPG::Class::GetParameters() const  {
	return parameters;
}

RPG::Parameters& RPG::Class::GetParameters() {
	return parameters;
}

void RPG::Class::SetParameters(const RPG::Parameters& parameters) {
	this->parameters = parameters;
}

int32_t RPG::Class::GetExpBase() const {
	return exp_base;
}

void RPG::Class::SetExpBase(int32_t exp_base) {
	this->exp_base = exp_base;
}

int32_t RPG::Class::GetExpInflation() const {
	return exp_inflation;
}

void RPG::Class::SetExpInflation(int32_t exp_inflation) {
	this->exp_inflation = exp_inflation;
}

int32_t RPG::Class::GetExpCorrection() const {
	return exp_correction;
}

void RPG::Class::SetExpCorrection(int32_t exp_correction) {
	this->exp_correction = exp_correction;
}

const int32_t& RPG::Class::GetBattlerAnimation() const  {
	return battler_animation;
}

int32_t& RPG::Class::GetBattlerAnimation() {
	return battler_animation;
}

void RPG::Class::SetBattlerAnimation(const int32_t& battler_animation) {
	this->battler_animation = battler_animation;
}

const std::vector<RPG::Learning>& RPG::Class::GetSkills() const  {
	return skills;
}

std::vector<RPG::Learning>& RPG::Class::GetSkills() {
	return skills;
}


const std::vector<uint8_t>& RPG::Class::GetStateRanks() const  {
	return state_ranks;
}

std::vector<uint8_t>& RPG::Class::GetStateRanks() {
	return state_ranks;
}


const std::vector<uint8_t>& RPG::Class::GetAttributeRanks() const  {
	return attribute_ranks;
}

std::vector<uint8_t>& RPG::Class::GetAttributeRanks() {
	return attribute_ranks;
}

const std::vector<int32_t>& RPG::Class::GetBattleCommands() const  {
	return battle_commands;
}

std::vector<int32_t>& RPG::Class::GetBattleCommands() {
	return battle_commands;
}

