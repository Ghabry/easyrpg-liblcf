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

// Read MapInfo.




template <>
char const* const Struct<RPG::MapInfo>::name = "MapInfo";

template <>
Field<RPG::MapInfo> const* Struct<RPG::MapInfo>::fields[] = {
	new TypedField<RPG::MapInfo, std::string>(
		&RPG::MapInfo::name,
		LMT_Reader::ChunkMapInfo::name,
		"name"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::parent_map,
		LMT_Reader::ChunkMapInfo::parent_map,
		"parent_map"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::indentation,
		LMT_Reader::ChunkMapInfo::indentation,
		"indentation"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::type,
		LMT_Reader::ChunkMapInfo::type,
		"type"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::scrollbar_x,
		LMT_Reader::ChunkMapInfo::scrollbar_x,
		"scrollbar_x"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::scrollbar_y,
		LMT_Reader::ChunkMapInfo::scrollbar_y,
		"scrollbar_y"
	),
	new TypedField<RPG::MapInfo, bool>(
		&RPG::MapInfo::expanded_node,
		LMT_Reader::ChunkMapInfo::expanded_node,
		"expanded_node"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::music_type,
		LMT_Reader::ChunkMapInfo::music_type,
		"music_type"
	),
	new TypedField<RPG::MapInfo, RPG::Music>(
		&RPG::MapInfo::music,
		LMT_Reader::ChunkMapInfo::music,
		"music"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::background_type,
		LMT_Reader::ChunkMapInfo::background_type,
		"background_type"
	),
	new TypedField<RPG::MapInfo, std::string>(
		&RPG::MapInfo::background_name,
		LMT_Reader::ChunkMapInfo::background_name,
		"background_name"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::teleport,
		LMT_Reader::ChunkMapInfo::teleport,
		"teleport"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::escape,
		LMT_Reader::ChunkMapInfo::escape,
		"escape"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::save,
		LMT_Reader::ChunkMapInfo::save,
		"save"
	),
	new TypedField<RPG::MapInfo, std::vector<RPG::Encounter>>(
		&RPG::MapInfo::encounters,
		LMT_Reader::ChunkMapInfo::encounters,
		"encounters"
	),
	new TypedField<RPG::MapInfo, int32_t>(
		&RPG::MapInfo::encounter_steps,
		LMT_Reader::ChunkMapInfo::encounter_steps,
		"encounter_steps"
	),
	new TypedField<RPG::MapInfo, RPG::Rect>(
		&RPG::MapInfo::area_rect,
		LMT_Reader::ChunkMapInfo::area_rect,
		"area_rect"
	),
	NULL
};
