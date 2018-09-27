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

// Read State.




template <>
char const* const Struct<RPG::State>::name = "State";

template <>
Field<RPG::State> const* Struct<RPG::State>::fields[] = {
	new TypedField<RPG::State, std::string>(
		&RPG::State::name,
		LDB_Reader::ChunkState::name,
		"name"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::type,
		LDB_Reader::ChunkState::type,
		"type"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::color,
		LDB_Reader::ChunkState::color,
		"color"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::priority,
		LDB_Reader::ChunkState::priority,
		"priority"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::restriction,
		LDB_Reader::ChunkState::restriction,
		"restriction"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::a_rate,
		LDB_Reader::ChunkState::a_rate,
		"a_rate"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::b_rate,
		LDB_Reader::ChunkState::b_rate,
		"b_rate"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::c_rate,
		LDB_Reader::ChunkState::c_rate,
		"c_rate"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::d_rate,
		LDB_Reader::ChunkState::d_rate,
		"d_rate"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::e_rate,
		LDB_Reader::ChunkState::e_rate,
		"e_rate"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::hold_turn,
		LDB_Reader::ChunkState::hold_turn,
		"hold_turn"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::auto_release_prob,
		LDB_Reader::ChunkState::auto_release_prob,
		"auto_release_prob"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::release_by_damage,
		LDB_Reader::ChunkState::release_by_damage,
		"release_by_damage"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::affect_type,
		LDB_Reader::ChunkState::affect_type,
		"affect_type"
	),
	new TypedField<RPG::State, bool>(
		&RPG::State::affect_attack,
		LDB_Reader::ChunkState::affect_attack,
		"affect_attack"
	),
	new TypedField<RPG::State, bool>(
		&RPG::State::affect_defense,
		LDB_Reader::ChunkState::affect_defense,
		"affect_defense"
	),
	new TypedField<RPG::State, bool>(
		&RPG::State::affect_spirit,
		LDB_Reader::ChunkState::affect_spirit,
		"affect_spirit"
	),
	new TypedField<RPG::State, bool>(
		&RPG::State::affect_agility,
		LDB_Reader::ChunkState::affect_agility,
		"affect_agility"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::reduce_hit_ratio,
		LDB_Reader::ChunkState::reduce_hit_ratio,
		"reduce_hit_ratio"
	),
	new TypedField<RPG::State, bool>(
		&RPG::State::avoid_attacks,
		LDB_Reader::ChunkState::avoid_attacks,
		"avoid_attacks"
	),
	new TypedField<RPG::State, bool>(
		&RPG::State::reflect_magic,
		LDB_Reader::ChunkState::reflect_magic,
		"reflect_magic"
	),
	new TypedField<RPG::State, bool>(
		&RPG::State::cursed,
		LDB_Reader::ChunkState::cursed,
		"cursed"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::battler_animation_id,
		LDB_Reader::ChunkState::battler_animation_id,
		"battler_animation_id"
	),
	new TypedField<RPG::State, bool>(
		&RPG::State::restrict_skill,
		LDB_Reader::ChunkState::restrict_skill,
		"restrict_skill"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::restrict_skill_level,
		LDB_Reader::ChunkState::restrict_skill_level,
		"restrict_skill_level"
	),
	new TypedField<RPG::State, bool>(
		&RPG::State::restrict_magic,
		LDB_Reader::ChunkState::restrict_magic,
		"restrict_magic"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::restrict_magic_level,
		LDB_Reader::ChunkState::restrict_magic_level,
		"restrict_magic_level"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::hp_change_type,
		LDB_Reader::ChunkState::hp_change_type,
		"hp_change_type"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::sp_change_type,
		LDB_Reader::ChunkState::sp_change_type,
		"sp_change_type"
	),
	new TypedField<RPG::State, std::string>(
		&RPG::State::message_actor,
		LDB_Reader::ChunkState::message_actor,
		"message_actor"
	),
	new TypedField<RPG::State, std::string>(
		&RPG::State::message_enemy,
		LDB_Reader::ChunkState::message_enemy,
		"message_enemy"
	),
	new TypedField<RPG::State, std::string>(
		&RPG::State::message_already,
		LDB_Reader::ChunkState::message_already,
		"message_already"
	),
	new TypedField<RPG::State, std::string>(
		&RPG::State::message_affected,
		LDB_Reader::ChunkState::message_affected,
		"message_affected"
	),
	new TypedField<RPG::State, std::string>(
		&RPG::State::message_recovery,
		LDB_Reader::ChunkState::message_recovery,
		"message_recovery"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::hp_change_max,
		LDB_Reader::ChunkState::hp_change_max,
		"hp_change_max"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::hp_change_val,
		LDB_Reader::ChunkState::hp_change_val,
		"hp_change_val"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::hp_change_map_steps,
		LDB_Reader::ChunkState::hp_change_map_steps,
		"hp_change_map_steps"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::hp_change_map_val,
		LDB_Reader::ChunkState::hp_change_map_val,
		"hp_change_map_val"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::sp_change_max,
		LDB_Reader::ChunkState::sp_change_max,
		"sp_change_max"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::sp_change_val,
		LDB_Reader::ChunkState::sp_change_val,
		"sp_change_val"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::sp_change_map_steps,
		LDB_Reader::ChunkState::sp_change_map_steps,
		"sp_change_map_steps"
	),
	new TypedField<RPG::State, int32_t>(
		&RPG::State::sp_change_map_val,
		LDB_Reader::ChunkState::sp_change_map_val,
		"sp_change_map_val"
	),
	NULL
};
