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
#include "rpg_moveroute.h"



const std::vector<RPG::MoveCommand>& RPG::MoveRoute::GetMoveCommands() const  {
	return move_commands;
}

std::vector<RPG::MoveCommand>& RPG::MoveRoute::GetMoveCommands() {
	return move_commands;
}

bool RPG::MoveRoute::GetRepeat() const {
	return repeat;
}

void RPG::MoveRoute::SetRepeat(bool repeat) {
	this->repeat = repeat;
}

bool RPG::MoveRoute::GetSkippable() const {
	return skippable;
}

void RPG::MoveRoute::SetSkippable(bool skippable) {
	this->skippable = skippable;
}

