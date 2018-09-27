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

// Read ItemAnimation.




template <>
char const* const Struct<RPG::ItemAnimation>::name = "ItemAnimation";

template <>
Field<RPG::ItemAnimation> const* Struct<RPG::ItemAnimation>::fields[] = {
	new TypedField<RPG::ItemAnimation, int32_t>(
		&RPG::ItemAnimation::type,
		LDB_Reader::ChunkItemAnimation::type,
		"type"
	),
	new TypedField<RPG::ItemAnimation, int32_t>(
		&RPG::ItemAnimation::weapon_anim,
		LDB_Reader::ChunkItemAnimation::weapon_anim,
		"weapon_anim"
	),
	new TypedField<RPG::ItemAnimation, int32_t>(
		&RPG::ItemAnimation::movement,
		LDB_Reader::ChunkItemAnimation::movement,
		"movement"
	),
	new TypedField<RPG::ItemAnimation, int32_t>(
		&RPG::ItemAnimation::after_image,
		LDB_Reader::ChunkItemAnimation::after_image,
		"after_image"
	),
	new TypedField<RPG::ItemAnimation, int32_t>(
		&RPG::ItemAnimation::attacks,
		LDB_Reader::ChunkItemAnimation::attacks,
		"attacks"
	),
	new TypedField<RPG::ItemAnimation, bool>(
		&RPG::ItemAnimation::ranged,
		LDB_Reader::ChunkItemAnimation::ranged,
		"ranged"
	),
	new TypedField<RPG::ItemAnimation, int32_t>(
		&RPG::ItemAnimation::ranged_anim,
		LDB_Reader::ChunkItemAnimation::ranged_anim,
		"ranged_anim"
	),
	new TypedField<RPG::ItemAnimation, int32_t>(
		&RPG::ItemAnimation::ranged_speed,
		LDB_Reader::ChunkItemAnimation::ranged_speed,
		"ranged_speed"
	),
	new TypedField<RPG::ItemAnimation, int32_t>(
		&RPG::ItemAnimation::battle_anim,
		LDB_Reader::ChunkItemAnimation::battle_anim,
		"battle_anim"
	),
	NULL
};
