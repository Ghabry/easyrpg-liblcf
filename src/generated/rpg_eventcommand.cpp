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
#include "rpg_eventcommand.h"


const int32_t& RPG::EventCommand::GetCode() const {
	return getter<const int32_t&>("code");
}

int32_t& RPG::EventCommand::GetCode() {
	return getter<int32_t&>("code");
}

void RPG::EventCommand::SetCode(const int32_t& code) {
	setter<int32_t>("code", code);
}

int32_t RPG::EventCommand::GetIndent() const {
	return getter<int32_t>("indent");
}

void RPG::EventCommand::SetIndent(int32_t indent) {
	setter<int32_t>("indent", indent);
}

const std::string& RPG::EventCommand::GetString() const {
	return getter<const std::string&>("string");
}

std::string& RPG::EventCommand::GetString() {
	return getter<std::string&>("string");
}

void RPG::EventCommand::SetString(const std::string& string) {
	setter<std::string>("string", string);
}

const std::vector<int32_t>& RPG::EventCommand::GetParameters() const {
	return vector_getter<const std::vector<int32_t>&, int32_t>("parameters");
}

std::vector<int32_t>& RPG::EventCommand::GetParameters() {
	return vector_getter<std::vector<int32_t>&, int32_t>("parameters");
}

