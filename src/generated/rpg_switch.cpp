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
#include "rpg_switch.h"


const std::string& RPG::Switch::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Switch::GetName() {
	return getter<std::string&>("name");
}

void RPG::Switch::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

