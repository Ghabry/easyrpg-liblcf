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

#ifndef LCF_RPG_SAVEEVENTCOMMANDS_H
#define LCF_RPG_SAVEEVENTCOMMANDS_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <vector>
#include "rpg_eventcommand.h"

/**
 * RPG::SaveEventCommands class.
 */
namespace RPG {
	class SaveEventCommands : public Base {
	public:
		SaveEventCommands() {}
		int ID = 0;
		int32_t commands_size = 0;
		std::vector<EventCommand> commands;
		int32_t current_command = 0;
		int32_t event_id = 0;
		bool actioned = false;
		int32_t unknown_15_subcommand_path_size = -1;
		std::vector<uint8_t> unknown_16_subcommand_path;
		int32_t GetCommandsSize() const;
		void SetCommandsSize(int32_t commands_size);

		const std::vector<EventCommand>& GetCommands() const;
		std::vector<EventCommand>& GetCommands();

		int32_t GetCurrentCommand() const;
		void SetCurrentCommand(int32_t current_command);

		int32_t GetEventId() const;
		void SetEventId(int32_t event_id);

		bool GetActioned() const;
		void SetActioned(bool actioned);

		int32_t GetUnknown15SubcommandPathSize() const;
		void SetUnknown15SubcommandPathSize(int32_t unknown_15_subcommand_path_size);

		const std::vector<uint8_t>& GetUnknown16SubcommandPath() const;
		std::vector<uint8_t>& GetUnknown16SubcommandPath();

	};
}

#endif
