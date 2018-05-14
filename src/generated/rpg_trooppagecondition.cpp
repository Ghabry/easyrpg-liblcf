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
#include "rpg_trooppagecondition.h"


const RPG::TroopPageCondition::Flags& RPG::TroopPageCondition::GetFlags() const {
	return getter<const RPG::TroopPageCondition::Flags&>("flags");
}

RPG::TroopPageCondition::Flags& RPG::TroopPageCondition::GetFlags() {
	return getter<RPG::TroopPageCondition::Flags&>("flags");
}

void RPG::TroopPageCondition::SetFlags(const RPG::TroopPageCondition::Flags& flags) {
	setter<RPG::TroopPageCondition::Flags>("flags", flags);
}

const int32_t& RPG::TroopPageCondition::GetSwitchAId() const {
	return getter<const int32_t&>("switch_a_id");
}

int32_t& RPG::TroopPageCondition::GetSwitchAId() {
	return getter<int32_t&>("switch_a_id");
}

void RPG::TroopPageCondition::SetSwitchAId(const int32_t& switch_a_id) {
	setter<int32_t>("switch_a_id", switch_a_id);
}

const int32_t& RPG::TroopPageCondition::GetSwitchBId() const {
	return getter<const int32_t&>("switch_b_id");
}

int32_t& RPG::TroopPageCondition::GetSwitchBId() {
	return getter<int32_t&>("switch_b_id");
}

void RPG::TroopPageCondition::SetSwitchBId(const int32_t& switch_b_id) {
	setter<int32_t>("switch_b_id", switch_b_id);
}

const int32_t& RPG::TroopPageCondition::GetVariableId() const {
	return getter<const int32_t&>("variable_id");
}

int32_t& RPG::TroopPageCondition::GetVariableId() {
	return getter<int32_t&>("variable_id");
}

void RPG::TroopPageCondition::SetVariableId(const int32_t& variable_id) {
	setter<int32_t>("variable_id", variable_id);
}

int32_t RPG::TroopPageCondition::GetVariableValue() const {
	return getter<int32_t>("variable_value");
}

void RPG::TroopPageCondition::SetVariableValue(int32_t variable_value) {
	setter<int32_t>("variable_value", variable_value);
}

int32_t RPG::TroopPageCondition::GetTurnA() const {
	return getter<int32_t>("turn_a");
}

void RPG::TroopPageCondition::SetTurnA(int32_t turn_a) {
	setter<int32_t>("turn_a", turn_a);
}

int32_t RPG::TroopPageCondition::GetTurnB() const {
	return getter<int32_t>("turn_b");
}

void RPG::TroopPageCondition::SetTurnB(int32_t turn_b) {
	setter<int32_t>("turn_b", turn_b);
}

int32_t RPG::TroopPageCondition::GetFatigueMin() const {
	return getter<int32_t>("fatigue_min");
}

void RPG::TroopPageCondition::SetFatigueMin(int32_t fatigue_min) {
	setter<int32_t>("fatigue_min", fatigue_min);
}

int32_t RPG::TroopPageCondition::GetFatigueMax() const {
	return getter<int32_t>("fatigue_max");
}

void RPG::TroopPageCondition::SetFatigueMax(int32_t fatigue_max) {
	setter<int32_t>("fatigue_max", fatigue_max);
}

int32_t RPG::TroopPageCondition::GetEnemyId() const {
	return getter<int32_t>("enemy_id");
}

void RPG::TroopPageCondition::SetEnemyId(int32_t enemy_id) {
	setter<int32_t>("enemy_id", enemy_id);
}

int32_t RPG::TroopPageCondition::GetEnemyHpMin() const {
	return getter<int32_t>("enemy_hp_min");
}

void RPG::TroopPageCondition::SetEnemyHpMin(int32_t enemy_hp_min) {
	setter<int32_t>("enemy_hp_min", enemy_hp_min);
}

int32_t RPG::TroopPageCondition::GetEnemyHpMax() const {
	return getter<int32_t>("enemy_hp_max");
}

void RPG::TroopPageCondition::SetEnemyHpMax(int32_t enemy_hp_max) {
	setter<int32_t>("enemy_hp_max", enemy_hp_max);
}

const int32_t& RPG::TroopPageCondition::GetActorId() const {
	return getter<const int32_t&>("actor_id");
}

int32_t& RPG::TroopPageCondition::GetActorId() {
	return getter<int32_t&>("actor_id");
}

void RPG::TroopPageCondition::SetActorId(const int32_t& actor_id) {
	setter<int32_t>("actor_id", actor_id);
}

int32_t RPG::TroopPageCondition::GetActorHpMin() const {
	return getter<int32_t>("actor_hp_min");
}

void RPG::TroopPageCondition::SetActorHpMin(int32_t actor_hp_min) {
	setter<int32_t>("actor_hp_min", actor_hp_min);
}

int32_t RPG::TroopPageCondition::GetActorHpMax() const {
	return getter<int32_t>("actor_hp_max");
}

void RPG::TroopPageCondition::SetActorHpMax(int32_t actor_hp_max) {
	setter<int32_t>("actor_hp_max", actor_hp_max);
}

int32_t RPG::TroopPageCondition::GetTurnEnemyId() const {
	return getter<int32_t>("turn_enemy_id");
}

void RPG::TroopPageCondition::SetTurnEnemyId(int32_t turn_enemy_id) {
	setter<int32_t>("turn_enemy_id", turn_enemy_id);
}

int32_t RPG::TroopPageCondition::GetTurnEnemyA() const {
	return getter<int32_t>("turn_enemy_a");
}

void RPG::TroopPageCondition::SetTurnEnemyA(int32_t turn_enemy_a) {
	setter<int32_t>("turn_enemy_a", turn_enemy_a);
}

int32_t RPG::TroopPageCondition::GetTurnEnemyB() const {
	return getter<int32_t>("turn_enemy_b");
}

void RPG::TroopPageCondition::SetTurnEnemyB(int32_t turn_enemy_b) {
	setter<int32_t>("turn_enemy_b", turn_enemy_b);
}

const int32_t& RPG::TroopPageCondition::GetTurnActorId() const {
	return getter<const int32_t&>("turn_actor_id");
}

int32_t& RPG::TroopPageCondition::GetTurnActorId() {
	return getter<int32_t&>("turn_actor_id");
}

void RPG::TroopPageCondition::SetTurnActorId(const int32_t& turn_actor_id) {
	setter<int32_t>("turn_actor_id", turn_actor_id);
}

int32_t RPG::TroopPageCondition::GetTurnActorA() const {
	return getter<int32_t>("turn_actor_a");
}

void RPG::TroopPageCondition::SetTurnActorA(int32_t turn_actor_a) {
	setter<int32_t>("turn_actor_a", turn_actor_a);
}

int32_t RPG::TroopPageCondition::GetTurnActorB() const {
	return getter<int32_t>("turn_actor_b");
}

void RPG::TroopPageCondition::SetTurnActorB(int32_t turn_actor_b) {
	setter<int32_t>("turn_actor_b", turn_actor_b);
}

const int32_t& RPG::TroopPageCondition::GetCommandActorId() const {
	return getter<const int32_t&>("command_actor_id");
}

int32_t& RPG::TroopPageCondition::GetCommandActorId() {
	return getter<int32_t&>("command_actor_id");
}

void RPG::TroopPageCondition::SetCommandActorId(const int32_t& command_actor_id) {
	setter<int32_t>("command_actor_id", command_actor_id);
}

const int32_t& RPG::TroopPageCondition::GetCommandId() const {
	return getter<const int32_t&>("command_id");
}

int32_t& RPG::TroopPageCondition::GetCommandId() {
	return getter<int32_t&>("command_id");
}

void RPG::TroopPageCondition::SetCommandId(const int32_t& command_id) {
	setter<int32_t>("command_id", command_id);
}

