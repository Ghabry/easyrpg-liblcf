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
#include "rpg_commonevent.h"


const std::string& RPG::CommonEvent::GetName() const  {
	return name;
}

std::string& RPG::CommonEvent::GetName() {
	return name;
}

void RPG::CommonEvent::SetName(const std::string& name) {
	this->name = name;
}

const int32_t& RPG::CommonEvent::GetTrigger() const  {
	return trigger;
}

int32_t& RPG::CommonEvent::GetTrigger() {
	return trigger;
}

void RPG::CommonEvent::SetTrigger(const int32_t& trigger) {
	this->trigger = trigger;
}

bool RPG::CommonEvent::GetSwitchFlag() const {
	return switch_flag;
}

void RPG::CommonEvent::SetSwitchFlag(bool switch_flag) {
	this->switch_flag = switch_flag;
}

const int32_t& RPG::CommonEvent::GetSwitchId() const  {
	return switch_id;
}

int32_t& RPG::CommonEvent::GetSwitchId() {
	return switch_id;
}

void RPG::CommonEvent::SetSwitchId(const int32_t& switch_id) {
	this->switch_id = switch_id;
}


const std::vector<RPG::EventCommand>& RPG::CommonEvent::GetEventCommands() const  {
	return event_commands;
}

std::vector<RPG::EventCommand>& RPG::CommonEvent::GetEventCommands() {
	return event_commands;
}

