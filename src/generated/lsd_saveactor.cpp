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

// Read SaveActor.




template <>
char const* const Struct<RPG::SaveActor>::name = "SaveActor";

template <>
Field<RPG::SaveActor> const* Struct<RPG::SaveActor>::fields[] = {
	new TypedField<RPG::SaveActor, std::string>(
		&RPG::SaveActor::name,
		LSD_Reader::ChunkSaveActor::name,
		"name"
	),
	new TypedField<RPG::SaveActor, std::string>(
		&RPG::SaveActor::title,
		LSD_Reader::ChunkSaveActor::title,
		"title"
	),
	new TypedField<RPG::SaveActor, std::string>(
		&RPG::SaveActor::sprite_name,
		LSD_Reader::ChunkSaveActor::sprite_name,
		"sprite_name"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::sprite_id,
		LSD_Reader::ChunkSaveActor::sprite_id,
		"sprite_id"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::sprite_flags,
		LSD_Reader::ChunkSaveActor::sprite_flags,
		"sprite_flags"
	),
	new TypedField<RPG::SaveActor, std::string>(
		&RPG::SaveActor::face_name,
		LSD_Reader::ChunkSaveActor::face_name,
		"face_name"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::face_id,
		LSD_Reader::ChunkSaveActor::face_id,
		"face_id"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::level,
		LSD_Reader::ChunkSaveActor::level,
		"level"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::exp,
		LSD_Reader::ChunkSaveActor::exp,
		"exp"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::hp_mod,
		LSD_Reader::ChunkSaveActor::hp_mod,
		"hp_mod"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::sp_mod,
		LSD_Reader::ChunkSaveActor::sp_mod,
		"sp_mod"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::attack_mod,
		LSD_Reader::ChunkSaveActor::attack_mod,
		"attack_mod"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::defense_mod,
		LSD_Reader::ChunkSaveActor::defense_mod,
		"defense_mod"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::spirit_mod,
		LSD_Reader::ChunkSaveActor::spirit_mod,
		"spirit_mod"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::agility_mod,
		LSD_Reader::ChunkSaveActor::agility_mod,
		"agility_mod"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::skills_size,
		LSD_Reader::ChunkSaveActor::skills_size,
		"skills_size"
	),
	new TypedField<RPG::SaveActor, std::vector<int16_t>>(
		&RPG::SaveActor::skills,
		LSD_Reader::ChunkSaveActor::skills,
		"skills"
	),
	new TypedField<RPG::SaveActor, std::vector<int16_t>>(
		&RPG::SaveActor::equipped,
		LSD_Reader::ChunkSaveActor::equipped,
		"equipped"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::current_hp,
		LSD_Reader::ChunkSaveActor::current_hp,
		"current_hp"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::current_sp,
		LSD_Reader::ChunkSaveActor::current_sp,
		"current_sp"
	),
	new TypedField<RPG::SaveActor, std::vector<int32_t>>(
		&RPG::SaveActor::battle_commands,
		LSD_Reader::ChunkSaveActor::battle_commands,
		"battle_commands"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::status_size,
		LSD_Reader::ChunkSaveActor::status_size,
		"status_size"
	),
	new TypedField<RPG::SaveActor, std::vector<int16_t>>(
		&RPG::SaveActor::status,
		LSD_Reader::ChunkSaveActor::status,
		"status"
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::changed_battle_commands,
		LSD_Reader::ChunkSaveActor::changed_battle_commands,
		"changed_battle_commands"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::class_id,
		LSD_Reader::ChunkSaveActor::class_id,
		"class_id"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::row,
		LSD_Reader::ChunkSaveActor::row,
		"row"
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::two_weapon,
		LSD_Reader::ChunkSaveActor::two_weapon,
		"two_weapon"
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::lock_equipment,
		LSD_Reader::ChunkSaveActor::lock_equipment,
		"lock_equipment"
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::auto_battle,
		LSD_Reader::ChunkSaveActor::auto_battle,
		"auto_battle"
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::super_guard,
		LSD_Reader::ChunkSaveActor::super_guard,
		"super_guard"
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::battler_animation,
		LSD_Reader::ChunkSaveActor::battler_animation,
		"battler_animation"
	),
	NULL
};
