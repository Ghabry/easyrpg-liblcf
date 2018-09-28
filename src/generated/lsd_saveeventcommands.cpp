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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SaveEventCommands.




template <>
char const* const Struct<RPG::SaveEventCommands>::name = "SaveEventCommands";

template <>
Field<RPG::SaveEventCommands> const* Struct<RPG::SaveEventCommands>::fields[] = {
	new TypedField<RPG::SaveEventCommands, int32_t>(
		&RPG::SaveEventCommands::commands_size,
		LSD_Reader::ChunkSaveEventCommands::commands_size,
		"commands_size"
	),
	new TypedField<RPG::SaveEventCommands, std::vector<RPG::EventCommand>>(
		&RPG::SaveEventCommands::commands,
		LSD_Reader::ChunkSaveEventCommands::commands,
		"commands"
	),
	new TypedField<RPG::SaveEventCommands, int32_t>(
		&RPG::SaveEventCommands::current_command,
		LSD_Reader::ChunkSaveEventCommands::current_command,
		"current_command"
	),
	new TypedField<RPG::SaveEventCommands, int32_t>(
		&RPG::SaveEventCommands::event_id,
		LSD_Reader::ChunkSaveEventCommands::event_id,
		"event_id"
	),
	new TypedField<RPG::SaveEventCommands, bool>(
		&RPG::SaveEventCommands::actioned,
		LSD_Reader::ChunkSaveEventCommands::actioned,
		"actioned"
	),
	new TypedField<RPG::SaveEventCommands, int32_t>(
		&RPG::SaveEventCommands::unknown_15_subcommand_path_size,
		LSD_Reader::ChunkSaveEventCommands::unknown_15_subcommand_path_size,
		"unknown_15_subcommand_path_size"
	),
	new TypedField<RPG::SaveEventCommands, std::vector<uint8_t>>(
		&RPG::SaveEventCommands::unknown_16_subcommand_path,
		LSD_Reader::ChunkSaveEventCommands::unknown_16_subcommand_path,
		"unknown_16_subcommand_path"
	),
	NULL
};
