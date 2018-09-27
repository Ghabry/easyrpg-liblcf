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

// Read AnimationTiming.




template <>
char const* const Struct<RPG::AnimationTiming>::name = "AnimationTiming";

template <>
Field<RPG::AnimationTiming> const* Struct<RPG::AnimationTiming>::fields[] = {
	new TypedField<RPG::AnimationTiming, int32_t>(
		&RPG::AnimationTiming::frame,
		LDB_Reader::ChunkAnimationTiming::frame,
		"frame"
	),
	new TypedField<RPG::AnimationTiming, RPG::Sound>(
		&RPG::AnimationTiming::se,
		LDB_Reader::ChunkAnimationTiming::se,
		"se"
	),
	new TypedField<RPG::AnimationTiming, int32_t>(
		&RPG::AnimationTiming::flash_scope,
		LDB_Reader::ChunkAnimationTiming::flash_scope,
		"flash_scope"
	),
	new TypedField<RPG::AnimationTiming, int32_t>(
		&RPG::AnimationTiming::flash_red,
		LDB_Reader::ChunkAnimationTiming::flash_red,
		"flash_red"
	),
	new TypedField<RPG::AnimationTiming, int32_t>(
		&RPG::AnimationTiming::flash_green,
		LDB_Reader::ChunkAnimationTiming::flash_green,
		"flash_green"
	),
	new TypedField<RPG::AnimationTiming, int32_t>(
		&RPG::AnimationTiming::flash_blue,
		LDB_Reader::ChunkAnimationTiming::flash_blue,
		"flash_blue"
	),
	new TypedField<RPG::AnimationTiming, int32_t>(
		&RPG::AnimationTiming::flash_power,
		LDB_Reader::ChunkAnimationTiming::flash_power,
		"flash_power"
	),
	new TypedField<RPG::AnimationTiming, int32_t>(
		&RPG::AnimationTiming::screen_shake,
		LDB_Reader::ChunkAnimationTiming::screen_shake,
		"screen_shake"
	),
	NULL
};
