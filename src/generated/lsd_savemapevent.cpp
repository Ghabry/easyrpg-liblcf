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

// Read SaveMapEvent.




template <>
char const* const Struct<RPG::SaveMapEvent>::name = "SaveMapEvent";

template <>
Field<RPG::SaveMapEvent> const* Struct<RPG::SaveMapEvent>::fields[] = {
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::active,
		LSD_Reader::ChunkSaveMapEvent::active,
		"active"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::map_id,
		LSD_Reader::ChunkSaveMapEvent::map_id,
		"map_id"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::position_x,
		LSD_Reader::ChunkSaveMapEvent::position_x,
		"position_x"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::position_y,
		LSD_Reader::ChunkSaveMapEvent::position_y,
		"position_y"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::direction,
		LSD_Reader::ChunkSaveMapEvent::direction,
		"direction"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::sprite_direction,
		LSD_Reader::ChunkSaveMapEvent::sprite_direction,
		"sprite_direction"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::anim_frame,
		LSD_Reader::ChunkSaveMapEvent::anim_frame,
		"anim_frame"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::transparency,
		LSD_Reader::ChunkSaveMapEvent::transparency,
		"transparency"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::remaining_step,
		LSD_Reader::ChunkSaveMapEvent::remaining_step,
		"remaining_step"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::move_frequency,
		LSD_Reader::ChunkSaveMapEvent::move_frequency,
		"move_frequency"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::layer,
		LSD_Reader::ChunkSaveMapEvent::layer,
		"layer"
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::overlap_forbidden,
		LSD_Reader::ChunkSaveMapEvent::overlap_forbidden,
		"overlap_forbidden"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::animation_type,
		LSD_Reader::ChunkSaveMapEvent::animation_type,
		"animation_type"
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::lock_facing,
		LSD_Reader::ChunkSaveMapEvent::lock_facing,
		"lock_facing"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::move_speed,
		LSD_Reader::ChunkSaveMapEvent::move_speed,
		"move_speed"
	),
	new TypedField<RPG::SaveMapEvent, RPG::MoveRoute>(
		&RPG::SaveMapEvent::move_route,
		LSD_Reader::ChunkSaveMapEvent::move_route,
		"move_route"
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::move_route_overwrite,
		LSD_Reader::ChunkSaveMapEvent::move_route_overwrite,
		"move_route_overwrite"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::move_route_index,
		LSD_Reader::ChunkSaveMapEvent::move_route_index,
		"move_route_index"
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::move_route_repeated,
		LSD_Reader::ChunkSaveMapEvent::move_route_repeated,
		"move_route_repeated"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::unknown_2f_overlap,
		LSD_Reader::ChunkSaveMapEvent::unknown_2f_overlap,
		"unknown_2f_overlap"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::anim_paused,
		LSD_Reader::ChunkSaveMapEvent::anim_paused,
		"anim_paused"
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::through,
		LSD_Reader::ChunkSaveMapEvent::through,
		"through"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::stop_count,
		LSD_Reader::ChunkSaveMapEvent::stop_count,
		"stop_count"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::anim_count,
		LSD_Reader::ChunkSaveMapEvent::anim_count,
		"anim_count"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::max_stop_count,
		LSD_Reader::ChunkSaveMapEvent::max_stop_count,
		"max_stop_count"
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::jumping,
		LSD_Reader::ChunkSaveMapEvent::jumping,
		"jumping"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::begin_jump_x,
		LSD_Reader::ChunkSaveMapEvent::begin_jump_x,
		"begin_jump_x"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::begin_jump_y,
		LSD_Reader::ChunkSaveMapEvent::begin_jump_y,
		"begin_jump_y"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::unknown_47_pause,
		LSD_Reader::ChunkSaveMapEvent::unknown_47_pause,
		"unknown_47_pause"
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::flying,
		LSD_Reader::ChunkSaveMapEvent::flying,
		"flying"
	),
	new TypedField<RPG::SaveMapEvent, std::string>(
		&RPG::SaveMapEvent::sprite_name,
		LSD_Reader::ChunkSaveMapEvent::sprite_name,
		"sprite_name"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::sprite_id,
		LSD_Reader::ChunkSaveMapEvent::sprite_id,
		"sprite_id"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::unknown_4b_sprite_move,
		LSD_Reader::ChunkSaveMapEvent::unknown_4b_sprite_move,
		"unknown_4b_sprite_move"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::flash_red,
		LSD_Reader::ChunkSaveMapEvent::flash_red,
		"flash_red"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::flash_green,
		LSD_Reader::ChunkSaveMapEvent::flash_green,
		"flash_green"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::flash_blue,
		LSD_Reader::ChunkSaveMapEvent::flash_blue,
		"flash_blue"
	),
	new TypedField<RPG::SaveMapEvent, double>(
		&RPG::SaveMapEvent::flash_current_level,
		LSD_Reader::ChunkSaveMapEvent::flash_current_level,
		"flash_current_level"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::flash_time_left,
		LSD_Reader::ChunkSaveMapEvent::flash_time_left,
		"flash_time_left"
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::running,
		LSD_Reader::ChunkSaveMapEvent::running,
		"running"
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::original_move_route_index,
		LSD_Reader::ChunkSaveMapEvent::original_move_route_index,
		"original_move_route_index"
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::pending,
		LSD_Reader::ChunkSaveMapEvent::pending,
		"pending"
	),
	new TypedField<RPG::SaveMapEvent, RPG::SaveEventData>(
		&RPG::SaveMapEvent::event_data,
		LSD_Reader::ChunkSaveMapEvent::event_data,
		"event_data"
	),
	NULL
};
