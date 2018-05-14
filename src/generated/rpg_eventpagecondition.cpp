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
#include "rpg_eventpagecondition.h"


const RPG::EventPageCondition::Flags& RPG::EventPageCondition::GetFlags() const  {
	return flags;
}

RPG::EventPageCondition::Flags& RPG::EventPageCondition::GetFlags() {
	return flags;
}

void RPG::EventPageCondition::SetFlags(const RPG::EventPageCondition::Flags& flags) {
	this->flags = flags;
}

const int32_t& RPG::EventPageCondition::GetSwitchAId() const  {
	return switch_a_id;
}

int32_t& RPG::EventPageCondition::GetSwitchAId() {
	return switch_a_id;
}

void RPG::EventPageCondition::SetSwitchAId(const int32_t& switch_a_id) {
	this->switch_a_id = switch_a_id;
}

const int32_t& RPG::EventPageCondition::GetSwitchBId() const  {
	return switch_b_id;
}

int32_t& RPG::EventPageCondition::GetSwitchBId() {
	return switch_b_id;
}

void RPG::EventPageCondition::SetSwitchBId(const int32_t& switch_b_id) {
	this->switch_b_id = switch_b_id;
}

const int32_t& RPG::EventPageCondition::GetVariableId() const  {
	return variable_id;
}

int32_t& RPG::EventPageCondition::GetVariableId() {
	return variable_id;
}

void RPG::EventPageCondition::SetVariableId(const int32_t& variable_id) {
	this->variable_id = variable_id;
}

int32_t RPG::EventPageCondition::GetVariableValue() const {
	return variable_value;
}

void RPG::EventPageCondition::SetVariableValue(int32_t variable_value) {
	this->variable_value = variable_value;
}

const int32_t& RPG::EventPageCondition::GetItemId() const  {
	return item_id;
}

int32_t& RPG::EventPageCondition::GetItemId() {
	return item_id;
}

void RPG::EventPageCondition::SetItemId(const int32_t& item_id) {
	this->item_id = item_id;
}

const int32_t& RPG::EventPageCondition::GetActorId() const  {
	return actor_id;
}

int32_t& RPG::EventPageCondition::GetActorId() {
	return actor_id;
}

void RPG::EventPageCondition::SetActorId(const int32_t& actor_id) {
	this->actor_id = actor_id;
}

int32_t RPG::EventPageCondition::GetTimerSec() const {
	return timer_sec;
}

void RPG::EventPageCondition::SetTimerSec(int32_t timer_sec) {
	this->timer_sec = timer_sec;
}

int32_t RPG::EventPageCondition::GetTimer2Sec() const {
	return timer2_sec;
}

void RPG::EventPageCondition::SetTimer2Sec(int32_t timer2_sec) {
	this->timer2_sec = timer2_sec;
}

const int32_t& RPG::EventPageCondition::GetCompareOperator() const  {
	return compare_operator;
}

int32_t& RPG::EventPageCondition::GetCompareOperator() {
	return compare_operator;
}

void RPG::EventPageCondition::SetCompareOperator(const int32_t& compare_operator) {
	this->compare_operator = compare_operator;
}

