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
#include "rpg_variable.h"

RPG::Variable::Variable(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Variable::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Variable::GetName() {
	return getter<std::string&>("name");
}

void RPG::Variable::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

