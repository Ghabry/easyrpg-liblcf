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


const std::string& RPG::Skill::GetName() const  {
	return name;
}

std::string& RPG::Skill::GetName() {
	return name;
}

void RPG::Skill::SetName(const std::string& name) {
	this->name = name;
}

const std::string& RPG::Skill::GetDescription() const  {
	return description;
}

std::string& RPG::Skill::GetDescription() {
	return description;
}

void RPG::Skill::SetDescription(const std::string& description) {
	this->description = description;
}

const std::string& RPG::Skill::GetUsingMessage1() const  {
	return using_message1;
}

std::string& RPG::Skill::GetUsingMessage1() {
	return using_message1;
}

void RPG::Skill::SetUsingMessage1(const std::string& using_message1) {
	this->using_message1 = using_message1;
}

const std::string& RPG::Skill::GetUsingMessage2() const  {
	return using_message2;
}

std::string& RPG::Skill::GetUsingMessage2() {
	return using_message2;
}

void RPG::Skill::SetUsingMessage2(const std::string& using_message2) {
	this->using_message2 = using_message2;
}

int32_t RPG::Skill::GetFailureMessage() const {
	return failure_message;
}

void RPG::Skill::SetFailureMessage(int32_t failure_message) {
	this->failure_message = failure_message;
}

const int32_t& RPG::Skill::GetType() const  {
	return type;
}

int32_t& RPG::Skill::GetType() {
	return type;
}

void RPG::Skill::SetType(const int32_t& type) {
	this->type = type;
}

const int32_t& RPG::Skill::GetSpType() const  {
	return sp_type;
}

int32_t& RPG::Skill::GetSpType() {
	return sp_type;
}

void RPG::Skill::SetSpType(const int32_t& sp_type) {
	this->sp_type = sp_type;
}

int32_t RPG::Skill::GetSpPercent() const {
	return sp_percent;
}

void RPG::Skill::SetSpPercent(int32_t sp_percent) {
	this->sp_percent = sp_percent;
}

int32_t RPG::Skill::GetSpCost() const {
	return sp_cost;
}

void RPG::Skill::SetSpCost(int32_t sp_cost) {
	this->sp_cost = sp_cost;
}

const int32_t& RPG::Skill::GetScope() const  {
	return scope;
}

int32_t& RPG::Skill::GetScope() {
	return scope;
}

void RPG::Skill::SetScope(const int32_t& scope) {
	this->scope = scope;
}

const int32_t& RPG::Skill::GetSwitchId() const  {
	return switch_id;
}

int32_t& RPG::Skill::GetSwitchId() {
	return switch_id;
}

void RPG::Skill::SetSwitchId(const int32_t& switch_id) {
	this->switch_id = switch_id;
}

const int32_t& RPG::Skill::GetAnimationId() const  {
	return animation_id;
}

int32_t& RPG::Skill::GetAnimationId() {
	return animation_id;
}

void RPG::Skill::SetAnimationId(const int32_t& animation_id) {
	this->animation_id = animation_id;
}

const RPG::Sound& RPG::Skill::GetSoundEffect() const  {
	return sound_effect;
}

RPG::Sound& RPG::Skill::GetSoundEffect() {
	return sound_effect;
}

void RPG::Skill::SetSoundEffect(const RPG::Sound& sound_effect) {
	this->sound_effect = sound_effect;
}

bool RPG::Skill::GetOccasionField() const {
	return occasion_field;
}

void RPG::Skill::SetOccasionField(bool occasion_field) {
	this->occasion_field = occasion_field;
}

bool RPG::Skill::GetOccasionBattle() const {
	return occasion_battle;
}

void RPG::Skill::SetOccasionBattle(bool occasion_battle) {
	this->occasion_battle = occasion_battle;
}

bool RPG::Skill::GetStateEffect() const {
	return state_effect;
}

void RPG::Skill::SetStateEffect(bool state_effect) {
	this->state_effect = state_effect;
}

int32_t RPG::Skill::GetPhysicalRate() const {
	return physical_rate;
}

void RPG::Skill::SetPhysicalRate(int32_t physical_rate) {
	this->physical_rate = physical_rate;
}

int32_t RPG::Skill::GetMagicalRate() const {
	return magical_rate;
}

void RPG::Skill::SetMagicalRate(int32_t magical_rate) {
	this->magical_rate = magical_rate;
}

int32_t RPG::Skill::GetVariance() const {
	return variance;
}

void RPG::Skill::SetVariance(int32_t variance) {
	this->variance = variance;
}

int32_t RPG::Skill::GetPower() const {
	return power;
}

void RPG::Skill::SetPower(int32_t power) {
	this->power = power;
}

int32_t RPG::Skill::GetHit() const {
	return hit;
}

void RPG::Skill::SetHit(int32_t hit) {
	this->hit = hit;
}

bool RPG::Skill::GetAffectHp() const {
	return affect_hp;
}

void RPG::Skill::SetAffectHp(bool affect_hp) {
	this->affect_hp = affect_hp;
}

bool RPG::Skill::GetAffectSp() const {
	return affect_sp;
}

void RPG::Skill::SetAffectSp(bool affect_sp) {
	this->affect_sp = affect_sp;
}

bool RPG::Skill::GetAffectAttack() const {
	return affect_attack;
}

void RPG::Skill::SetAffectAttack(bool affect_attack) {
	this->affect_attack = affect_attack;
}

bool RPG::Skill::GetAffectDefense() const {
	return affect_defense;
}

void RPG::Skill::SetAffectDefense(bool affect_defense) {
	this->affect_defense = affect_defense;
}

bool RPG::Skill::GetAffectSpirit() const {
	return affect_spirit;
}

void RPG::Skill::SetAffectSpirit(bool affect_spirit) {
	this->affect_spirit = affect_spirit;
}

bool RPG::Skill::GetAffectAgility() const {
	return affect_agility;
}

void RPG::Skill::SetAffectAgility(bool affect_agility) {
	this->affect_agility = affect_agility;
}

bool RPG::Skill::GetAbsorbDamage() const {
	return absorb_damage;
}

void RPG::Skill::SetAbsorbDamage(bool absorb_damage) {
	this->absorb_damage = absorb_damage;
}

bool RPG::Skill::GetIgnoreDefense() const {
	return ignore_defense;
}

void RPG::Skill::SetIgnoreDefense(bool ignore_defense) {
	this->ignore_defense = ignore_defense;
}


const std::vector<bool>& RPG::Skill::GetStateEffects() const  {
	return state_effects;
}

std::vector<bool>& RPG::Skill::GetStateEffects() {
	return state_effects;
}


const std::vector<bool>& RPG::Skill::GetAttributeEffects() const  {
	return attribute_effects;
}

std::vector<bool>& RPG::Skill::GetAttributeEffects() {
	return attribute_effects;
}

bool RPG::Skill::GetAffectAttrDefence() const {
	return affect_attr_defence;
}

void RPG::Skill::SetAffectAttrDefence(bool affect_attr_defence) {
	this->affect_attr_defence = affect_attr_defence;
}

const int32_t& RPG::Skill::GetBattlerAnimation() const  {
	return battler_animation;
}

int32_t& RPG::Skill::GetBattlerAnimation() {
	return battler_animation;
}

void RPG::Skill::SetBattlerAnimation(const int32_t& battler_animation) {
	this->battler_animation = battler_animation;
}

const std::vector<RPG::BattlerAnimationData>& RPG::Skill::GetBattlerAnimationData() const  {
	return battler_animation_data;
}

std::vector<RPG::BattlerAnimationData>& RPG::Skill::GetBattlerAnimationData() {
	return battler_animation_data;
}

