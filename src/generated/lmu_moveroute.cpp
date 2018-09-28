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
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_struct.h"

// Read MoveRoute.




template <>
char const* const Struct<RPG::MoveRoute>::name = "MoveRoute";

template <>
Field<RPG::MoveRoute> const* Struct<RPG::MoveRoute>::fields[] = {
	new SizeField<RPG::MoveRoute, RPG::MoveCommand>(
		&RPG::MoveRoute::move_commands,
		LMU_Reader::ChunkMoveRoute::move_commands_size
	),
	new TypedField<RPG::MoveRoute, std::vector<RPG::MoveCommand>>(
		&RPG::MoveRoute::move_commands,
		LMU_Reader::ChunkMoveRoute::move_commands,
		"move_commands"
	),
	new TypedField<RPG::MoveRoute, bool>(
		&RPG::MoveRoute::repeat,
		LMU_Reader::ChunkMoveRoute::repeat,
		"repeat"
	),
	new TypedField<RPG::MoveRoute, bool>(
		&RPG::MoveRoute::skippable,
		LMU_Reader::ChunkMoveRoute::skippable,
		"skippable"
	),
	NULL
};
