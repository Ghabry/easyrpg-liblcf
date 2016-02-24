/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_MOVEROUTE_GEN_H
#define LCF_RPG_MOVEROUTE_GEN_H

// Headers
#include <vector>
#include "rpg_movecommand.h"

/**
 * RPG::MoveRoute class.
 */
namespace RPG {
	class MoveRoute_Gen {
	public:
		std::vector<MoveCommand> move_commands;
		bool repeat = true;
		bool skippable = false;
	};
}

#endif
