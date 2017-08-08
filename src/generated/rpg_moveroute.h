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

#ifndef LCF_RPG_MOVEROUTE_H
#define LCF_RPG_MOVEROUTE_H

// Headers
#include <vector>
#include "rpg_base.h"
#include "rpg_movecommand.h"

/**
 * RPG::MoveRoute class.
 */
namespace RPG {
	class MoveRoute : Base {
	public:
		MoveRoute() {}
		MoveRoute(rapidjson::Value& json_values);

		const std::vector<MoveCommand>& GetMoveCommands() const;
		std::vector<MoveCommand>& GetMoveCommands();

		bool GetRepeat() const;
		void SetRepeat(bool repeat);

		bool GetSkippable() const;
		void SetSkippable(bool skippable);

	};
}

#endif
