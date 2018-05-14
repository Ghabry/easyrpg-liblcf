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


const RPG::TroopPageCondition::Flags& RPG::TroopPageCondition::GetFlags() const  {
	return flags;
}

RPG::TroopPageCondition::Flags& RPG::TroopPageCondition::GetFlags() {
	return flags;
}

void RPG::TroopPageCondition::SetFlags(const RPG::TroopPageCondition::Flags& flags) {
	this->flags = flags;
}

const int32_t& RPG::TroopPageCondition::GetSwitchAId() const  {
	return switch_a_id;
}

int32_t& RPG::TroopPageCondition::GetSwitchAId() {
	return switch_a_id;
}

void RPG::TroopPageCondition::SetSwitchAId(const int32_t& switch_a_id) {
	this->switch_a_id = switch_a_id;
}

const int32_t& RPG::TroopPageCondition::GetSwitchBId() const  {
	return switch_b_id;
}

int32_t& RPG::TroopPageCondition::GetSwitchBId() {
	return switch_b_id;
}

void RPG::TroopPageCondition::SetSwitchBId(const int32_t& switch_b_id) {
	this->switch_b_id = switch_b_id;
}

const int32_t& RPG::TroopPageCondition::GetVariableId() const  {
	return variable_id;
}

int32_t& RPG::TroopPageCondition::GetVariableId() {
	return variable_id;
}

void RPG::TroopPageCondition::SetVariableId(const int32_t& variable_id) {
	this->variable_id = variable_id;
}

int32_t RPG::TroopPageCondition::GetVariableValue() const {
	return variable_value;
}

void RPG::TroopPageCondition::SetVariableValue(int32_t variable_value) {
	this->variable_value = variable_value;
}

int32_t RPG::TroopPageCondition::GetTurnA() const {
	return turn_a;
}

void RPG::TroopPageCondition::SetTurnA(int32_t turn_a) {
	this->turn_a = turn_a;
}

int32_t RPG::TroopPageCondition::GetTurnB() const {
	return turn_b;
}

void RPG::TroopPageCondition::SetTurnB(int32_t turn_b) {
	this->turn_b = turn_b;
}

int32_t RPG::TroopPageCondition::GetFatigueMin() const {
	return fatigue_min;
}

void RPG::TroopPageCondition::SetFatigueMin(int32_t fatigue_min) {
	this->fatigue_min = fatigue_min;
}

int32_t RPG::TroopPageCondition::GetFatigueMax() const {
	return fatigue_max;
}

void RPG::TroopPageCondition::SetFatigueMax(int32_t fatigue_max) {
	this->fatigue_max = fatigue_max;
}

int32_t RPG::TroopPageCondition::GetEnemyId() const {
	return enemy_id;
}

void RPG::TroopPageCondition::SetEnemyId(int32_t enemy_id) {
	this->enemy_id = enemy_id;
}

int32_t RPG::TroopPageCondition::GetEnemyHpMin() const {
	return enemy_hp_min;
}

void RPG::TroopPageCondition::SetEnemyHpMin(int32_t enemy_hp_min) {
	this->enemy_hp_min = enemy_hp_min;
}

int32_t RPG::TroopPageCondition::GetEnemyHpMax() const {
	return enemy_hp_max;
}

void RPG::TroopPageCondition::SetEnemyHpMax(int32_t enemy_hp_max) {
	this->enemy_hp_max = enemy_hp_max;
}

const int32_t& RPG::TroopPageCondition::GetActorId() const  {
	return actor_id;
}

int32_t& RPG::TroopPageCondition::GetActorId() {
	return actor_id;
}

void RPG::TroopPageCondition::SetActorId(const int32_t& actor_id) {
	this->actor_id = actor_id;
}

int32_t RPG::TroopPageCondition::GetActorHpMin() const {
	return actor_hp_min;
}

void RPG::TroopPageCondition::SetActorHpMin(int32_t actor_hp_min) {
	this->actor_hp_min = actor_hp_min;
}

int32_t RPG::TroopPageCondition::GetActorHpMax() const {
	return actor_hp_max;
}

void RPG::TroopPageCondition::SetActorHpMax(int32_t actor_hp_max) {
	this->actor_hp_max = actor_hp_max;
}

int32_t RPG::TroopPageCondition::GetTurnEnemyId() const {
	return turn_enemy_id;
}

void RPG::TroopPageCondition::SetTurnEnemyId(int32_t turn_enemy_id) {
	this->turn_enemy_id = turn_enemy_id;
}

int32_t RPG::TroopPageCondition::GetTurnEnemyA() const {
	return turn_enemy_a;
}

void RPG::TroopPageCondition::SetTurnEnemyA(int32_t turn_enemy_a) {
	this->turn_enemy_a = turn_enemy_a;
}

int32_t RPG::TroopPageCondition::GetTurnEnemyB() const {
	return turn_enemy_b;
}

void RPG::TroopPageCondition::SetTurnEnemyB(int32_t turn_enemy_b) {
	this->turn_enemy_b = turn_enemy_b;
}

const int32_t& RPG::TroopPageCondition::GetTurnActorId() const  {
	return turn_actor_id;
}

int32_t& RPG::TroopPageCondition::GetTurnActorId() {
	return turn_actor_id;
}

void RPG::TroopPageCondition::SetTurnActorId(const int32_t& turn_actor_id) {
	this->turn_actor_id = turn_actor_id;
}

int32_t RPG::TroopPageCondition::GetTurnActorA() const {
	return turn_actor_a;
}

void RPG::TroopPageCondition::SetTurnActorA(int32_t turn_actor_a) {
	this->turn_actor_a = turn_actor_a;
}

int32_t RPG::TroopPageCondition::GetTurnActorB() const {
	return turn_actor_b;
}

void RPG::TroopPageCondition::SetTurnActorB(int32_t turn_actor_b) {
	this->turn_actor_b = turn_actor_b;
}

const int32_t& RPG::TroopPageCondition::GetCommandActorId() const  {
	return command_actor_id;
}

int32_t& RPG::TroopPageCondition::GetCommandActorId() {
	return command_actor_id;
}

void RPG::TroopPageCondition::SetCommandActorId(const int32_t& command_actor_id) {
	this->command_actor_id = command_actor_id;
}

const int32_t& RPG::TroopPageCondition::GetCommandId() const  {
	return command_id;
}

int32_t& RPG::TroopPageCondition::GetCommandId() {
	return command_id;
}

void RPG::TroopPageCondition::SetCommandId(const int32_t& command_id) {
	this->command_id = command_id;
}

