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

// Read System.




template <>
char const* const Struct<RPG::System>::name = "System";

template <>
Field<RPG::System> const* Struct<RPG::System>::fields[] = {
	new TypedField<RPG::System, int32_t>(
		&RPG::System::ldb_id,
		LDB_Reader::ChunkSystem::ldb_id,
		"ldb_id"
	),
	new TypedField<RPG::System, std::string>(
		&RPG::System::boat_name,
		LDB_Reader::ChunkSystem::boat_name,
		"boat_name"
	),
	new TypedField<RPG::System, std::string>(
		&RPG::System::ship_name,
		LDB_Reader::ChunkSystem::ship_name,
		"ship_name"
	),
	new TypedField<RPG::System, std::string>(
		&RPG::System::airship_name,
		LDB_Reader::ChunkSystem::airship_name,
		"airship_name"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::boat_index,
		LDB_Reader::ChunkSystem::boat_index,
		"boat_index"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::ship_index,
		LDB_Reader::ChunkSystem::ship_index,
		"ship_index"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::airship_index,
		LDB_Reader::ChunkSystem::airship_index,
		"airship_index"
	),
	new TypedField<RPG::System, std::string>(
		&RPG::System::title_name,
		LDB_Reader::ChunkSystem::title_name,
		"title_name"
	),
	new TypedField<RPG::System, std::string>(
		&RPG::System::gameover_name,
		LDB_Reader::ChunkSystem::gameover_name,
		"gameover_name"
	),
	new TypedField<RPG::System, std::string>(
		&RPG::System::system_name,
		LDB_Reader::ChunkSystem::system_name,
		"system_name"
	),
	new TypedField<RPG::System, std::string>(
		&RPG::System::system2_name,
		LDB_Reader::ChunkSystem::system2_name,
		"system2_name"
	),
	new SizeField<RPG::System, int16_t>(
		&RPG::System::party,
		LDB_Reader::ChunkSystem::party_size
	),
	new TypedField<RPG::System, std::vector<int16_t>>(
		&RPG::System::party,
		LDB_Reader::ChunkSystem::party,
		"party"
	),
	new SizeField<RPG::System, int16_t>(
		&RPG::System::menu_commands,
		LDB_Reader::ChunkSystem::menu_commands_size
	),
	new TypedField<RPG::System, std::vector<int16_t>>(
		&RPG::System::menu_commands,
		LDB_Reader::ChunkSystem::menu_commands,
		"menu_commands"
	),
	new TypedField<RPG::System, RPG::Music>(
		&RPG::System::title_music,
		LDB_Reader::ChunkSystem::title_music,
		"title_music"
	),
	new TypedField<RPG::System, RPG::Music>(
		&RPG::System::battle_music,
		LDB_Reader::ChunkSystem::battle_music,
		"battle_music"
	),
	new TypedField<RPG::System, RPG::Music>(
		&RPG::System::battle_end_music,
		LDB_Reader::ChunkSystem::battle_end_music,
		"battle_end_music"
	),
	new TypedField<RPG::System, RPG::Music>(
		&RPG::System::inn_music,
		LDB_Reader::ChunkSystem::inn_music,
		"inn_music"
	),
	new TypedField<RPG::System, RPG::Music>(
		&RPG::System::boat_music,
		LDB_Reader::ChunkSystem::boat_music,
		"boat_music"
	),
	new TypedField<RPG::System, RPG::Music>(
		&RPG::System::ship_music,
		LDB_Reader::ChunkSystem::ship_music,
		"ship_music"
	),
	new TypedField<RPG::System, RPG::Music>(
		&RPG::System::airship_music,
		LDB_Reader::ChunkSystem::airship_music,
		"airship_music"
	),
	new TypedField<RPG::System, RPG::Music>(
		&RPG::System::gameover_music,
		LDB_Reader::ChunkSystem::gameover_music,
		"gameover_music"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::cursor_se,
		LDB_Reader::ChunkSystem::cursor_se,
		"cursor_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::decision_se,
		LDB_Reader::ChunkSystem::decision_se,
		"decision_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::cancel_se,
		LDB_Reader::ChunkSystem::cancel_se,
		"cancel_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::buzzer_se,
		LDB_Reader::ChunkSystem::buzzer_se,
		"buzzer_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::battle_se,
		LDB_Reader::ChunkSystem::battle_se,
		"battle_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::escape_se,
		LDB_Reader::ChunkSystem::escape_se,
		"escape_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::enemy_attack_se,
		LDB_Reader::ChunkSystem::enemy_attack_se,
		"enemy_attack_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::enemy_damaged_se,
		LDB_Reader::ChunkSystem::enemy_damaged_se,
		"enemy_damaged_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::actor_damaged_se,
		LDB_Reader::ChunkSystem::actor_damaged_se,
		"actor_damaged_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::dodge_se,
		LDB_Reader::ChunkSystem::dodge_se,
		"dodge_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::enemy_death_se,
		LDB_Reader::ChunkSystem::enemy_death_se,
		"enemy_death_se"
	),
	new TypedField<RPG::System, RPG::Sound>(
		&RPG::System::item_se,
		LDB_Reader::ChunkSystem::item_se,
		"item_se"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::transition_out,
		LDB_Reader::ChunkSystem::transition_out,
		"transition_out"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::transition_in,
		LDB_Reader::ChunkSystem::transition_in,
		"transition_in"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::battle_start_fadeout,
		LDB_Reader::ChunkSystem::battle_start_fadeout,
		"battle_start_fadeout"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::battle_start_fadein,
		LDB_Reader::ChunkSystem::battle_start_fadein,
		"battle_start_fadein"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::battle_end_fadeout,
		LDB_Reader::ChunkSystem::battle_end_fadeout,
		"battle_end_fadeout"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::battle_end_fadein,
		LDB_Reader::ChunkSystem::battle_end_fadein,
		"battle_end_fadein"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::message_stretch,
		LDB_Reader::ChunkSystem::message_stretch,
		"message_stretch"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::font_id,
		LDB_Reader::ChunkSystem::font_id,
		"font_id"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::selected_condition,
		LDB_Reader::ChunkSystem::selected_condition,
		"selected_condition"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::selected_hero,
		LDB_Reader::ChunkSystem::selected_hero,
		"selected_hero"
	),
	new TypedField<RPG::System, std::string>(
		&RPG::System::battletest_background,
		LDB_Reader::ChunkSystem::battletest_background,
		"battletest_background"
	),
	new TypedField<RPG::System, std::vector<RPG::TestBattler>>(
		&RPG::System::battletest_data,
		LDB_Reader::ChunkSystem::battletest_data,
		"battletest_data"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::save_count,
		LDB_Reader::ChunkSystem::save_count,
		"save_count"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::battletest_terrain,
		LDB_Reader::ChunkSystem::battletest_terrain,
		"battletest_terrain"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::battletest_formation,
		LDB_Reader::ChunkSystem::battletest_formation,
		"battletest_formation"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::battletest_condition,
		LDB_Reader::ChunkSystem::battletest_condition,
		"battletest_condition"
	),
	new TypedField<RPG::System, int32_t>(
		&RPG::System::unknown_61,
		LDB_Reader::ChunkSystem::unknown_61,
		"unknown_61"
	),
	new TypedField<RPG::System, bool>(
		&RPG::System::show_frame,
		LDB_Reader::ChunkSystem::show_frame,
		"show_frame"
	),
	new TypedField<RPG::System, std::string>(
		&RPG::System::frame_name,
		LDB_Reader::ChunkSystem::frame_name,
		"frame_name"
	),
	new TypedField<RPG::System, bool>(
		&RPG::System::invert_animations,
		LDB_Reader::ChunkSystem::invert_animations,
		"invert_animations"
	),
	new TypedField<RPG::System, bool>(
		&RPG::System::show_title,
		LDB_Reader::ChunkSystem::show_title,
		"show_title"
	),
	NULL
};
