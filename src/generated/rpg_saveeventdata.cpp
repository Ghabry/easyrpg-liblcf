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
#include "rpg_saveeventdata.h"


const std::vector<RPG::SaveEventCommands>& RPG::SaveEventData::GetCommands() const {
	return vector_getter<const std::vector<RPG::SaveEventCommands>&, RPG::SaveEventCommands>("commands");
}

std::vector<RPG::SaveEventCommands>& RPG::SaveEventData::GetCommands() {
	return vector_getter<std::vector<RPG::SaveEventCommands>&, RPG::SaveEventCommands>("commands");
}

bool RPG::SaveEventData::GetShowMessage() const {
	return getter<bool>("show_message");
}

void RPG::SaveEventData::SetShowMessage(bool show_message) {
	setter<bool>("show_message", show_message);
}

int32_t RPG::SaveEventData::GetUnknown0bEscape() const {
	return getter<int32_t>("unknown_0b_escape");
}

void RPG::SaveEventData::SetUnknown0bEscape(int32_t unknown_0b_escape) {
	setter<int32_t>("unknown_0b_escape", unknown_0b_escape);
}

bool RPG::SaveEventData::GetWaitMovement() const {
	return getter<bool>("wait_movement");
}

void RPG::SaveEventData::SetWaitMovement(bool wait_movement) {
	setter<bool>("wait_movement", wait_movement);
}

bool RPG::SaveEventData::GetKeyinputWait() const {
	return getter<bool>("keyinput_wait");
}

void RPG::SaveEventData::SetKeyinputWait(bool keyinput_wait) {
	setter<bool>("keyinput_wait", keyinput_wait);
}

uint8_t RPG::SaveEventData::GetKeyinputVariable() const {
	return getter<uint8_t>("keyinput_variable");
}

void RPG::SaveEventData::SetKeyinputVariable(uint8_t keyinput_variable) {
	setter<uint8_t>("keyinput_variable", keyinput_variable);
}

bool RPG::SaveEventData::GetKeyinputAllDirections() const {
	return getter<bool>("keyinput_all_directions");
}

void RPG::SaveEventData::SetKeyinputAllDirections(bool keyinput_all_directions) {
	setter<bool>("keyinput_all_directions", keyinput_all_directions);
}

bool RPG::SaveEventData::GetKeyinputDecision() const {
	return getter<bool>("keyinput_decision");
}

void RPG::SaveEventData::SetKeyinputDecision(bool keyinput_decision) {
	setter<bool>("keyinput_decision", keyinput_decision);
}

bool RPG::SaveEventData::GetKeyinputCancel() const {
	return getter<bool>("keyinput_cancel");
}

void RPG::SaveEventData::SetKeyinputCancel(bool keyinput_cancel) {
	setter<bool>("keyinput_cancel", keyinput_cancel);
}

bool RPG::SaveEventData::GetKeyinputNumbers() const {
	return getter<bool>("keyinput_numbers");
}

void RPG::SaveEventData::SetKeyinputNumbers(bool keyinput_numbers) {
	setter<bool>("keyinput_numbers", keyinput_numbers);
}

bool RPG::SaveEventData::GetKeyinputOperators() const {
	return getter<bool>("keyinput_operators");
}

void RPG::SaveEventData::SetKeyinputOperators(bool keyinput_operators) {
	setter<bool>("keyinput_operators", keyinput_operators);
}

bool RPG::SaveEventData::GetKeyinputShift() const {
	return getter<bool>("keyinput_shift");
}

void RPG::SaveEventData::SetKeyinputShift(bool keyinput_shift) {
	setter<bool>("keyinput_shift", keyinput_shift);
}

bool RPG::SaveEventData::GetKeyinputValueRight() const {
	return getter<bool>("keyinput_value_right");
}

void RPG::SaveEventData::SetKeyinputValueRight(bool keyinput_value_right) {
	setter<bool>("keyinput_value_right", keyinput_value_right);
}

bool RPG::SaveEventData::GetKeyinputValueUp() const {
	return getter<bool>("keyinput_value_up");
}

void RPG::SaveEventData::SetKeyinputValueUp(bool keyinput_value_up) {
	setter<bool>("keyinput_value_up", keyinput_value_up);
}

int32_t RPG::SaveEventData::GetWaitTime() const {
	return getter<int32_t>("wait_time");
}

void RPG::SaveEventData::SetWaitTime(int32_t wait_time) {
	setter<int32_t>("wait_time", wait_time);
}

int32_t RPG::SaveEventData::GetKeyinputTimeVariable() const {
	return getter<int32_t>("keyinput_time_variable");
}

void RPG::SaveEventData::SetKeyinputTimeVariable(int32_t keyinput_time_variable) {
	setter<int32_t>("keyinput_time_variable", keyinput_time_variable);
}

bool RPG::SaveEventData::GetKeyinputDown() const {
	return getter<bool>("keyinput_down");
}

void RPG::SaveEventData::SetKeyinputDown(bool keyinput_down) {
	setter<bool>("keyinput_down", keyinput_down);
}

bool RPG::SaveEventData::GetKeyinputLeft() const {
	return getter<bool>("keyinput_left");
}

void RPG::SaveEventData::SetKeyinputLeft(bool keyinput_left) {
	setter<bool>("keyinput_left", keyinput_left);
}

bool RPG::SaveEventData::GetKeyinputRight() const {
	return getter<bool>("keyinput_right");
}

void RPG::SaveEventData::SetKeyinputRight(bool keyinput_right) {
	setter<bool>("keyinput_right", keyinput_right);
}

bool RPG::SaveEventData::GetKeyinputUp() const {
	return getter<bool>("keyinput_up");
}

void RPG::SaveEventData::SetKeyinputUp(bool keyinput_up) {
	setter<bool>("keyinput_up", keyinput_up);
}

bool RPG::SaveEventData::GetKeyinputTimed() const {
	return getter<bool>("keyinput_timed");
}

void RPG::SaveEventData::SetKeyinputTimed(bool keyinput_timed) {
	setter<bool>("keyinput_timed", keyinput_timed);
}

int32_t RPG::SaveEventData::GetUnknown2aTimeLeft() const {
	return getter<int32_t>("unknown_2a_time_left");
}

void RPG::SaveEventData::SetUnknown2aTimeLeft(int32_t unknown_2a_time_left) {
	setter<int32_t>("unknown_2a_time_left", unknown_2a_time_left);
}

