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

// Read SavePartyLocation.




template <>
char const* const Struct<RPG::SavePartyLocation>::name = "SavePartyLocation";

template <>
Field<RPG::SavePartyLocation> const* Struct<RPG::SavePartyLocation>::fields[] = {
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::active,
		LSD_Reader::ChunkSavePartyLocation::active,
		"active"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::map_id,
		LSD_Reader::ChunkSavePartyLocation::map_id,
		"map_id"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::position_x,
		LSD_Reader::ChunkSavePartyLocation::position_x,
		"position_x"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::position_y,
		LSD_Reader::ChunkSavePartyLocation::position_y,
		"position_y"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::direction,
		LSD_Reader::ChunkSavePartyLocation::direction,
		"direction"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::sprite_direction,
		LSD_Reader::ChunkSavePartyLocation::sprite_direction,
		"sprite_direction"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::anim_frame,
		LSD_Reader::ChunkSavePartyLocation::anim_frame,
		"anim_frame"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::transparency,
		LSD_Reader::ChunkSavePartyLocation::transparency,
		"transparency"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::remaining_step,
		LSD_Reader::ChunkSavePartyLocation::remaining_step,
		"remaining_step"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::move_frequency,
		LSD_Reader::ChunkSavePartyLocation::move_frequency,
		"move_frequency"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::layer,
		LSD_Reader::ChunkSavePartyLocation::layer,
		"layer"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::overlap_forbidden,
		LSD_Reader::ChunkSavePartyLocation::overlap_forbidden,
		"overlap_forbidden"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::animation_type,
		LSD_Reader::ChunkSavePartyLocation::animation_type,
		"animation_type"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::lock_facing,
		LSD_Reader::ChunkSavePartyLocation::lock_facing,
		"lock_facing"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::move_speed,
		LSD_Reader::ChunkSavePartyLocation::move_speed,
		"move_speed"
	),
	new TypedField<RPG::SavePartyLocation, RPG::MoveRoute>(
		&RPG::SavePartyLocation::move_route,
		LSD_Reader::ChunkSavePartyLocation::move_route,
		"move_route"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::move_route_overwrite,
		LSD_Reader::ChunkSavePartyLocation::move_route_overwrite,
		"move_route_overwrite"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::move_route_index,
		LSD_Reader::ChunkSavePartyLocation::move_route_index,
		"move_route_index"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::move_route_repeated,
		LSD_Reader::ChunkSavePartyLocation::move_route_repeated,
		"move_route_repeated"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::sprite_transparent,
		LSD_Reader::ChunkSavePartyLocation::sprite_transparent,
		"sprite_transparent"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::unknown_2f_overlap,
		LSD_Reader::ChunkSavePartyLocation::unknown_2f_overlap,
		"unknown_2f_overlap"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::anim_paused,
		LSD_Reader::ChunkSavePartyLocation::anim_paused,
		"anim_paused"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::through,
		LSD_Reader::ChunkSavePartyLocation::through,
		"through"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::stop_count,
		LSD_Reader::ChunkSavePartyLocation::stop_count,
		"stop_count"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::anim_count,
		LSD_Reader::ChunkSavePartyLocation::anim_count,
		"anim_count"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::max_stop_count,
		LSD_Reader::ChunkSavePartyLocation::max_stop_count,
		"max_stop_count"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::jumping,
		LSD_Reader::ChunkSavePartyLocation::jumping,
		"jumping"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::begin_jump_x,
		LSD_Reader::ChunkSavePartyLocation::begin_jump_x,
		"begin_jump_x"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::begin_jump_y,
		LSD_Reader::ChunkSavePartyLocation::begin_jump_y,
		"begin_jump_y"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::unknown_47_pause,
		LSD_Reader::ChunkSavePartyLocation::unknown_47_pause,
		"unknown_47_pause"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::flying,
		LSD_Reader::ChunkSavePartyLocation::flying,
		"flying"
	),
	new TypedField<RPG::SavePartyLocation, std::string>(
		&RPG::SavePartyLocation::sprite_name,
		LSD_Reader::ChunkSavePartyLocation::sprite_name,
		"sprite_name"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::sprite_id,
		LSD_Reader::ChunkSavePartyLocation::sprite_id,
		"sprite_id"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::unknown_4b_sprite_move,
		LSD_Reader::ChunkSavePartyLocation::unknown_4b_sprite_move,
		"unknown_4b_sprite_move"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::flash_red,
		LSD_Reader::ChunkSavePartyLocation::flash_red,
		"flash_red"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::flash_green,
		LSD_Reader::ChunkSavePartyLocation::flash_green,
		"flash_green"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::flash_blue,
		LSD_Reader::ChunkSavePartyLocation::flash_blue,
		"flash_blue"
	),
	new TypedField<RPG::SavePartyLocation, double>(
		&RPG::SavePartyLocation::flash_current_level,
		LSD_Reader::ChunkSavePartyLocation::flash_current_level,
		"flash_current_level"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::flash_time_left,
		LSD_Reader::ChunkSavePartyLocation::flash_time_left,
		"flash_time_left"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::boarding,
		LSD_Reader::ChunkSavePartyLocation::boarding,
		"boarding"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::aboard,
		LSD_Reader::ChunkSavePartyLocation::aboard,
		"aboard"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::vehicle,
		LSD_Reader::ChunkSavePartyLocation::vehicle,
		"vehicle"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::unboarding,
		LSD_Reader::ChunkSavePartyLocation::unboarding,
		"unboarding"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::preboard_move_speed,
		LSD_Reader::ChunkSavePartyLocation::preboard_move_speed,
		"preboard_move_speed"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::unknown_6c_menu_calling,
		LSD_Reader::ChunkSavePartyLocation::unknown_6c_menu_calling,
		"unknown_6c_menu_calling"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::pan_state,
		LSD_Reader::ChunkSavePartyLocation::pan_state,
		"pan_state"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::pan_current_x,
		LSD_Reader::ChunkSavePartyLocation::pan_current_x,
		"pan_current_x"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::pan_current_y,
		LSD_Reader::ChunkSavePartyLocation::pan_current_y,
		"pan_current_y"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::pan_finish_x,
		LSD_Reader::ChunkSavePartyLocation::pan_finish_x,
		"pan_finish_x"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::pan_finish_y,
		LSD_Reader::ChunkSavePartyLocation::pan_finish_y,
		"pan_finish_y"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::pan_speed,
		LSD_Reader::ChunkSavePartyLocation::pan_speed,
		"pan_speed"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::encounter_steps,
		LSD_Reader::ChunkSavePartyLocation::encounter_steps,
		"encounter_steps"
	),
	new TypedField<RPG::SavePartyLocation, bool>(
		&RPG::SavePartyLocation::unknown_7d_encounter_calling,
		LSD_Reader::ChunkSavePartyLocation::unknown_7d_encounter_calling,
		"unknown_7d_encounter_calling"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::map_save_count,
		LSD_Reader::ChunkSavePartyLocation::map_save_count,
		"map_save_count"
	),
	new TypedField<RPG::SavePartyLocation, int32_t>(
		&RPG::SavePartyLocation::database_save_count,
		LSD_Reader::ChunkSavePartyLocation::database_save_count,
		"database_save_count"
	),
	NULL
};
