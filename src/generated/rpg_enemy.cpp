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


const std::string& RPG::Enemy::GetName() const  {
	return name;
}

std::string& RPG::Enemy::GetName() {
	return name;
}

void RPG::Enemy::SetName(const std::string& name) {
	this->name = name;
}

const std::string& RPG::Enemy::GetBattlerName() const  {
	return battler_name;
}

std::string& RPG::Enemy::GetBattlerName() {
	return battler_name;
}

void RPG::Enemy::SetBattlerName(const std::string& battler_name) {
	this->battler_name = battler_name;
}

int32_t RPG::Enemy::GetBattlerHue() const {
	return battler_hue;
}

void RPG::Enemy::SetBattlerHue(int32_t battler_hue) {
	this->battler_hue = battler_hue;
}

int32_t RPG::Enemy::GetMaxHp() const {
	return max_hp;
}

void RPG::Enemy::SetMaxHp(int32_t max_hp) {
	this->max_hp = max_hp;
}

int32_t RPG::Enemy::GetMaxSp() const {
	return max_sp;
}

void RPG::Enemy::SetMaxSp(int32_t max_sp) {
	this->max_sp = max_sp;
}

int32_t RPG::Enemy::GetAttack() const {
	return attack;
}

void RPG::Enemy::SetAttack(int32_t attack) {
	this->attack = attack;
}

int32_t RPG::Enemy::GetDefense() const {
	return defense;
}

void RPG::Enemy::SetDefense(int32_t defense) {
	this->defense = defense;
}

int32_t RPG::Enemy::GetSpirit() const {
	return spirit;
}

void RPG::Enemy::SetSpirit(int32_t spirit) {
	this->spirit = spirit;
}

int32_t RPG::Enemy::GetAgility() const {
	return agility;
}

void RPG::Enemy::SetAgility(int32_t agility) {
	this->agility = agility;
}

bool RPG::Enemy::GetTransparent() const {
	return transparent;
}

void RPG::Enemy::SetTransparent(bool transparent) {
	this->transparent = transparent;
}

int32_t RPG::Enemy::GetExp() const {
	return exp;
}

void RPG::Enemy::SetExp(int32_t exp) {
	this->exp = exp;
}

int32_t RPG::Enemy::GetGold() const {
	return gold;
}

void RPG::Enemy::SetGold(int32_t gold) {
	this->gold = gold;
}

const int32_t& RPG::Enemy::GetDropId() const  {
	return drop_id;
}

int32_t& RPG::Enemy::GetDropId() {
	return drop_id;
}

void RPG::Enemy::SetDropId(const int32_t& drop_id) {
	this->drop_id = drop_id;
}

int32_t RPG::Enemy::GetDropProb() const {
	return drop_prob;
}

void RPG::Enemy::SetDropProb(int32_t drop_prob) {
	this->drop_prob = drop_prob;
}

bool RPG::Enemy::GetCriticalHit() const {
	return critical_hit;
}

void RPG::Enemy::SetCriticalHit(bool critical_hit) {
	this->critical_hit = critical_hit;
}

int32_t RPG::Enemy::GetCriticalHitChance() const {
	return critical_hit_chance;
}

void RPG::Enemy::SetCriticalHitChance(int32_t critical_hit_chance) {
	this->critical_hit_chance = critical_hit_chance;
}

bool RPG::Enemy::GetMiss() const {
	return miss;
}

void RPG::Enemy::SetMiss(bool miss) {
	this->miss = miss;
}

bool RPG::Enemy::GetLevitate() const {
	return levitate;
}

void RPG::Enemy::SetLevitate(bool levitate) {
	this->levitate = levitate;
}


const std::vector<uint8_t>& RPG::Enemy::GetStateRanks() const  {
	return state_ranks;
}

std::vector<uint8_t>& RPG::Enemy::GetStateRanks() {
	return state_ranks;
}


const std::vector<uint8_t>& RPG::Enemy::GetAttributeRanks() const  {
	return attribute_ranks;
}

std::vector<uint8_t>& RPG::Enemy::GetAttributeRanks() {
	return attribute_ranks;
}

const std::vector<RPG::EnemyAction>& RPG::Enemy::GetActions() const  {
	return actions;
}

std::vector<RPG::EnemyAction>& RPG::Enemy::GetActions() {
	return actions;
}

