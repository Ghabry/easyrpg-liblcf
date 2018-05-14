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


const std::string& RPG::Variable::GetName() const  {
	return name;
}

std::string& RPG::Variable::GetName() {
	return name;
}

void RPG::Variable::SetName(const std::string& name) {
	this->name = name;
}

