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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Troop.




template <>
char const* const Struct<RPG::Troop>::name = "Troop";

template <>
Field<RPG::Troop> const* Struct<RPG::Troop>::fields[] = {
	new TypedField<RPG::Troop, std::string>(
		&RPG::Troop::name,
		LDB_Reader::ChunkTroop::name,
		"name"
	),
	new TypedField<RPG::Troop, std::vector<RPG::TroopMember>>(
		&RPG::Troop::members,
		LDB_Reader::ChunkTroop::members,
		"members"
	),
	new TypedField<RPG::Troop, bool>(
		&RPG::Troop::auto_alignment,
		LDB_Reader::ChunkTroop::auto_alignment,
		"auto_alignment"
	),
	new SizeField<RPG::Troop, bool>(
		&RPG::Troop::terrain_set,
		LDB_Reader::ChunkTroop::terrain_set_size
	),
	new TypedField<RPG::Troop, std::vector<bool>>(
		&RPG::Troop::terrain_set,
		LDB_Reader::ChunkTroop::terrain_set,
		"terrain_set"
	),
	new TypedField<RPG::Troop, bool>(
		&RPG::Troop::appear_randomly,
		LDB_Reader::ChunkTroop::appear_randomly,
		"appear_randomly"
	),
	new TypedField<RPG::Troop, std::vector<RPG::TroopPage>>(
		&RPG::Troop::pages,
		LDB_Reader::ChunkTroop::pages,
		"pages"
	),
	NULL
};
