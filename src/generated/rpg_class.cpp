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


const std::string& RPG::Class::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Class::GetName() {
	return getter<std::string&>("name");
}

void RPG::Class::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

bool RPG::Class::GetTwoWeapon() const {
	return getter<bool>("two_weapon");
}

void RPG::Class::SetTwoWeapon(bool two_weapon) {
	setter<bool>("two_weapon", two_weapon);
}

bool RPG::Class::GetLockEquipment() const {
	return getter<bool>("lock_equipment");
}

void RPG::Class::SetLockEquipment(bool lock_equipment) {
	setter<bool>("lock_equipment", lock_equipment);
}

bool RPG::Class::GetAutoBattle() const {
	return getter<bool>("auto_battle");
}

void RPG::Class::SetAutoBattle(bool auto_battle) {
	setter<bool>("auto_battle", auto_battle);
}

bool RPG::Class::GetSuperGuard() const {
	return getter<bool>("super_guard");
}

void RPG::Class::SetSuperGuard(bool super_guard) {
	setter<bool>("super_guard", super_guard);
}

const RPG::Parameters& RPG::Class::GetParameters() const {
	return getter<const RPG::Parameters&>("parameters");
}

RPG::Parameters& RPG::Class::GetParameters() {
	return getter<RPG::Parameters&>("parameters");
}

void RPG::Class::SetParameters(const RPG::Parameters& parameters) {
	setter<RPG::Parameters>("parameters", parameters);
}

int32_t RPG::Class::GetExpBase() const {
	return getter<int32_t>("exp_base");
}

void RPG::Class::SetExpBase(int32_t exp_base) {
	setter<int32_t>("exp_base", exp_base);
}

int32_t RPG::Class::GetExpInflation() const {
	return getter<int32_t>("exp_inflation");
}

void RPG::Class::SetExpInflation(int32_t exp_inflation) {
	setter<int32_t>("exp_inflation", exp_inflation);
}

int32_t RPG::Class::GetExpCorrection() const {
	return getter<int32_t>("exp_correction");
}

void RPG::Class::SetExpCorrection(int32_t exp_correction) {
	setter<int32_t>("exp_correction", exp_correction);
}

const int32_t& RPG::Class::GetBattlerAnimation() const {
	return getter<const int32_t&>("battler_animation");
}

int32_t& RPG::Class::GetBattlerAnimation() {
	return getter<int32_t&>("battler_animation");
}

void RPG::Class::SetBattlerAnimation(const int32_t& battler_animation) {
	setter<int32_t>("battler_animation", battler_animation);
}

const std::vector<RPG::Learning>& RPG::Class::GetSkills() const {
	return vector_getter<const std::vector<RPG::Learning>&, RPG::Learning>("skills");
}

std::vector<RPG::Learning>& RPG::Class::GetSkills() {
	return vector_getter<std::vector<RPG::Learning>&, RPG::Learning>("skills");
}


const std::vector<uint8_t>& RPG::Class::GetStateRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("state_ranks");
}

std::vector<uint8_t>& RPG::Class::GetStateRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("state_ranks");
}


const std::vector<uint8_t>& RPG::Class::GetAttributeRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

std::vector<uint8_t>& RPG::Class::GetAttributeRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

const std::vector<int32_t>& RPG::Class::GetBattleCommands() const {
	return vector_getter<const std::vector<int32_t>&, int32_t>("battle_commands");
}

std::vector<int32_t>& RPG::Class::GetBattleCommands() {
	return vector_getter<std::vector<int32_t>&, int32_t>("battle_commands");
}

