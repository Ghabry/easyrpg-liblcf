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
#include "rpg_state.h"


const std::string& RPG::State::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::State::GetName() {
	return getter<std::string&>("name");
}

void RPG::State::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const int32_t& RPG::State::GetType() const {
	return getter<const int32_t&>("type");
}

int32_t& RPG::State::GetType() {
	return getter<int32_t&>("type");
}

void RPG::State::SetType(const int32_t& type) {
	setter<int32_t>("type", type);
}

int32_t RPG::State::GetColor() const {
	return getter<int32_t>("color");
}

void RPG::State::SetColor(int32_t color) {
	setter<int32_t>("color", color);
}

int32_t RPG::State::GetPriority() const {
	return getter<int32_t>("priority");
}

void RPG::State::SetPriority(int32_t priority) {
	setter<int32_t>("priority", priority);
}

const int32_t& RPG::State::GetRestriction() const {
	return getter<const int32_t&>("restriction");
}

int32_t& RPG::State::GetRestriction() {
	return getter<int32_t&>("restriction");
}

void RPG::State::SetRestriction(const int32_t& restriction) {
	setter<int32_t>("restriction", restriction);
}

int32_t RPG::State::GetARate() const {
	return getter<int32_t>("a_rate");
}

void RPG::State::SetARate(int32_t a_rate) {
	setter<int32_t>("a_rate", a_rate);
}

int32_t RPG::State::GetBRate() const {
	return getter<int32_t>("b_rate");
}

void RPG::State::SetBRate(int32_t b_rate) {
	setter<int32_t>("b_rate", b_rate);
}

int32_t RPG::State::GetCRate() const {
	return getter<int32_t>("c_rate");
}

void RPG::State::SetCRate(int32_t c_rate) {
	setter<int32_t>("c_rate", c_rate);
}

int32_t RPG::State::GetDRate() const {
	return getter<int32_t>("d_rate");
}

void RPG::State::SetDRate(int32_t d_rate) {
	setter<int32_t>("d_rate", d_rate);
}

int32_t RPG::State::GetERate() const {
	return getter<int32_t>("e_rate");
}

void RPG::State::SetERate(int32_t e_rate) {
	setter<int32_t>("e_rate", e_rate);
}

int32_t RPG::State::GetHoldTurn() const {
	return getter<int32_t>("hold_turn");
}

void RPG::State::SetHoldTurn(int32_t hold_turn) {
	setter<int32_t>("hold_turn", hold_turn);
}

int32_t RPG::State::GetAutoReleaseProb() const {
	return getter<int32_t>("auto_release_prob");
}

void RPG::State::SetAutoReleaseProb(int32_t auto_release_prob) {
	setter<int32_t>("auto_release_prob", auto_release_prob);
}

int32_t RPG::State::GetReleaseByDamage() const {
	return getter<int32_t>("release_by_damage");
}

void RPG::State::SetReleaseByDamage(int32_t release_by_damage) {
	setter<int32_t>("release_by_damage", release_by_damage);
}

const int32_t& RPG::State::GetAffectType() const {
	return getter<const int32_t&>("affect_type");
}

int32_t& RPG::State::GetAffectType() {
	return getter<int32_t&>("affect_type");
}

void RPG::State::SetAffectType(const int32_t& affect_type) {
	setter<int32_t>("affect_type", affect_type);
}

bool RPG::State::GetAffectAttack() const {
	return getter<bool>("affect_attack");
}

void RPG::State::SetAffectAttack(bool affect_attack) {
	setter<bool>("affect_attack", affect_attack);
}

bool RPG::State::GetAffectDefense() const {
	return getter<bool>("affect_defense");
}

void RPG::State::SetAffectDefense(bool affect_defense) {
	setter<bool>("affect_defense", affect_defense);
}

bool RPG::State::GetAffectSpirit() const {
	return getter<bool>("affect_spirit");
}

void RPG::State::SetAffectSpirit(bool affect_spirit) {
	setter<bool>("affect_spirit", affect_spirit);
}

bool RPG::State::GetAffectAgility() const {
	return getter<bool>("affect_agility");
}

void RPG::State::SetAffectAgility(bool affect_agility) {
	setter<bool>("affect_agility", affect_agility);
}

int32_t RPG::State::GetReduceHitRatio() const {
	return getter<int32_t>("reduce_hit_ratio");
}

void RPG::State::SetReduceHitRatio(int32_t reduce_hit_ratio) {
	setter<int32_t>("reduce_hit_ratio", reduce_hit_ratio);
}

bool RPG::State::GetAvoidAttacks() const {
	return getter<bool>("avoid_attacks");
}

void RPG::State::SetAvoidAttacks(bool avoid_attacks) {
	setter<bool>("avoid_attacks", avoid_attacks);
}

bool RPG::State::GetReflectMagic() const {
	return getter<bool>("reflect_magic");
}

void RPG::State::SetReflectMagic(bool reflect_magic) {
	setter<bool>("reflect_magic", reflect_magic);
}

bool RPG::State::GetCursed() const {
	return getter<bool>("cursed");
}

void RPG::State::SetCursed(bool cursed) {
	setter<bool>("cursed", cursed);
}

const int32_t& RPG::State::GetBattlerAnimationId() const {
	return getter<const int32_t&>("battler_animation_id");
}

int32_t& RPG::State::GetBattlerAnimationId() {
	return getter<int32_t&>("battler_animation_id");
}

void RPG::State::SetBattlerAnimationId(const int32_t& battler_animation_id) {
	setter<int32_t>("battler_animation_id", battler_animation_id);
}

bool RPG::State::GetRestrictSkill() const {
	return getter<bool>("restrict_skill");
}

void RPG::State::SetRestrictSkill(bool restrict_skill) {
	setter<bool>("restrict_skill", restrict_skill);
}

int32_t RPG::State::GetRestrictSkillLevel() const {
	return getter<int32_t>("restrict_skill_level");
}

void RPG::State::SetRestrictSkillLevel(int32_t restrict_skill_level) {
	setter<int32_t>("restrict_skill_level", restrict_skill_level);
}

bool RPG::State::GetRestrictMagic() const {
	return getter<bool>("restrict_magic");
}

void RPG::State::SetRestrictMagic(bool restrict_magic) {
	setter<bool>("restrict_magic", restrict_magic);
}

int32_t RPG::State::GetRestrictMagicLevel() const {
	return getter<int32_t>("restrict_magic_level");
}

void RPG::State::SetRestrictMagicLevel(int32_t restrict_magic_level) {
	setter<int32_t>("restrict_magic_level", restrict_magic_level);
}

const int32_t& RPG::State::GetHpChangeType() const {
	return getter<const int32_t&>("hp_change_type");
}

int32_t& RPG::State::GetHpChangeType() {
	return getter<int32_t&>("hp_change_type");
}

void RPG::State::SetHpChangeType(const int32_t& hp_change_type) {
	setter<int32_t>("hp_change_type", hp_change_type);
}

const int32_t& RPG::State::GetSpChangeType() const {
	return getter<const int32_t&>("sp_change_type");
}

int32_t& RPG::State::GetSpChangeType() {
	return getter<int32_t&>("sp_change_type");
}

void RPG::State::SetSpChangeType(const int32_t& sp_change_type) {
	setter<int32_t>("sp_change_type", sp_change_type);
}

const std::string& RPG::State::GetMessageActor() const {
	return getter<const std::string&>("message_actor");
}

std::string& RPG::State::GetMessageActor() {
	return getter<std::string&>("message_actor");
}

void RPG::State::SetMessageActor(const std::string& message_actor) {
	setter<std::string>("message_actor", message_actor);
}

const std::string& RPG::State::GetMessageEnemy() const {
	return getter<const std::string&>("message_enemy");
}

std::string& RPG::State::GetMessageEnemy() {
	return getter<std::string&>("message_enemy");
}

void RPG::State::SetMessageEnemy(const std::string& message_enemy) {
	setter<std::string>("message_enemy", message_enemy);
}

const std::string& RPG::State::GetMessageAlready() const {
	return getter<const std::string&>("message_already");
}

std::string& RPG::State::GetMessageAlready() {
	return getter<std::string&>("message_already");
}

void RPG::State::SetMessageAlready(const std::string& message_already) {
	setter<std::string>("message_already", message_already);
}

const std::string& RPG::State::GetMessageAffected() const {
	return getter<const std::string&>("message_affected");
}

std::string& RPG::State::GetMessageAffected() {
	return getter<std::string&>("message_affected");
}

void RPG::State::SetMessageAffected(const std::string& message_affected) {
	setter<std::string>("message_affected", message_affected);
}

const std::string& RPG::State::GetMessageRecovery() const {
	return getter<const std::string&>("message_recovery");
}

std::string& RPG::State::GetMessageRecovery() {
	return getter<std::string&>("message_recovery");
}

void RPG::State::SetMessageRecovery(const std::string& message_recovery) {
	setter<std::string>("message_recovery", message_recovery);
}

int32_t RPG::State::GetHpChangeMax() const {
	return getter<int32_t>("hp_change_max");
}

void RPG::State::SetHpChangeMax(int32_t hp_change_max) {
	setter<int32_t>("hp_change_max", hp_change_max);
}

int32_t RPG::State::GetHpChangeVal() const {
	return getter<int32_t>("hp_change_val");
}

void RPG::State::SetHpChangeVal(int32_t hp_change_val) {
	setter<int32_t>("hp_change_val", hp_change_val);
}

int32_t RPG::State::GetHpChangeMapVal() const {
	return getter<int32_t>("hp_change_map_val");
}

void RPG::State::SetHpChangeMapVal(int32_t hp_change_map_val) {
	setter<int32_t>("hp_change_map_val", hp_change_map_val);
}

int32_t RPG::State::GetHpChangeMapSteps() const {
	return getter<int32_t>("hp_change_map_steps");
}

void RPG::State::SetHpChangeMapSteps(int32_t hp_change_map_steps) {
	setter<int32_t>("hp_change_map_steps", hp_change_map_steps);
}

int32_t RPG::State::GetSpChangeMax() const {
	return getter<int32_t>("sp_change_max");
}

void RPG::State::SetSpChangeMax(int32_t sp_change_max) {
	setter<int32_t>("sp_change_max", sp_change_max);
}

int32_t RPG::State::GetSpChangeVal() const {
	return getter<int32_t>("sp_change_val");
}

void RPG::State::SetSpChangeVal(int32_t sp_change_val) {
	setter<int32_t>("sp_change_val", sp_change_val);
}

int32_t RPG::State::GetSpChangeMapVal() const {
	return getter<int32_t>("sp_change_map_val");
}

void RPG::State::SetSpChangeMapVal(int32_t sp_change_map_val) {
	setter<int32_t>("sp_change_map_val", sp_change_map_val);
}

int32_t RPG::State::GetSpChangeMapSteps() const {
	return getter<int32_t>("sp_change_map_steps");
}

void RPG::State::SetSpChangeMapSteps(int32_t sp_change_map_steps) {
	setter<int32_t>("sp_change_map_steps", sp_change_map_steps);
}

