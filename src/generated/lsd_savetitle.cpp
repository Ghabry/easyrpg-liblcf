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

// Read SaveTitle.




template <>
char const* const Struct<RPG::SaveTitle>::name = "SaveTitle";

template <>
Field<RPG::SaveTitle> const* Struct<RPG::SaveTitle>::fields[] = {
	new TypedField<RPG::SaveTitle, double>(
		&RPG::SaveTitle::timestamp,
		LSD_Reader::ChunkSaveTitle::timestamp,
		"timestamp"
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::hero_name,
		LSD_Reader::ChunkSaveTitle::hero_name,
		"hero_name"
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::hero_level,
		LSD_Reader::ChunkSaveTitle::hero_level,
		"hero_level"
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::hero_hp,
		LSD_Reader::ChunkSaveTitle::hero_hp,
		"hero_hp"
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::face1_name,
		LSD_Reader::ChunkSaveTitle::face1_name,
		"face1_name"
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::face1_id,
		LSD_Reader::ChunkSaveTitle::face1_id,
		"face1_id"
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::face2_name,
		LSD_Reader::ChunkSaveTitle::face2_name,
		"face2_name"
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::face2_id,
		LSD_Reader::ChunkSaveTitle::face2_id,
		"face2_id"
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::face3_name,
		LSD_Reader::ChunkSaveTitle::face3_name,
		"face3_name"
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::face3_id,
		LSD_Reader::ChunkSaveTitle::face3_id,
		"face3_id"
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::face4_name,
		LSD_Reader::ChunkSaveTitle::face4_name,
		"face4_name"
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::face4_id,
		LSD_Reader::ChunkSaveTitle::face4_id,
		"face4_id"
	),
	NULL
};
