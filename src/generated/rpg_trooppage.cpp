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
#include "rpg_trooppage.h"


const RPG::TroopPageCondition& RPG::TroopPage::GetCondition() const  {
	return condition;
}

RPG::TroopPageCondition& RPG::TroopPage::GetCondition() {
	return condition;
}

void RPG::TroopPage::SetCondition(const RPG::TroopPageCondition& condition) {
	this->condition = condition;
}


const std::vector<RPG::EventCommand>& RPG::TroopPage::GetEventCommands() const  {
	return event_commands;
}

std::vector<RPG::EventCommand>& RPG::TroopPage::GetEventCommands() {
	return event_commands;
}

