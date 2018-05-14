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


const std::vector<RPG::SaveEventCommands>& RPG::SaveEventData::GetCommands() const  {
	return commands;
}

std::vector<RPG::SaveEventCommands>& RPG::SaveEventData::GetCommands() {
	return commands;
}

bool RPG::SaveEventData::GetShowMessage() const {
	return show_message;
}

void RPG::SaveEventData::SetShowMessage(bool show_message) {
	this->show_message = show_message;
}

int32_t RPG::SaveEventData::GetUnknown0bEscape() const {
	return unknown_0b_escape;
}

void RPG::SaveEventData::SetUnknown0bEscape(int32_t unknown_0b_escape) {
	this->unknown_0b_escape = unknown_0b_escape;
}

bool RPG::SaveEventData::GetWaitMovement() const {
	return wait_movement;
}

void RPG::SaveEventData::SetWaitMovement(bool wait_movement) {
	this->wait_movement = wait_movement;
}

bool RPG::SaveEventData::GetKeyinputWait() const {
	return keyinput_wait;
}

void RPG::SaveEventData::SetKeyinputWait(bool keyinput_wait) {
	this->keyinput_wait = keyinput_wait;
}

uint8_t RPG::SaveEventData::GetKeyinputVariable() const {
	return keyinput_variable;
}

void RPG::SaveEventData::SetKeyinputVariable(uint8_t keyinput_variable) {
	this->keyinput_variable = keyinput_variable;
}

bool RPG::SaveEventData::GetKeyinputAllDirections() const {
	return keyinput_all_directions;
}

void RPG::SaveEventData::SetKeyinputAllDirections(bool keyinput_all_directions) {
	this->keyinput_all_directions = keyinput_all_directions;
}

bool RPG::SaveEventData::GetKeyinputDecision() const {
	return keyinput_decision;
}

void RPG::SaveEventData::SetKeyinputDecision(bool keyinput_decision) {
	this->keyinput_decision = keyinput_decision;
}

bool RPG::SaveEventData::GetKeyinputCancel() const {
	return keyinput_cancel;
}

void RPG::SaveEventData::SetKeyinputCancel(bool keyinput_cancel) {
	this->keyinput_cancel = keyinput_cancel;
}

bool RPG::SaveEventData::GetKeyinputNumbers() const {
	return keyinput_numbers;
}

void RPG::SaveEventData::SetKeyinputNumbers(bool keyinput_numbers) {
	this->keyinput_numbers = keyinput_numbers;
}

bool RPG::SaveEventData::GetKeyinputOperators() const {
	return keyinput_operators;
}

void RPG::SaveEventData::SetKeyinputOperators(bool keyinput_operators) {
	this->keyinput_operators = keyinput_operators;
}

bool RPG::SaveEventData::GetKeyinputShift() const {
	return keyinput_shift;
}

void RPG::SaveEventData::SetKeyinputShift(bool keyinput_shift) {
	this->keyinput_shift = keyinput_shift;
}

bool RPG::SaveEventData::GetKeyinputValueRight() const {
	return keyinput_value_right;
}

void RPG::SaveEventData::SetKeyinputValueRight(bool keyinput_value_right) {
	this->keyinput_value_right = keyinput_value_right;
}

bool RPG::SaveEventData::GetKeyinputValueUp() const {
	return keyinput_value_up;
}

void RPG::SaveEventData::SetKeyinputValueUp(bool keyinput_value_up) {
	this->keyinput_value_up = keyinput_value_up;
}

int32_t RPG::SaveEventData::GetWaitTime() const {
	return wait_time;
}

void RPG::SaveEventData::SetWaitTime(int32_t wait_time) {
	this->wait_time = wait_time;
}

int32_t RPG::SaveEventData::GetKeyinputTimeVariable() const {
	return keyinput_time_variable;
}

void RPG::SaveEventData::SetKeyinputTimeVariable(int32_t keyinput_time_variable) {
	this->keyinput_time_variable = keyinput_time_variable;
}

bool RPG::SaveEventData::GetKeyinputDown() const {
	return keyinput_down;
}

void RPG::SaveEventData::SetKeyinputDown(bool keyinput_down) {
	this->keyinput_down = keyinput_down;
}

bool RPG::SaveEventData::GetKeyinputLeft() const {
	return keyinput_left;
}

void RPG::SaveEventData::SetKeyinputLeft(bool keyinput_left) {
	this->keyinput_left = keyinput_left;
}

bool RPG::SaveEventData::GetKeyinputRight() const {
	return keyinput_right;
}

void RPG::SaveEventData::SetKeyinputRight(bool keyinput_right) {
	this->keyinput_right = keyinput_right;
}

bool RPG::SaveEventData::GetKeyinputUp() const {
	return keyinput_up;
}

void RPG::SaveEventData::SetKeyinputUp(bool keyinput_up) {
	this->keyinput_up = keyinput_up;
}

bool RPG::SaveEventData::GetKeyinputTimed() const {
	return keyinput_timed;
}

void RPG::SaveEventData::SetKeyinputTimed(bool keyinput_timed) {
	this->keyinput_timed = keyinput_timed;
}

int32_t RPG::SaveEventData::GetUnknown2aTimeLeft() const {
	return unknown_2a_time_left;
}

void RPG::SaveEventData::SetUnknown2aTimeLeft(int32_t unknown_2a_time_left) {
	this->unknown_2a_time_left = unknown_2a_time_left;
}

