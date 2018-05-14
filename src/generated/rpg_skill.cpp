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
#include "rpg_skill.h"


const std::string& RPG::Skill::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Skill::GetName() {
	return getter<std::string&>("name");
}

void RPG::Skill::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::Skill::GetDescription() const {
	return getter<const std::string&>("description");
}

std::string& RPG::Skill::GetDescription() {
	return getter<std::string&>("description");
}

void RPG::Skill::SetDescription(const std::string& description) {
	setter<std::string>("description", description);
}

const std::string& RPG::Skill::GetUsingMessage1() const {
	return getter<const std::string&>("using_message1");
}

std::string& RPG::Skill::GetUsingMessage1() {
	return getter<std::string&>("using_message1");
}

void RPG::Skill::SetUsingMessage1(const std::string& using_message1) {
	setter<std::string>("using_message1", using_message1);
}

const std::string& RPG::Skill::GetUsingMessage2() const {
	return getter<const std::string&>("using_message2");
}

std::string& RPG::Skill::GetUsingMessage2() {
	return getter<std::string&>("using_message2");
}

void RPG::Skill::SetUsingMessage2(const std::string& using_message2) {
	setter<std::string>("using_message2", using_message2);
}

int32_t RPG::Skill::GetFailureMessage() const {
	return getter<int32_t>("failure_message");
}

void RPG::Skill::SetFailureMessage(int32_t failure_message) {
	setter<int32_t>("failure_message", failure_message);
}

const int32_t& RPG::Skill::GetType() const {
	return getter<const int32_t&>("type");
}

int32_t& RPG::Skill::GetType() {
	return getter<int32_t&>("type");
}

void RPG::Skill::SetType(const int32_t& type) {
	setter<int32_t>("type", type);
}

const int32_t& RPG::Skill::GetSpType() const {
	return getter<const int32_t&>("sp_type");
}

int32_t& RPG::Skill::GetSpType() {
	return getter<int32_t&>("sp_type");
}

void RPG::Skill::SetSpType(const int32_t& sp_type) {
	setter<int32_t>("sp_type", sp_type);
}

int32_t RPG::Skill::GetSpPercent() const {
	return getter<int32_t>("sp_percent");
}

void RPG::Skill::SetSpPercent(int32_t sp_percent) {
	setter<int32_t>("sp_percent", sp_percent);
}

int32_t RPG::Skill::GetSpCost() const {
	return getter<int32_t>("sp_cost");
}

void RPG::Skill::SetSpCost(int32_t sp_cost) {
	setter<int32_t>("sp_cost", sp_cost);
}

const int32_t& RPG::Skill::GetScope() const {
	return getter<const int32_t&>("scope");
}

int32_t& RPG::Skill::GetScope() {
	return getter<int32_t&>("scope");
}

void RPG::Skill::SetScope(const int32_t& scope) {
	setter<int32_t>("scope", scope);
}

const int32_t& RPG::Skill::GetSwitchId() const {
	return getter<const int32_t&>("switch_id");
}

int32_t& RPG::Skill::GetSwitchId() {
	return getter<int32_t&>("switch_id");
}

void RPG::Skill::SetSwitchId(const int32_t& switch_id) {
	setter<int32_t>("switch_id", switch_id);
}

const int32_t& RPG::Skill::GetAnimationId() const {
	return getter<const int32_t&>("animation_id");
}

int32_t& RPG::Skill::GetAnimationId() {
	return getter<int32_t&>("animation_id");
}

void RPG::Skill::SetAnimationId(const int32_t& animation_id) {
	setter<int32_t>("animation_id", animation_id);
}

const RPG::Sound& RPG::Skill::GetSoundEffect() const {
	return getter<const RPG::Sound&>("sound_effect");
}

RPG::Sound& RPG::Skill::GetSoundEffect() {
	return getter<RPG::Sound&>("sound_effect");
}

void RPG::Skill::SetSoundEffect(const RPG::Sound& sound_effect) {
	setter<RPG::Sound>("sound_effect", sound_effect);
}

bool RPG::Skill::GetOccasionField() const {
	return getter<bool>("occasion_field");
}

void RPG::Skill::SetOccasionField(bool occasion_field) {
	setter<bool>("occasion_field", occasion_field);
}

bool RPG::Skill::GetOccasionBattle() const {
	return getter<bool>("occasion_battle");
}

void RPG::Skill::SetOccasionBattle(bool occasion_battle) {
	setter<bool>("occasion_battle", occasion_battle);
}

bool RPG::Skill::GetStateEffect() const {
	return getter<bool>("state_effect");
}

void RPG::Skill::SetStateEffect(bool state_effect) {
	setter<bool>("state_effect", state_effect);
}

int32_t RPG::Skill::GetPhysicalRate() const {
	return getter<int32_t>("physical_rate");
}

void RPG::Skill::SetPhysicalRate(int32_t physical_rate) {
	setter<int32_t>("physical_rate", physical_rate);
}

int32_t RPG::Skill::GetMagicalRate() const {
	return getter<int32_t>("magical_rate");
}

void RPG::Skill::SetMagicalRate(int32_t magical_rate) {
	setter<int32_t>("magical_rate", magical_rate);
}

int32_t RPG::Skill::GetVariance() const {
	return getter<int32_t>("variance");
}

void RPG::Skill::SetVariance(int32_t variance) {
	setter<int32_t>("variance", variance);
}

int32_t RPG::Skill::GetPower() const {
	return getter<int32_t>("power");
}

void RPG::Skill::SetPower(int32_t power) {
	setter<int32_t>("power", power);
}

int32_t RPG::Skill::GetHit() const {
	return getter<int32_t>("hit");
}

void RPG::Skill::SetHit(int32_t hit) {
	setter<int32_t>("hit", hit);
}

bool RPG::Skill::GetAffectHp() const {
	return getter<bool>("affect_hp");
}

void RPG::Skill::SetAffectHp(bool affect_hp) {
	setter<bool>("affect_hp", affect_hp);
}

bool RPG::Skill::GetAffectSp() const {
	return getter<bool>("affect_sp");
}

void RPG::Skill::SetAffectSp(bool affect_sp) {
	setter<bool>("affect_sp", affect_sp);
}

bool RPG::Skill::GetAffectAttack() const {
	return getter<bool>("affect_attack");
}

void RPG::Skill::SetAffectAttack(bool affect_attack) {
	setter<bool>("affect_attack", affect_attack);
}

bool RPG::Skill::GetAffectDefense() const {
	return getter<bool>("affect_defense");
}

void RPG::Skill::SetAffectDefense(bool affect_defense) {
	setter<bool>("affect_defense", affect_defense);
}

bool RPG::Skill::GetAffectSpirit() const {
	return getter<bool>("affect_spirit");
}

void RPG::Skill::SetAffectSpirit(bool affect_spirit) {
	setter<bool>("affect_spirit", affect_spirit);
}

bool RPG::Skill::GetAffectAgility() const {
	return getter<bool>("affect_agility");
}

void RPG::Skill::SetAffectAgility(bool affect_agility) {
	setter<bool>("affect_agility", affect_agility);
}

bool RPG::Skill::GetAbsorbDamage() const {
	return getter<bool>("absorb_damage");
}

void RPG::Skill::SetAbsorbDamage(bool absorb_damage) {
	setter<bool>("absorb_damage", absorb_damage);
}

bool RPG::Skill::GetIgnoreDefense() const {
	return getter<bool>("ignore_defense");
}

void RPG::Skill::SetIgnoreDefense(bool ignore_defense) {
	setter<bool>("ignore_defense", ignore_defense);
}


const std::vector<bool>& RPG::Skill::GetStateEffects() const {
	return vector_getter<const std::vector<bool>&, bool>("state_effects");
}

std::vector<bool>& RPG::Skill::GetStateEffects() {
	return vector_getter<std::vector<bool>&, bool>("state_effects");
}


const std::vector<bool>& RPG::Skill::GetAttributeEffects() const {
	return vector_getter<const std::vector<bool>&, bool>("attribute_effects");
}

std::vector<bool>& RPG::Skill::GetAttributeEffects() {
	return vector_getter<std::vector<bool>&, bool>("attribute_effects");
}

bool RPG::Skill::GetAffectAttrDefence() const {
	return getter<bool>("affect_attr_defence");
}

void RPG::Skill::SetAffectAttrDefence(bool affect_attr_defence) {
	setter<bool>("affect_attr_defence", affect_attr_defence);
}

const int32_t& RPG::Skill::GetBattlerAnimation() const {
	return getter<const int32_t&>("battler_animation");
}

int32_t& RPG::Skill::GetBattlerAnimation() {
	return getter<int32_t&>("battler_animation");
}

void RPG::Skill::SetBattlerAnimation(const int32_t& battler_animation) {
	setter<int32_t>("battler_animation", battler_animation);
}

const std::vector<RPG::BattlerAnimationData>& RPG::Skill::GetBattlerAnimationData() const {
	return vector_getter<const std::vector<RPG::BattlerAnimationData>&, RPG::BattlerAnimationData>("battler_animation_data");
}

std::vector<RPG::BattlerAnimationData>& RPG::Skill::GetBattlerAnimationData() {
	return vector_getter<std::vector<RPG::BattlerAnimationData>&, RPG::BattlerAnimationData>("battler_animation_data");
}

