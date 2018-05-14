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
#include "rpg_saveactor.h"


const std::string& RPG::SaveActor::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::SaveActor::GetName() {
	return getter<std::string&>("name");
}

void RPG::SaveActor::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::SaveActor::GetTitle() const {
	return getter<const std::string&>("title");
}

std::string& RPG::SaveActor::GetTitle() {
	return getter<std::string&>("title");
}

void RPG::SaveActor::SetTitle(const std::string& title) {
	setter<std::string>("title", title);
}

const std::string& RPG::SaveActor::GetSpriteName() const {
	return getter<const std::string&>("sprite_name");
}

std::string& RPG::SaveActor::GetSpriteName() {
	return getter<std::string&>("sprite_name");
}

void RPG::SaveActor::SetSpriteName(const std::string& sprite_name) {
	setter<std::string>("sprite_name", sprite_name);
}

int32_t RPG::SaveActor::GetSpriteId() const {
	return getter<int32_t>("sprite_id");
}

void RPG::SaveActor::SetSpriteId(int32_t sprite_id) {
	setter<int32_t>("sprite_id", sprite_id);
}

int32_t RPG::SaveActor::GetSpriteFlags() const {
	return getter<int32_t>("sprite_flags");
}

void RPG::SaveActor::SetSpriteFlags(int32_t sprite_flags) {
	setter<int32_t>("sprite_flags", sprite_flags);
}

const std::string& RPG::SaveActor::GetFaceName() const {
	return getter<const std::string&>("face_name");
}

std::string& RPG::SaveActor::GetFaceName() {
	return getter<std::string&>("face_name");
}

void RPG::SaveActor::SetFaceName(const std::string& face_name) {
	setter<std::string>("face_name", face_name);
}

int32_t RPG::SaveActor::GetFaceId() const {
	return getter<int32_t>("face_id");
}

void RPG::SaveActor::SetFaceId(int32_t face_id) {
	setter<int32_t>("face_id", face_id);
}

int32_t RPG::SaveActor::GetLevel() const {
	return getter<int32_t>("level");
}

void RPG::SaveActor::SetLevel(int32_t level) {
	setter<int32_t>("level", level);
}

int32_t RPG::SaveActor::GetExp() const {
	return getter<int32_t>("exp");
}

void RPG::SaveActor::SetExp(int32_t exp) {
	setter<int32_t>("exp", exp);
}

int32_t RPG::SaveActor::GetHpMod() const {
	return getter<int32_t>("hp_mod");
}

void RPG::SaveActor::SetHpMod(int32_t hp_mod) {
	setter<int32_t>("hp_mod", hp_mod);
}

int32_t RPG::SaveActor::GetSpMod() const {
	return getter<int32_t>("sp_mod");
}

void RPG::SaveActor::SetSpMod(int32_t sp_mod) {
	setter<int32_t>("sp_mod", sp_mod);
}

int32_t RPG::SaveActor::GetAttackMod() const {
	return getter<int32_t>("attack_mod");
}

void RPG::SaveActor::SetAttackMod(int32_t attack_mod) {
	setter<int32_t>("attack_mod", attack_mod);
}

int32_t RPG::SaveActor::GetDefenseMod() const {
	return getter<int32_t>("defense_mod");
}

void RPG::SaveActor::SetDefenseMod(int32_t defense_mod) {
	setter<int32_t>("defense_mod", defense_mod);
}

int32_t RPG::SaveActor::GetSpiritMod() const {
	return getter<int32_t>("spirit_mod");
}

void RPG::SaveActor::SetSpiritMod(int32_t spirit_mod) {
	setter<int32_t>("spirit_mod", spirit_mod);
}

int32_t RPG::SaveActor::GetAgilityMod() const {
	return getter<int32_t>("agility_mod");
}

void RPG::SaveActor::SetAgilityMod(int32_t agility_mod) {
	setter<int32_t>("agility_mod", agility_mod);
}

int32_t RPG::SaveActor::GetSkillsSize() const {
	return getter<int32_t>("skills_size");
}

void RPG::SaveActor::SetSkillsSize(int32_t skills_size) {
	setter<int32_t>("skills_size", skills_size);
}

const std::vector<int16_t>& RPG::SaveActor::GetSkills() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("skills");
}

std::vector<int16_t>& RPG::SaveActor::GetSkills() {
	return vector_getter<std::vector<int16_t>&, int16_t>("skills");
}

const std::vector<int16_t>& RPG::SaveActor::GetEquipped() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("equipped");
}

std::vector<int16_t>& RPG::SaveActor::GetEquipped() {
	return vector_getter<std::vector<int16_t>&, int16_t>("equipped");
}

int32_t RPG::SaveActor::GetCurrentHp() const {
	return getter<int32_t>("current_hp");
}

void RPG::SaveActor::SetCurrentHp(int32_t current_hp) {
	setter<int32_t>("current_hp", current_hp);
}

int32_t RPG::SaveActor::GetCurrentSp() const {
	return getter<int32_t>("current_sp");
}

void RPG::SaveActor::SetCurrentSp(int32_t current_sp) {
	setter<int32_t>("current_sp", current_sp);
}

const std::vector<int32_t>& RPG::SaveActor::GetBattleCommands() const {
	return vector_getter<const std::vector<int32_t>&, int32_t>("battle_commands");
}

std::vector<int32_t>& RPG::SaveActor::GetBattleCommands() {
	return vector_getter<std::vector<int32_t>&, int32_t>("battle_commands");
}

int32_t RPG::SaveActor::GetStatusSize() const {
	return getter<int32_t>("status_size");
}

void RPG::SaveActor::SetStatusSize(int32_t status_size) {
	setter<int32_t>("status_size", status_size);
}

const std::vector<int16_t>& RPG::SaveActor::GetStatus() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("status");
}

std::vector<int16_t>& RPG::SaveActor::GetStatus() {
	return vector_getter<std::vector<int16_t>&, int16_t>("status");
}

bool RPG::SaveActor::GetChangedBattleCommands() const {
	return getter<bool>("changed_battle_commands");
}

void RPG::SaveActor::SetChangedBattleCommands(bool changed_battle_commands) {
	setter<bool>("changed_battle_commands", changed_battle_commands);
}

const int32_t& RPG::SaveActor::GetClassId() const {
	return getter<const int32_t&>("class_id");
}

int32_t& RPG::SaveActor::GetClassId() {
	return getter<int32_t&>("class_id");
}

void RPG::SaveActor::SetClassId(const int32_t& class_id) {
	setter<int32_t>("class_id", class_id);
}

int32_t RPG::SaveActor::GetRow() const {
	return getter<int32_t>("row");
}

void RPG::SaveActor::SetRow(int32_t row) {
	setter<int32_t>("row", row);
}

bool RPG::SaveActor::GetTwoWeapon() const {
	return getter<bool>("two_weapon");
}

void RPG::SaveActor::SetTwoWeapon(bool two_weapon) {
	setter<bool>("two_weapon", two_weapon);
}

bool RPG::SaveActor::GetLockEquipment() const {
	return getter<bool>("lock_equipment");
}

void RPG::SaveActor::SetLockEquipment(bool lock_equipment) {
	setter<bool>("lock_equipment", lock_equipment);
}

bool RPG::SaveActor::GetAutoBattle() const {
	return getter<bool>("auto_battle");
}

void RPG::SaveActor::SetAutoBattle(bool auto_battle) {
	setter<bool>("auto_battle", auto_battle);
}

bool RPG::SaveActor::GetSuperGuard() const {
	return getter<bool>("super_guard");
}

void RPG::SaveActor::SetSuperGuard(bool super_guard) {
	setter<bool>("super_guard", super_guard);
}

const int32_t& RPG::SaveActor::GetBattlerAnimation() const {
	return getter<const int32_t&>("battler_animation");
}

int32_t& RPG::SaveActor::GetBattlerAnimation() {
	return getter<int32_t&>("battler_animation");
}

void RPG::SaveActor::SetBattlerAnimation(const int32_t& battler_animation) {
	setter<int32_t>("battler_animation", battler_animation);
}

