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
#include "rpg_enemy.h"


const std::string& RPG::Enemy::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Enemy::GetName() {
	return getter<std::string&>("name");
}

void RPG::Enemy::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::Enemy::GetBattlerName() const {
	return getter<const std::string&>("battler_name");
}

std::string& RPG::Enemy::GetBattlerName() {
	return getter<std::string&>("battler_name");
}

void RPG::Enemy::SetBattlerName(const std::string& battler_name) {
	setter<std::string>("battler_name", battler_name);
}

int32_t RPG::Enemy::GetBattlerHue() const {
	return getter<int32_t>("battler_hue");
}

void RPG::Enemy::SetBattlerHue(int32_t battler_hue) {
	setter<int32_t>("battler_hue", battler_hue);
}

int32_t RPG::Enemy::GetMaxHp() const {
	return getter<int32_t>("max_hp");
}

void RPG::Enemy::SetMaxHp(int32_t max_hp) {
	setter<int32_t>("max_hp", max_hp);
}

int32_t RPG::Enemy::GetMaxSp() const {
	return getter<int32_t>("max_sp");
}

void RPG::Enemy::SetMaxSp(int32_t max_sp) {
	setter<int32_t>("max_sp", max_sp);
}

int32_t RPG::Enemy::GetAttack() const {
	return getter<int32_t>("attack");
}

void RPG::Enemy::SetAttack(int32_t attack) {
	setter<int32_t>("attack", attack);
}

int32_t RPG::Enemy::GetDefense() const {
	return getter<int32_t>("defense");
}

void RPG::Enemy::SetDefense(int32_t defense) {
	setter<int32_t>("defense", defense);
}

int32_t RPG::Enemy::GetSpirit() const {
	return getter<int32_t>("spirit");
}

void RPG::Enemy::SetSpirit(int32_t spirit) {
	setter<int32_t>("spirit", spirit);
}

int32_t RPG::Enemy::GetAgility() const {
	return getter<int32_t>("agility");
}

void RPG::Enemy::SetAgility(int32_t agility) {
	setter<int32_t>("agility", agility);
}

bool RPG::Enemy::GetTransparent() const {
	return getter<bool>("transparent");
}

void RPG::Enemy::SetTransparent(bool transparent) {
	setter<bool>("transparent", transparent);
}

int32_t RPG::Enemy::GetExp() const {
	return getter<int32_t>("exp");
}

void RPG::Enemy::SetExp(int32_t exp) {
	setter<int32_t>("exp", exp);
}

int32_t RPG::Enemy::GetGold() const {
	return getter<int32_t>("gold");
}

void RPG::Enemy::SetGold(int32_t gold) {
	setter<int32_t>("gold", gold);
}

const int32_t& RPG::Enemy::GetDropId() const {
	return getter<const int32_t&>("drop_id");
}

int32_t& RPG::Enemy::GetDropId() {
	return getter<int32_t&>("drop_id");
}

void RPG::Enemy::SetDropId(const int32_t& drop_id) {
	setter<int32_t>("drop_id", drop_id);
}

int32_t RPG::Enemy::GetDropProb() const {
	return getter<int32_t>("drop_prob");
}

void RPG::Enemy::SetDropProb(int32_t drop_prob) {
	setter<int32_t>("drop_prob", drop_prob);
}

bool RPG::Enemy::GetCriticalHit() const {
	return getter<bool>("critical_hit");
}

void RPG::Enemy::SetCriticalHit(bool critical_hit) {
	setter<bool>("critical_hit", critical_hit);
}

int32_t RPG::Enemy::GetCriticalHitChance() const {
	return getter<int32_t>("critical_hit_chance");
}

void RPG::Enemy::SetCriticalHitChance(int32_t critical_hit_chance) {
	setter<int32_t>("critical_hit_chance", critical_hit_chance);
}

bool RPG::Enemy::GetMiss() const {
	return getter<bool>("miss");
}

void RPG::Enemy::SetMiss(bool miss) {
	setter<bool>("miss", miss);
}

bool RPG::Enemy::GetLevitate() const {
	return getter<bool>("levitate");
}

void RPG::Enemy::SetLevitate(bool levitate) {
	setter<bool>("levitate", levitate);
}


const std::vector<uint8_t>& RPG::Enemy::GetStateRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("state_ranks");
}

std::vector<uint8_t>& RPG::Enemy::GetStateRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("state_ranks");
}


const std::vector<uint8_t>& RPG::Enemy::GetAttributeRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

std::vector<uint8_t>& RPG::Enemy::GetAttributeRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

const std::vector<RPG::EnemyAction>& RPG::Enemy::GetActions() const {
	return vector_getter<const std::vector<RPG::EnemyAction>&, RPG::EnemyAction>("actions");
}

std::vector<RPG::EnemyAction>& RPG::Enemy::GetActions() {
	return vector_getter<std::vector<RPG::EnemyAction>&, RPG::EnemyAction>("actions");
}

