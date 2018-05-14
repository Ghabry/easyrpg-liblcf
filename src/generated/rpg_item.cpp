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
#include "rpg_item.h"


const std::string& RPG::Item::GetName() const  {
	return name;
}

std::string& RPG::Item::GetName() {
	return name;
}

void RPG::Item::SetName(const std::string& name) {
	this->name = name;
}

const std::string& RPG::Item::GetDescription() const  {
	return description;
}

std::string& RPG::Item::GetDescription() {
	return description;
}

void RPG::Item::SetDescription(const std::string& description) {
	this->description = description;
}

const int32_t& RPG::Item::GetType() const  {
	return type;
}

int32_t& RPG::Item::GetType() {
	return type;
}

void RPG::Item::SetType(const int32_t& type) {
	this->type = type;
}

int32_t RPG::Item::GetPrice() const {
	return price;
}

void RPG::Item::SetPrice(int32_t price) {
	this->price = price;
}

int32_t RPG::Item::GetUses() const {
	return uses;
}

void RPG::Item::SetUses(int32_t uses) {
	this->uses = uses;
}

int32_t RPG::Item::GetAtkPoints1() const {
	return atk_points1;
}

void RPG::Item::SetAtkPoints1(int32_t atk_points1) {
	this->atk_points1 = atk_points1;
}

int32_t RPG::Item::GetDefPoints1() const {
	return def_points1;
}

void RPG::Item::SetDefPoints1(int32_t def_points1) {
	this->def_points1 = def_points1;
}

int32_t RPG::Item::GetSpiPoints1() const {
	return spi_points1;
}

void RPG::Item::SetSpiPoints1(int32_t spi_points1) {
	this->spi_points1 = spi_points1;
}

int32_t RPG::Item::GetAgiPoints1() const {
	return agi_points1;
}

void RPG::Item::SetAgiPoints1(int32_t agi_points1) {
	this->agi_points1 = agi_points1;
}

bool RPG::Item::GetTwoHanded() const {
	return two_handed;
}

void RPG::Item::SetTwoHanded(bool two_handed) {
	this->two_handed = two_handed;
}

int32_t RPG::Item::GetSpCost() const {
	return sp_cost;
}

void RPG::Item::SetSpCost(int32_t sp_cost) {
	this->sp_cost = sp_cost;
}

int32_t RPG::Item::GetHit() const {
	return hit;
}

void RPG::Item::SetHit(int32_t hit) {
	this->hit = hit;
}

int32_t RPG::Item::GetCriticalHit() const {
	return critical_hit;
}

void RPG::Item::SetCriticalHit(int32_t critical_hit) {
	this->critical_hit = critical_hit;
}

const int32_t& RPG::Item::GetAnimationId() const  {
	return animation_id;
}

int32_t& RPG::Item::GetAnimationId() {
	return animation_id;
}

void RPG::Item::SetAnimationId(const int32_t& animation_id) {
	this->animation_id = animation_id;
}

bool RPG::Item::GetPreemptive() const {
	return preemptive;
}

void RPG::Item::SetPreemptive(bool preemptive) {
	this->preemptive = preemptive;
}

bool RPG::Item::GetDualAttack() const {
	return dual_attack;
}

void RPG::Item::SetDualAttack(bool dual_attack) {
	this->dual_attack = dual_attack;
}

bool RPG::Item::GetAttackAll() const {
	return attack_all;
}

void RPG::Item::SetAttackAll(bool attack_all) {
	this->attack_all = attack_all;
}

bool RPG::Item::GetIgnoreEvasion() const {
	return ignore_evasion;
}

void RPG::Item::SetIgnoreEvasion(bool ignore_evasion) {
	this->ignore_evasion = ignore_evasion;
}

bool RPG::Item::GetPreventCritical() const {
	return prevent_critical;
}

void RPG::Item::SetPreventCritical(bool prevent_critical) {
	this->prevent_critical = prevent_critical;
}

bool RPG::Item::GetRaiseEvasion() const {
	return raise_evasion;
}

void RPG::Item::SetRaiseEvasion(bool raise_evasion) {
	this->raise_evasion = raise_evasion;
}

bool RPG::Item::GetHalfSpCost() const {
	return half_sp_cost;
}

void RPG::Item::SetHalfSpCost(bool half_sp_cost) {
	this->half_sp_cost = half_sp_cost;
}

bool RPG::Item::GetNoTerrainDamage() const {
	return no_terrain_damage;
}

void RPG::Item::SetNoTerrainDamage(bool no_terrain_damage) {
	this->no_terrain_damage = no_terrain_damage;
}

bool RPG::Item::GetCursed() const {
	return cursed;
}

void RPG::Item::SetCursed(bool cursed) {
	this->cursed = cursed;
}

bool RPG::Item::GetEntireParty() const {
	return entire_party;
}

void RPG::Item::SetEntireParty(bool entire_party) {
	this->entire_party = entire_party;
}

int32_t RPG::Item::GetRecoverHpRate() const {
	return recover_hp_rate;
}

void RPG::Item::SetRecoverHpRate(int32_t recover_hp_rate) {
	this->recover_hp_rate = recover_hp_rate;
}

int32_t RPG::Item::GetRecoverHp() const {
	return recover_hp;
}

void RPG::Item::SetRecoverHp(int32_t recover_hp) {
	this->recover_hp = recover_hp;
}

int32_t RPG::Item::GetRecoverSpRate() const {
	return recover_sp_rate;
}

void RPG::Item::SetRecoverSpRate(int32_t recover_sp_rate) {
	this->recover_sp_rate = recover_sp_rate;
}

int32_t RPG::Item::GetRecoverSp() const {
	return recover_sp;
}

void RPG::Item::SetRecoverSp(int32_t recover_sp) {
	this->recover_sp = recover_sp;
}

bool RPG::Item::GetOccasionField1() const {
	return occasion_field1;
}

void RPG::Item::SetOccasionField1(bool occasion_field1) {
	this->occasion_field1 = occasion_field1;
}

bool RPG::Item::GetKoOnly() const {
	return ko_only;
}

void RPG::Item::SetKoOnly(bool ko_only) {
	this->ko_only = ko_only;
}

int32_t RPG::Item::GetMaxHpPoints() const {
	return max_hp_points;
}

void RPG::Item::SetMaxHpPoints(int32_t max_hp_points) {
	this->max_hp_points = max_hp_points;
}

int32_t RPG::Item::GetMaxSpPoints() const {
	return max_sp_points;
}

void RPG::Item::SetMaxSpPoints(int32_t max_sp_points) {
	this->max_sp_points = max_sp_points;
}

int32_t RPG::Item::GetAtkPoints2() const {
	return atk_points2;
}

void RPG::Item::SetAtkPoints2(int32_t atk_points2) {
	this->atk_points2 = atk_points2;
}

int32_t RPG::Item::GetDefPoints2() const {
	return def_points2;
}

void RPG::Item::SetDefPoints2(int32_t def_points2) {
	this->def_points2 = def_points2;
}

int32_t RPG::Item::GetSpiPoints2() const {
	return spi_points2;
}

void RPG::Item::SetSpiPoints2(int32_t spi_points2) {
	this->spi_points2 = spi_points2;
}

int32_t RPG::Item::GetAgiPoints2() const {
	return agi_points2;
}

void RPG::Item::SetAgiPoints2(int32_t agi_points2) {
	this->agi_points2 = agi_points2;
}

int32_t RPG::Item::GetUsingMessage() const {
	return using_message;
}

void RPG::Item::SetUsingMessage(int32_t using_message) {
	this->using_message = using_message;
}

const int32_t& RPG::Item::GetSkillId() const  {
	return skill_id;
}

int32_t& RPG::Item::GetSkillId() {
	return skill_id;
}

void RPG::Item::SetSkillId(const int32_t& skill_id) {
	this->skill_id = skill_id;
}

const int32_t& RPG::Item::GetSwitchId() const  {
	return switch_id;
}

int32_t& RPG::Item::GetSwitchId() {
	return switch_id;
}

void RPG::Item::SetSwitchId(const int32_t& switch_id) {
	this->switch_id = switch_id;
}

bool RPG::Item::GetOccasionField2() const {
	return occasion_field2;
}

void RPG::Item::SetOccasionField2(bool occasion_field2) {
	this->occasion_field2 = occasion_field2;
}

bool RPG::Item::GetOccasionBattle() const {
	return occasion_battle;
}

void RPG::Item::SetOccasionBattle(bool occasion_battle) {
	this->occasion_battle = occasion_battle;
}


const std::vector<bool>& RPG::Item::GetActorSet() const  {
	return actor_set;
}

std::vector<bool>& RPG::Item::GetActorSet() {
	return actor_set;
}


const std::vector<bool>& RPG::Item::GetStateSet() const  {
	return state_set;
}

std::vector<bool>& RPG::Item::GetStateSet() {
	return state_set;
}


const std::vector<bool>& RPG::Item::GetAttributeSet() const  {
	return attribute_set;
}

std::vector<bool>& RPG::Item::GetAttributeSet() {
	return attribute_set;
}

int32_t RPG::Item::GetStateChance() const {
	return state_chance;
}

void RPG::Item::SetStateChance(int32_t state_chance) {
	this->state_chance = state_chance;
}

bool RPG::Item::GetStateEffect() const {
	return state_effect;
}

void RPG::Item::SetStateEffect(bool state_effect) {
	this->state_effect = state_effect;
}

const int32_t& RPG::Item::GetWeaponAnimation() const  {
	return weapon_animation;
}

int32_t& RPG::Item::GetWeaponAnimation() {
	return weapon_animation;
}

void RPG::Item::SetWeaponAnimation(const int32_t& weapon_animation) {
	this->weapon_animation = weapon_animation;
}

const std::vector<RPG::ItemAnimation>& RPG::Item::GetAnimationData() const  {
	return animation_data;
}

std::vector<RPG::ItemAnimation>& RPG::Item::GetAnimationData() {
	return animation_data;
}

bool RPG::Item::GetUseSkill() const {
	return use_skill;
}

void RPG::Item::SetUseSkill(bool use_skill) {
	this->use_skill = use_skill;
}


const std::vector<bool>& RPG::Item::GetClassSet() const  {
	return class_set;
}

std::vector<bool>& RPG::Item::GetClassSet() {
	return class_set;
}

const int32_t& RPG::Item::GetRangedTrajectory() const  {
	return ranged_trajectory;
}

int32_t& RPG::Item::GetRangedTrajectory() {
	return ranged_trajectory;
}

void RPG::Item::SetRangedTrajectory(const int32_t& ranged_trajectory) {
	this->ranged_trajectory = ranged_trajectory;
}

const int32_t& RPG::Item::GetRangedTarget() const  {
	return ranged_target;
}

int32_t& RPG::Item::GetRangedTarget() {
	return ranged_target;
}

void RPG::Item::SetRangedTarget(const int32_t& ranged_target) {
	this->ranged_target = ranged_target;
}

