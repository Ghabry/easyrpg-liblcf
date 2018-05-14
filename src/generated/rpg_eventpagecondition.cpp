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


const RPG::EventPageCondition::Flags& RPG::EventPageCondition::GetFlags() const {
	return getter<const RPG::EventPageCondition::Flags&>("flags");
}

RPG::EventPageCondition::Flags& RPG::EventPageCondition::GetFlags() {
	return getter<RPG::EventPageCondition::Flags&>("flags");
}

void RPG::EventPageCondition::SetFlags(const RPG::EventPageCondition::Flags& flags) {
	setter<RPG::EventPageCondition::Flags>("flags", flags);
}

const int32_t& RPG::EventPageCondition::GetSwitchAId() const {
	return getter<const int32_t&>("switch_a_id");
}

int32_t& RPG::EventPageCondition::GetSwitchAId() {
	return getter<int32_t&>("switch_a_id");
}

void RPG::EventPageCondition::SetSwitchAId(const int32_t& switch_a_id) {
	setter<int32_t>("switch_a_id", switch_a_id);
}

const int32_t& RPG::EventPageCondition::GetSwitchBId() const {
	return getter<const int32_t&>("switch_b_id");
}

int32_t& RPG::EventPageCondition::GetSwitchBId() {
	return getter<int32_t&>("switch_b_id");
}

void RPG::EventPageCondition::SetSwitchBId(const int32_t& switch_b_id) {
	setter<int32_t>("switch_b_id", switch_b_id);
}

const int32_t& RPG::EventPageCondition::GetVariableId() const {
	return getter<const int32_t&>("variable_id");
}

int32_t& RPG::EventPageCondition::GetVariableId() {
	return getter<int32_t&>("variable_id");
}

void RPG::EventPageCondition::SetVariableId(const int32_t& variable_id) {
	setter<int32_t>("variable_id", variable_id);
}

int32_t RPG::EventPageCondition::GetVariableValue() const {
	return getter<int32_t>("variable_value");
}

void RPG::EventPageCondition::SetVariableValue(int32_t variable_value) {
	setter<int32_t>("variable_value", variable_value);
}

const int32_t& RPG::EventPageCondition::GetItemId() const {
	return getter<const int32_t&>("item_id");
}

int32_t& RPG::EventPageCondition::GetItemId() {
	return getter<int32_t&>("item_id");
}

void RPG::EventPageCondition::SetItemId(const int32_t& item_id) {
	setter<int32_t>("item_id", item_id);
}

const int32_t& RPG::EventPageCondition::GetActorId() const {
	return getter<const int32_t&>("actor_id");
}

int32_t& RPG::EventPageCondition::GetActorId() {
	return getter<int32_t&>("actor_id");
}

void RPG::EventPageCondition::SetActorId(const int32_t& actor_id) {
	setter<int32_t>("actor_id", actor_id);
}

int32_t RPG::EventPageCondition::GetTimerSec() const {
	return getter<int32_t>("timer_sec");
}

void RPG::EventPageCondition::SetTimerSec(int32_t timer_sec) {
	setter<int32_t>("timer_sec", timer_sec);
}

int32_t RPG::EventPageCondition::GetTimer2Sec() const {
	return getter<int32_t>("timer2_sec");
}

void RPG::EventPageCondition::SetTimer2Sec(int32_t timer2_sec) {
	setter<int32_t>("timer2_sec", timer2_sec);
}

const int32_t& RPG::EventPageCondition::GetCompareOperator() const {
	return getter<const int32_t&>("compare_operator");
}

int32_t& RPG::EventPageCondition::GetCompareOperator() {
	return getter<int32_t&>("compare_operator");
}

void RPG::EventPageCondition::SetCompareOperator(const int32_t& compare_operator) {
	setter<int32_t>("compare_operator", compare_operator);
}

