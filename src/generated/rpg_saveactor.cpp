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


const std::string& RPG::SaveActor::GetName() const  {
	return name;
}

std::string& RPG::SaveActor::GetName() {
	return name;
}

void RPG::SaveActor::SetName(const std::string& name) {
	this->name = name;
}

const std::string& RPG::SaveActor::GetTitle() const  {
	return title;
}

std::string& RPG::SaveActor::GetTitle() {
	return title;
}

void RPG::SaveActor::SetTitle(const std::string& title) {
	this->title = title;
}

const std::string& RPG::SaveActor::GetSpriteName() const  {
	return sprite_name;
}

std::string& RPG::SaveActor::GetSpriteName() {
	return sprite_name;
}

void RPG::SaveActor::SetSpriteName(const std::string& sprite_name) {
	this->sprite_name = sprite_name;
}

int32_t RPG::SaveActor::GetSpriteId() const {
	return sprite_id;
}

void RPG::SaveActor::SetSpriteId(int32_t sprite_id) {
	this->sprite_id = sprite_id;
}

int32_t RPG::SaveActor::GetSpriteFlags() const {
	return sprite_flags;
}

void RPG::SaveActor::SetSpriteFlags(int32_t sprite_flags) {
	this->sprite_flags = sprite_flags;
}

const std::string& RPG::SaveActor::GetFaceName() const  {
	return face_name;
}

std::string& RPG::SaveActor::GetFaceName() {
	return face_name;
}

void RPG::SaveActor::SetFaceName(const std::string& face_name) {
	this->face_name = face_name;
}

int32_t RPG::SaveActor::GetFaceId() const {
	return face_id;
}

void RPG::SaveActor::SetFaceId(int32_t face_id) {
	this->face_id = face_id;
}

int32_t RPG::SaveActor::GetLevel() const {
	return level;
}

void RPG::SaveActor::SetLevel(int32_t level) {
	this->level = level;
}

int32_t RPG::SaveActor::GetExp() const {
	return exp;
}

void RPG::SaveActor::SetExp(int32_t exp) {
	this->exp = exp;
}

int32_t RPG::SaveActor::GetHpMod() const {
	return hp_mod;
}

void RPG::SaveActor::SetHpMod(int32_t hp_mod) {
	this->hp_mod = hp_mod;
}

int32_t RPG::SaveActor::GetSpMod() const {
	return sp_mod;
}

void RPG::SaveActor::SetSpMod(int32_t sp_mod) {
	this->sp_mod = sp_mod;
}

int32_t RPG::SaveActor::GetAttackMod() const {
	return attack_mod;
}

void RPG::SaveActor::SetAttackMod(int32_t attack_mod) {
	this->attack_mod = attack_mod;
}

int32_t RPG::SaveActor::GetDefenseMod() const {
	return defense_mod;
}

void RPG::SaveActor::SetDefenseMod(int32_t defense_mod) {
	this->defense_mod = defense_mod;
}

int32_t RPG::SaveActor::GetSpiritMod() const {
	return spirit_mod;
}

void RPG::SaveActor::SetSpiritMod(int32_t spirit_mod) {
	this->spirit_mod = spirit_mod;
}

int32_t RPG::SaveActor::GetAgilityMod() const {
	return agility_mod;
}

void RPG::SaveActor::SetAgilityMod(int32_t agility_mod) {
	this->agility_mod = agility_mod;
}

int32_t RPG::SaveActor::GetSkillsSize() const {
	return skills_size;
}

void RPG::SaveActor::SetSkillsSize(int32_t skills_size) {
	this->skills_size = skills_size;
}

const std::vector<int16_t>& RPG::SaveActor::GetSkills() const  {
	return skills;
}

std::vector<int16_t>& RPG::SaveActor::GetSkills() {
	return skills;
}

const std::vector<int16_t>& RPG::SaveActor::GetEquipped() const  {
	return equipped;
}

std::vector<int16_t>& RPG::SaveActor::GetEquipped() {
	return equipped;
}

int32_t RPG::SaveActor::GetCurrentHp() const {
	return current_hp;
}

void RPG::SaveActor::SetCurrentHp(int32_t current_hp) {
	this->current_hp = current_hp;
}

int32_t RPG::SaveActor::GetCurrentSp() const {
	return current_sp;
}

void RPG::SaveActor::SetCurrentSp(int32_t current_sp) {
	this->current_sp = current_sp;
}

const std::vector<int32_t>& RPG::SaveActor::GetBattleCommands() const  {
	return battle_commands;
}

std::vector<int32_t>& RPG::SaveActor::GetBattleCommands() {
	return battle_commands;
}

int32_t RPG::SaveActor::GetStatusSize() const {
	return status_size;
}

void RPG::SaveActor::SetStatusSize(int32_t status_size) {
	this->status_size = status_size;
}

const std::vector<int16_t>& RPG::SaveActor::GetStatus() const  {
	return status;
}

std::vector<int16_t>& RPG::SaveActor::GetStatus() {
	return status;
}

bool RPG::SaveActor::GetChangedBattleCommands() const {
	return changed_battle_commands;
}

void RPG::SaveActor::SetChangedBattleCommands(bool changed_battle_commands) {
	this->changed_battle_commands = changed_battle_commands;
}

const int32_t& RPG::SaveActor::GetClassId() const  {
	return class_id;
}

int32_t& RPG::SaveActor::GetClassId() {
	return class_id;
}

void RPG::SaveActor::SetClassId(const int32_t& class_id) {
	this->class_id = class_id;
}

int32_t RPG::SaveActor::GetRow() const {
	return row;
}

void RPG::SaveActor::SetRow(int32_t row) {
	this->row = row;
}

bool RPG::SaveActor::GetTwoWeapon() const {
	return two_weapon;
}

void RPG::SaveActor::SetTwoWeapon(bool two_weapon) {
	this->two_weapon = two_weapon;
}

bool RPG::SaveActor::GetLockEquipment() const {
	return lock_equipment;
}

void RPG::SaveActor::SetLockEquipment(bool lock_equipment) {
	this->lock_equipment = lock_equipment;
}

bool RPG::SaveActor::GetAutoBattle() const {
	return auto_battle;
}

void RPG::SaveActor::SetAutoBattle(bool auto_battle) {
	this->auto_battle = auto_battle;
}

bool RPG::SaveActor::GetSuperGuard() const {
	return super_guard;
}

void RPG::SaveActor::SetSuperGuard(bool super_guard) {
	this->super_guard = super_guard;
}

const int32_t& RPG::SaveActor::GetBattlerAnimation() const  {
	return battler_animation;
}

int32_t& RPG::SaveActor::GetBattlerAnimation() {
	return battler_animation;
}

void RPG::SaveActor::SetBattlerAnimation(const int32_t& battler_animation) {
	this->battler_animation = battler_animation;
}

