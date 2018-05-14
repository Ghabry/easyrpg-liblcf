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


const RPG::TroopPageCondition& RPG::TroopPage::GetCondition() const {
	return getter<const RPG::TroopPageCondition&>("condition");
}

RPG::TroopPageCondition& RPG::TroopPage::GetCondition() {
	return getter<RPG::TroopPageCondition&>("condition");
}

void RPG::TroopPage::SetCondition(const RPG::TroopPageCondition& condition) {
	setter<RPG::TroopPageCondition>("condition", condition);
}


const std::vector<RPG::EventCommand>& RPG::TroopPage::GetEventCommands() const {
	return vector_getter<const std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

std::vector<RPG::EventCommand>& RPG::TroopPage::GetEventCommands() {
	return vector_getter<std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

