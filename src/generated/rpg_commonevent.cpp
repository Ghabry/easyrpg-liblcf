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


const std::string& RPG::CommonEvent::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::CommonEvent::GetName() {
	return getter<std::string&>("name");
}

void RPG::CommonEvent::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const int32_t& RPG::CommonEvent::GetTrigger() const {
	return getter<const int32_t&>("trigger");
}

int32_t& RPG::CommonEvent::GetTrigger() {
	return getter<int32_t&>("trigger");
}

void RPG::CommonEvent::SetTrigger(const int32_t& trigger) {
	setter<int32_t>("trigger", trigger);
}

bool RPG::CommonEvent::GetSwitchFlag() const {
	return getter<bool>("switch_flag");
}

void RPG::CommonEvent::SetSwitchFlag(bool switch_flag) {
	setter<bool>("switch_flag", switch_flag);
}

const int32_t& RPG::CommonEvent::GetSwitchId() const {
	return getter<const int32_t&>("switch_id");
}

int32_t& RPG::CommonEvent::GetSwitchId() {
	return getter<int32_t&>("switch_id");
}

void RPG::CommonEvent::SetSwitchId(const int32_t& switch_id) {
	setter<int32_t>("switch_id", switch_id);
}


const std::vector<RPG::EventCommand>& RPG::CommonEvent::GetEventCommands() const {
	return vector_getter<const std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

std::vector<RPG::EventCommand>& RPG::CommonEvent::GetEventCommands() {
	return vector_getter<std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

