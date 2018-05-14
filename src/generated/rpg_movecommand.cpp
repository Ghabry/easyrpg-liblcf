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
#include "rpg_movecommand.h"


const int32_t& RPG::MoveCommand::GetCommandId() const {
	return getter<const int32_t&>("command_id");
}

int32_t& RPG::MoveCommand::GetCommandId() {
	return getter<int32_t&>("command_id");
}

void RPG::MoveCommand::SetCommandId(const int32_t& command_id) {
	setter<int32_t>("command_id", command_id);
}

const std::string& RPG::MoveCommand::GetParameterString() const {
	return getter<const std::string&>("parameter_string");
}

std::string& RPG::MoveCommand::GetParameterString() {
	return getter<std::string&>("parameter_string");
}

void RPG::MoveCommand::SetParameterString(const std::string& parameter_string) {
	setter<std::string>("parameter_string", parameter_string);
}

int32_t RPG::MoveCommand::GetParameterA() const {
	return getter<int32_t>("parameter_a");
}

void RPG::MoveCommand::SetParameterA(int32_t parameter_a) {
	setter<int32_t>("parameter_a", parameter_a);
}

int32_t RPG::MoveCommand::GetParameterB() const {
	return getter<int32_t>("parameter_b");
}

void RPG::MoveCommand::SetParameterB(int32_t parameter_b) {
	setter<int32_t>("parameter_b", parameter_b);
}

int32_t RPG::MoveCommand::GetParameterC() const {
	return getter<int32_t>("parameter_c");
}

void RPG::MoveCommand::SetParameterC(int32_t parameter_c) {
	setter<int32_t>("parameter_c", parameter_c);
}

