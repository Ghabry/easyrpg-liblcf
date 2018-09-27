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

// Read Music.




template <>
char const* const Struct<RPG::Music>::name = "Music";

template <>
Field<RPG::Music> const* Struct<RPG::Music>::fields[] = {
	new TypedField<RPG::Music, std::string>(
		&RPG::Music::name,
		LDB_Reader::ChunkMusic::name,
		"name"
	),
	new TypedField<RPG::Music, int32_t>(
		&RPG::Music::fadein,
		LDB_Reader::ChunkMusic::fadein,
		"fadein"
	),
	new TypedField<RPG::Music, int32_t>(
		&RPG::Music::volume,
		LDB_Reader::ChunkMusic::volume,
		"volume"
	),
	new TypedField<RPG::Music, int32_t>(
		&RPG::Music::tempo,
		LDB_Reader::ChunkMusic::tempo,
		"tempo"
	),
	new TypedField<RPG::Music, int32_t>(
		&RPG::Music::balance,
		LDB_Reader::ChunkMusic::balance,
		"balance"
	),
	NULL
};
