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

// Read SaveMapInfo.




template <>
char const* const Struct<RPG::SaveMapInfo>::name = "SaveMapInfo";

template <>
Field<RPG::SaveMapInfo> const* Struct<RPG::SaveMapInfo>::fields[] = {
	new TypedField<RPG::SaveMapInfo, int32_t>(
		&RPG::SaveMapInfo::position_x,
		LSD_Reader::ChunkSaveMapInfo::position_x,
		"position_x"
	),
	new TypedField<RPG::SaveMapInfo, int32_t>(
		&RPG::SaveMapInfo::position_y,
		LSD_Reader::ChunkSaveMapInfo::position_y,
		"position_y"
	),
	new TypedField<RPG::SaveMapInfo, int32_t>(
		&RPG::SaveMapInfo::encounter_rate,
		LSD_Reader::ChunkSaveMapInfo::encounter_rate,
		"encounter_rate"
	),
	new TypedField<RPG::SaveMapInfo, int32_t>(
		&RPG::SaveMapInfo::chipset_id,
		LSD_Reader::ChunkSaveMapInfo::chipset_id,
		"chipset_id"
	),
	new TypedField<RPG::SaveMapInfo, std::vector<RPG::SaveMapEvent>>(
		&RPG::SaveMapInfo::events,
		LSD_Reader::ChunkSaveMapInfo::events,
		"events"
	),
	new TypedField<RPG::SaveMapInfo, std::vector<uint8_t>>(
		&RPG::SaveMapInfo::lower_tiles,
		LSD_Reader::ChunkSaveMapInfo::lower_tiles,
		"lower_tiles"
	),
	new TypedField<RPG::SaveMapInfo, std::vector<uint8_t>>(
		&RPG::SaveMapInfo::upper_tiles,
		LSD_Reader::ChunkSaveMapInfo::upper_tiles,
		"upper_tiles"
	),
	new TypedField<RPG::SaveMapInfo, std::string>(
		&RPG::SaveMapInfo::parallax_name,
		LSD_Reader::ChunkSaveMapInfo::parallax_name,
		"parallax_name"
	),
	new TypedField<RPG::SaveMapInfo, bool>(
		&RPG::SaveMapInfo::parallax_horz,
		LSD_Reader::ChunkSaveMapInfo::parallax_horz,
		"parallax_horz"
	),
	new TypedField<RPG::SaveMapInfo, bool>(
		&RPG::SaveMapInfo::parallax_vert,
		LSD_Reader::ChunkSaveMapInfo::parallax_vert,
		"parallax_vert"
	),
	new TypedField<RPG::SaveMapInfo, bool>(
		&RPG::SaveMapInfo::parallax_horz_auto,
		LSD_Reader::ChunkSaveMapInfo::parallax_horz_auto,
		"parallax_horz_auto"
	),
	new TypedField<RPG::SaveMapInfo, int32_t>(
		&RPG::SaveMapInfo::parallax_horz_speed,
		LSD_Reader::ChunkSaveMapInfo::parallax_horz_speed,
		"parallax_horz_speed"
	),
	new TypedField<RPG::SaveMapInfo, bool>(
		&RPG::SaveMapInfo::parallax_vert_auto,
		LSD_Reader::ChunkSaveMapInfo::parallax_vert_auto,
		"parallax_vert_auto"
	),
	new TypedField<RPG::SaveMapInfo, int32_t>(
		&RPG::SaveMapInfo::parallax_vert_speed,
		LSD_Reader::ChunkSaveMapInfo::parallax_vert_speed,
		"parallax_vert_speed"
	),
	NULL
};
