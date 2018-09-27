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

// Read SaveEventData.




template <>
char const* const Struct<RPG::SaveEventData>::name = "SaveEventData";

template <>
Field<RPG::SaveEventData> const* Struct<RPG::SaveEventData>::fields[] = {
	new TypedField<RPG::SaveEventData, std::vector<RPG::SaveEventCommands>>(
		&RPG::SaveEventData::commands,
		LSD_Reader::ChunkSaveEventData::commands,
		"commands"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::show_message,
		LSD_Reader::ChunkSaveEventData::show_message,
		"show_message"
	),
	new TypedField<RPG::SaveEventData, int32_t>(
		&RPG::SaveEventData::unknown_0b_escape,
		LSD_Reader::ChunkSaveEventData::unknown_0b_escape,
		"unknown_0b_escape"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::wait_movement,
		LSD_Reader::ChunkSaveEventData::wait_movement,
		"wait_movement"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_wait,
		LSD_Reader::ChunkSaveEventData::keyinput_wait,
		"keyinput_wait"
	),
	new TypedField<RPG::SaveEventData, uint8_t>(
		&RPG::SaveEventData::keyinput_variable,
		LSD_Reader::ChunkSaveEventData::keyinput_variable,
		"keyinput_variable"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_all_directions,
		LSD_Reader::ChunkSaveEventData::keyinput_all_directions,
		"keyinput_all_directions"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_decision,
		LSD_Reader::ChunkSaveEventData::keyinput_decision,
		"keyinput_decision"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_cancel,
		LSD_Reader::ChunkSaveEventData::keyinput_cancel,
		"keyinput_cancel"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_numbers,
		LSD_Reader::ChunkSaveEventData::keyinput_numbers,
		"keyinput_numbers"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_operators,
		LSD_Reader::ChunkSaveEventData::keyinput_operators,
		"keyinput_operators"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_shift,
		LSD_Reader::ChunkSaveEventData::keyinput_shift,
		"keyinput_shift"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_value_right,
		LSD_Reader::ChunkSaveEventData::keyinput_value_right,
		"keyinput_value_right"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_value_up,
		LSD_Reader::ChunkSaveEventData::keyinput_value_up,
		"keyinput_value_up"
	),
	new TypedField<RPG::SaveEventData, int32_t>(
		&RPG::SaveEventData::wait_time,
		LSD_Reader::ChunkSaveEventData::wait_time,
		"wait_time"
	),
	new TypedField<RPG::SaveEventData, int32_t>(
		&RPG::SaveEventData::keyinput_time_variable,
		LSD_Reader::ChunkSaveEventData::keyinput_time_variable,
		"keyinput_time_variable"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_down,
		LSD_Reader::ChunkSaveEventData::keyinput_down,
		"keyinput_down"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_left,
		LSD_Reader::ChunkSaveEventData::keyinput_left,
		"keyinput_left"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_right,
		LSD_Reader::ChunkSaveEventData::keyinput_right,
		"keyinput_right"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_up,
		LSD_Reader::ChunkSaveEventData::keyinput_up,
		"keyinput_up"
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_timed,
		LSD_Reader::ChunkSaveEventData::keyinput_timed,
		"keyinput_timed"
	),
	new TypedField<RPG::SaveEventData, int32_t>(
		&RPG::SaveEventData::unknown_2a_time_left,
		LSD_Reader::ChunkSaveEventData::unknown_2a_time_left,
		"unknown_2a_time_left"
	),
	NULL
};
