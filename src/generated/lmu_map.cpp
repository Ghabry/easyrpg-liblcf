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

// Read Map.




template <>
char const* const Struct<RPG::Map>::name = "Map";

template <>
Field<RPG::Map> const* Struct<RPG::Map>::fields[] = {
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::chipset_id,
		LMU_Reader::ChunkMap::chipset_id,
		"chipset_id"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::width,
		LMU_Reader::ChunkMap::width,
		"width"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::height,
		LMU_Reader::ChunkMap::height,
		"height"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::scroll_type,
		LMU_Reader::ChunkMap::scroll_type,
		"scroll_type"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::parallax_flag,
		LMU_Reader::ChunkMap::parallax_flag,
		"parallax_flag"
	),
	new TypedField<RPG::Map, std::string>(
		&RPG::Map::parallax_name,
		LMU_Reader::ChunkMap::parallax_name,
		"parallax_name"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::parallax_loop_x,
		LMU_Reader::ChunkMap::parallax_loop_x,
		"parallax_loop_x"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::parallax_loop_y,
		LMU_Reader::ChunkMap::parallax_loop_y,
		"parallax_loop_y"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::parallax_auto_loop_x,
		LMU_Reader::ChunkMap::parallax_auto_loop_x,
		"parallax_auto_loop_x"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::parallax_sx,
		LMU_Reader::ChunkMap::parallax_sx,
		"parallax_sx"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::parallax_auto_loop_y,
		LMU_Reader::ChunkMap::parallax_auto_loop_y,
		"parallax_auto_loop_y"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::parallax_sy,
		LMU_Reader::ChunkMap::parallax_sy,
		"parallax_sy"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::generator_flag,
		LMU_Reader::ChunkMap::generator_flag,
		"generator_flag"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::generator_mode,
		LMU_Reader::ChunkMap::generator_mode,
		"generator_mode"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::top_level,
		LMU_Reader::ChunkMap::top_level,
		"top_level"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::generator_tiles,
		LMU_Reader::ChunkMap::generator_tiles,
		"generator_tiles"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::generator_width,
		LMU_Reader::ChunkMap::generator_width,
		"generator_width"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::generator_height,
		LMU_Reader::ChunkMap::generator_height,
		"generator_height"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::generator_surround,
		LMU_Reader::ChunkMap::generator_surround,
		"generator_surround"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::generator_upper_wall,
		LMU_Reader::ChunkMap::generator_upper_wall,
		"generator_upper_wall"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::generator_floor_b,
		LMU_Reader::ChunkMap::generator_floor_b,
		"generator_floor_b"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::generator_floor_c,
		LMU_Reader::ChunkMap::generator_floor_c,
		"generator_floor_c"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::generator_extra_b,
		LMU_Reader::ChunkMap::generator_extra_b,
		"generator_extra_b"
	),
	new TypedField<RPG::Map, bool>(
		&RPG::Map::generator_extra_c,
		LMU_Reader::ChunkMap::generator_extra_c,
		"generator_extra_c"
	),
	new TypedField<RPG::Map, std::vector<uint32_t>>(
		&RPG::Map::generator_x,
		LMU_Reader::ChunkMap::generator_x,
		"generator_x"
	),
	new TypedField<RPG::Map, std::vector<uint32_t>>(
		&RPG::Map::generator_y,
		LMU_Reader::ChunkMap::generator_y,
		"generator_y"
	),
	new TypedField<RPG::Map, std::vector<int16_t>>(
		&RPG::Map::generator_tile_ids,
		LMU_Reader::ChunkMap::generator_tile_ids,
		"generator_tile_ids"
	),
	new TypedField<RPG::Map, std::vector<int16_t>>(
		&RPG::Map::lower_layer,
		LMU_Reader::ChunkMap::lower_layer,
		"lower_layer"
	),
	new TypedField<RPG::Map, std::vector<int16_t>>(
		&RPG::Map::upper_layer,
		LMU_Reader::ChunkMap::upper_layer,
		"upper_layer"
	),
	new TypedField<RPG::Map, std::vector<RPG::Event>>(
		&RPG::Map::events,
		LMU_Reader::ChunkMap::events,
		"events"
	),
	new TypedField<RPG::Map, int32_t>(
		&RPG::Map::save_count,
		LMU_Reader::ChunkMap::save_count,
		"save_count"
	),
	NULL
};
