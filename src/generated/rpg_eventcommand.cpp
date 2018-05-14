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


const int32_t& RPG::EventCommand::GetCode() const  {
	return code;
}

int32_t& RPG::EventCommand::GetCode() {
	return code;
}

void RPG::EventCommand::SetCode(const int32_t& code) {
	this->code = code;
}

int32_t RPG::EventCommand::GetIndent() const {
	return indent;
}

void RPG::EventCommand::SetIndent(int32_t indent) {
	this->indent = indent;
}

const std::string& RPG::EventCommand::GetString() const  {
	return string;
}

std::string& RPG::EventCommand::GetString() {
	return string;
}

void RPG::EventCommand::SetString(const std::string& string) {
	this->string = string;
}

const std::vector<int32_t>& RPG::EventCommand::GetParameters() const  {
	return parameters;
}

std::vector<int32_t>& RPG::EventCommand::GetParameters() {
	return parameters;
}

