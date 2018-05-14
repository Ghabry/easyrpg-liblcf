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
#include "rpg_battlecommand.h"


const std::string& RPG::BattleCommand::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::BattleCommand::GetName() {
	return getter<std::string&>("name");
}

void RPG::BattleCommand::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const int32_t& RPG::BattleCommand::GetType() const {
	return getter<const int32_t&>("type");
}

int32_t& RPG::BattleCommand::GetType() {
	return getter<int32_t&>("type");
}

void RPG::BattleCommand::SetType(const int32_t& type) {
	setter<int32_t>("type", type);
}

