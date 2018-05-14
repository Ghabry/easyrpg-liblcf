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
#include "rpg_saveeventcommands.h"


int32_t RPG::SaveEventCommands::GetCommandsSize() const {
	return getter<int32_t>("commands_size");
}

void RPG::SaveEventCommands::SetCommandsSize(int32_t commands_size) {
	setter<int32_t>("commands_size", commands_size);
}

const std::vector<RPG::EventCommand>& RPG::SaveEventCommands::GetCommands() const {
	return vector_getter<const std::vector<RPG::EventCommand>&, RPG::EventCommand>("commands");
}

std::vector<RPG::EventCommand>& RPG::SaveEventCommands::GetCommands() {
	return vector_getter<std::vector<RPG::EventCommand>&, RPG::EventCommand>("commands");
}

int32_t RPG::SaveEventCommands::GetCurrentCommand() const {
	return getter<int32_t>("current_command");
}

void RPG::SaveEventCommands::SetCurrentCommand(int32_t current_command) {
	setter<int32_t>("current_command", current_command);
}

int32_t RPG::SaveEventCommands::GetEventId() const {
	return getter<int32_t>("event_id");
}

void RPG::SaveEventCommands::SetEventId(int32_t event_id) {
	setter<int32_t>("event_id", event_id);
}

bool RPG::SaveEventCommands::GetActioned() const {
	return getter<bool>("actioned");
}

void RPG::SaveEventCommands::SetActioned(bool actioned) {
	setter<bool>("actioned", actioned);
}

int32_t RPG::SaveEventCommands::GetUnknown15SubcommandPathSize() const {
	return getter<int32_t>("unknown_15_subcommand_path_size");
}

void RPG::SaveEventCommands::SetUnknown15SubcommandPathSize(int32_t unknown_15_subcommand_path_size) {
	setter<int32_t>("unknown_15_subcommand_path_size", unknown_15_subcommand_path_size);
}

const std::vector<uint8_t>& RPG::SaveEventCommands::GetUnknown16SubcommandPath() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("unknown_16_subcommand_path");
}

std::vector<uint8_t>& RPG::SaveEventCommands::GetUnknown16SubcommandPath() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("unknown_16_subcommand_path");
}

