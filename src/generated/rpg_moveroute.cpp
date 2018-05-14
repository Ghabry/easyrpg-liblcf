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



const std::vector<RPG::MoveCommand>& RPG::MoveRoute::GetMoveCommands() const {
	return vector_getter<const std::vector<RPG::MoveCommand>&, RPG::MoveCommand>("move_commands");
}

std::vector<RPG::MoveCommand>& RPG::MoveRoute::GetMoveCommands() {
	return vector_getter<std::vector<RPG::MoveCommand>&, RPG::MoveCommand>("move_commands");
}

bool RPG::MoveRoute::GetRepeat() const {
	return getter<bool>("repeat");
}

void RPG::MoveRoute::SetRepeat(bool repeat) {
	setter<bool>("repeat", repeat);
}

bool RPG::MoveRoute::GetSkippable() const {
	return getter<bool>("skippable");
}

void RPG::MoveRoute::SetSkippable(bool skippable) {
	setter<bool>("skippable", skippable);
}

