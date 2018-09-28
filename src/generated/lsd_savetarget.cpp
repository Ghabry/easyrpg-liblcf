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

// Read SaveTarget.




template <>
char const* const Struct<RPG::SaveTarget>::name = "SaveTarget";

template <>
Field<RPG::SaveTarget> const* Struct<RPG::SaveTarget>::fields[] = {
	new TypedField<RPG::SaveTarget, int32_t>(
		&RPG::SaveTarget::map_id,
		LSD_Reader::ChunkSaveTarget::map_id,
		"map_id"
	),
	new TypedField<RPG::SaveTarget, int32_t>(
		&RPG::SaveTarget::map_x,
		LSD_Reader::ChunkSaveTarget::map_x,
		"map_x"
	),
	new TypedField<RPG::SaveTarget, int32_t>(
		&RPG::SaveTarget::map_y,
		LSD_Reader::ChunkSaveTarget::map_y,
		"map_y"
	),
	new TypedField<RPG::SaveTarget, bool>(
		&RPG::SaveTarget::switch_on,
		LSD_Reader::ChunkSaveTarget::switch_on,
		"switch_on"
	),
	new TypedField<RPG::SaveTarget, int32_t>(
		&RPG::SaveTarget::switch_id,
		LSD_Reader::ChunkSaveTarget::switch_id,
		"switch_id"
	),
	NULL
};
