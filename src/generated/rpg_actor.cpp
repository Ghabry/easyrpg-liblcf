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
#include "rpg_actor.h"


const std::string& RPG::Actor::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Actor::GetName() {
	return getter<std::string&>("name");
}

void RPG::Actor::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::Actor::GetTitle() const {
	return getter<const std::string&>("title");
}

std::string& RPG::Actor::GetTitle() {
	return getter<std::string&>("title");
}

void RPG::Actor::SetTitle(const std::string& title) {
	setter<std::string>("title", title);
}

const std::string& RPG::Actor::GetCharacterName() const {
	return getter<const std::string&>("character_name");
}

std::string& RPG::Actor::GetCharacterName() {
	return getter<std::string&>("character_name");
}

void RPG::Actor::SetCharacterName(const std::string& character_name) {
	setter<std::string>("character_name", character_name);
}

int32_t RPG::Actor::GetCharacterIndex() const {
	return getter<int32_t>("character_index");
}

void RPG::Actor::SetCharacterIndex(int32_t character_index) {
	setter<int32_t>("character_index", character_index);
}

bool RPG::Actor::GetTransparent() const {
	return getter<bool>("transparent");
}

void RPG::Actor::SetTransparent(bool transparent) {
	setter<bool>("transparent", transparent);
}

int32_t RPG::Actor::GetInitialLevel() const {
	return getter<int32_t>("initial_level");
}

void RPG::Actor::SetInitialLevel(int32_t initial_level) {
	setter<int32_t>("initial_level", initial_level);
}

int32_t RPG::Actor::GetFinalLevel() const {
	return getter<int32_t>("final_level");
}

void RPG::Actor::SetFinalLevel(int32_t final_level) {
	setter<int32_t>("final_level", final_level);
}

bool RPG::Actor::GetCriticalHit() const {
	return getter<bool>("critical_hit");
}

void RPG::Actor::SetCriticalHit(bool critical_hit) {
	setter<bool>("critical_hit", critical_hit);
}

int32_t RPG::Actor::GetCriticalHitChance() const {
	return getter<int32_t>("critical_hit_chance");
}

void RPG::Actor::SetCriticalHitChance(int32_t critical_hit_chance) {
	setter<int32_t>("critical_hit_chance", critical_hit_chance);
}

const std::string& RPG::Actor::GetFaceName() const {
	return getter<const std::string&>("face_name");
}

std::string& RPG::Actor::GetFaceName() {
	return getter<std::string&>("face_name");
}

void RPG::Actor::SetFaceName(const std::string& face_name) {
	setter<std::string>("face_name", face_name);
}

int32_t RPG::Actor::GetFaceIndex() const {
	return getter<int32_t>("face_index");
}

void RPG::Actor::SetFaceIndex(int32_t face_index) {
	setter<int32_t>("face_index", face_index);
}

bool RPG::Actor::GetTwoWeapon() const {
	return getter<bool>("two_weapon");
}

void RPG::Actor::SetTwoWeapon(bool two_weapon) {
	setter<bool>("two_weapon", two_weapon);
}

bool RPG::Actor::GetLockEquipment() const {
	return getter<bool>("lock_equipment");
}

void RPG::Actor::SetLockEquipment(bool lock_equipment) {
	setter<bool>("lock_equipment", lock_equipment);
}

bool RPG::Actor::GetAutoBattle() const {
	return getter<bool>("auto_battle");
}

void RPG::Actor::SetAutoBattle(bool auto_battle) {
	setter<bool>("auto_battle", auto_battle);
}

bool RPG::Actor::GetSuperGuard() const {
	return getter<bool>("super_guard");
}

void RPG::Actor::SetSuperGuard(bool super_guard) {
	setter<bool>("super_guard", super_guard);
}

const RPG::Parameters& RPG::Actor::GetParameters() const {
	return getter<const RPG::Parameters&>("parameters");
}

RPG::Parameters& RPG::Actor::GetParameters() {
	return getter<RPG::Parameters&>("parameters");
}

void RPG::Actor::SetParameters(const RPG::Parameters& parameters) {
	setter<RPG::Parameters>("parameters", parameters);
}

int32_t RPG::Actor::GetExpBase() const {
	return getter<int32_t>("exp_base");
}

void RPG::Actor::SetExpBase(int32_t exp_base) {
	setter<int32_t>("exp_base", exp_base);
}

int32_t RPG::Actor::GetExpInflation() const {
	return getter<int32_t>("exp_inflation");
}

void RPG::Actor::SetExpInflation(int32_t exp_inflation) {
	setter<int32_t>("exp_inflation", exp_inflation);
}

int32_t RPG::Actor::GetExpCorrection() const {
	return getter<int32_t>("exp_correction");
}

void RPG::Actor::SetExpCorrection(int32_t exp_correction) {
	setter<int32_t>("exp_correction", exp_correction);
}

const RPG::Equipment& RPG::Actor::GetInitialEquipment() const {
	return getter<const RPG::Equipment&>("initial_equipment");
}

RPG::Equipment& RPG::Actor::GetInitialEquipment() {
	return getter<RPG::Equipment&>("initial_equipment");
}

void RPG::Actor::SetInitialEquipment(const RPG::Equipment& initial_equipment) {
	setter<RPG::Equipment>("initial_equipment", initial_equipment);
}

const int32_t& RPG::Actor::GetUnarmedAnimation() const {
	return getter<const int32_t&>("unarmed_animation");
}

int32_t& RPG::Actor::GetUnarmedAnimation() {
	return getter<int32_t&>("unarmed_animation");
}

void RPG::Actor::SetUnarmedAnimation(const int32_t& unarmed_animation) {
	setter<int32_t>("unarmed_animation", unarmed_animation);
}

const int32_t& RPG::Actor::GetClassId() const {
	return getter<const int32_t&>("class_id");
}

int32_t& RPG::Actor::GetClassId() {
	return getter<int32_t&>("class_id");
}

void RPG::Actor::SetClassId(const int32_t& class_id) {
	setter<int32_t>("class_id", class_id);
}

int32_t RPG::Actor::GetBattleX() const {
	return getter<int32_t>("battle_x");
}

void RPG::Actor::SetBattleX(int32_t battle_x) {
	setter<int32_t>("battle_x", battle_x);
}

int32_t RPG::Actor::GetBattleY() const {
	return getter<int32_t>("battle_y");
}

void RPG::Actor::SetBattleY(int32_t battle_y) {
	setter<int32_t>("battle_y", battle_y);
}

const int32_t& RPG::Actor::GetBattlerAnimation() const {
	return getter<const int32_t&>("battler_animation");
}

int32_t& RPG::Actor::GetBattlerAnimation() {
	return getter<int32_t&>("battler_animation");
}

void RPG::Actor::SetBattlerAnimation(const int32_t& battler_animation) {
	setter<int32_t>("battler_animation", battler_animation);
}

const std::vector<RPG::Learning>& RPG::Actor::GetSkills() const {
	return vector_getter<const std::vector<RPG::Learning>&, RPG::Learning>("skills");
}

std::vector<RPG::Learning>& RPG::Actor::GetSkills() {
	return vector_getter<std::vector<RPG::Learning>&, RPG::Learning>("skills");
}

bool RPG::Actor::GetRenameSkill() const {
	return getter<bool>("rename_skill");
}

void RPG::Actor::SetRenameSkill(bool rename_skill) {
	setter<bool>("rename_skill", rename_skill);
}

const std::string& RPG::Actor::GetSkillName() const {
	return getter<const std::string&>("skill_name");
}

std::string& RPG::Actor::GetSkillName() {
	return getter<std::string&>("skill_name");
}

void RPG::Actor::SetSkillName(const std::string& skill_name) {
	setter<std::string>("skill_name", skill_name);
}


const std::vector<uint8_t>& RPG::Actor::GetStateRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("state_ranks");
}

std::vector<uint8_t>& RPG::Actor::GetStateRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("state_ranks");
}


const std::vector<uint8_t>& RPG::Actor::GetAttributeRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

std::vector<uint8_t>& RPG::Actor::GetAttributeRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

const std::vector<int32_t>& RPG::Actor::GetBattleCommands() const {
	return vector_getter<const std::vector<int32_t>&, int32_t>("battle_commands");
}

std::vector<int32_t>& RPG::Actor::GetBattleCommands() {
	return vector_getter<std::vector<int32_t>&, int32_t>("battle_commands");
}

