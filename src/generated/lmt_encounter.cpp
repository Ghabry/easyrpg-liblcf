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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_struct.h"

// Read Encounter.




template <>
char const* const Struct<RPG::Encounter>::name = "Encounter";

template <>
Field<RPG::Encounter> const* Struct<RPG::Encounter>::fields[] = {
	new TypedField<RPG::Encounter, int32_t>(
		&RPG::Encounter::troop_id,
		LMT_Reader::ChunkEncounter::troop_id,
		"troop_id"
	),
	NULL
};
