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

#ifndef LCF_RPG_TROOPPAGE_H
#define LCF_RPG_TROOPPAGE_H

// Headers
#include "rpg_base.h"
#include <vector>
#include "rpg_eventcommand.h"
#include "rpg_trooppagecondition.h"

/**
 * RPG::TroopPage class.
 */
namespace RPG {
	class TroopPage : public Base {
	public:
		TroopPage() {}
		int ID = 0;
		TroopPageCondition condition;
		std::vector<EventCommand> event_commands;
		const TroopPageCondition& GetCondition() const;
		TroopPageCondition& GetCondition();
		void SetCondition(const TroopPageCondition& condition);


		const std::vector<EventCommand>& GetEventCommands() const;
		std::vector<EventCommand>& GetEventCommands();

	};
}

#endif
