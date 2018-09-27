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

// Read Save.




template <>
char const* const Struct<RPG::Save>::name = "Save";

template <>
Field<RPG::Save> const* Struct<RPG::Save>::fields[] = {
	new TypedField<RPG::Save, RPG::SaveTitle>(
		&RPG::Save::title,
		LSD_Reader::ChunkSave::title,
		"title"
	),
	new TypedField<RPG::Save, RPG::SaveSystem>(
		&RPG::Save::system,
		LSD_Reader::ChunkSave::system,
		"system"
	),
	new TypedField<RPG::Save, RPG::SaveScreen>(
		&RPG::Save::screen,
		LSD_Reader::ChunkSave::screen,
		"screen"
	),
	new TypedField<RPG::Save, std::vector<RPG::SavePicture>>(
		&RPG::Save::pictures,
		LSD_Reader::ChunkSave::pictures,
		"pictures"
	),
	new TypedField<RPG::Save, RPG::SavePartyLocation>(
		&RPG::Save::party_location,
		LSD_Reader::ChunkSave::party_location,
		"party_location"
	),
	new TypedField<RPG::Save, RPG::SaveVehicleLocation>(
		&RPG::Save::boat_location,
		LSD_Reader::ChunkSave::boat_location,
		"boat_location"
	),
	new TypedField<RPG::Save, RPG::SaveVehicleLocation>(
		&RPG::Save::ship_location,
		LSD_Reader::ChunkSave::ship_location,
		"ship_location"
	),
	new TypedField<RPG::Save, RPG::SaveVehicleLocation>(
		&RPG::Save::airship_location,
		LSD_Reader::ChunkSave::airship_location,
		"airship_location"
	),
	new TypedField<RPG::Save, std::vector<RPG::SaveActor>>(
		&RPG::Save::actors,
		LSD_Reader::ChunkSave::actors,
		"actors"
	),
	new TypedField<RPG::Save, RPG::SaveInventory>(
		&RPG::Save::inventory,
		LSD_Reader::ChunkSave::inventory,
		"inventory"
	),
	new TypedField<RPG::Save, std::vector<RPG::SaveTarget>>(
		&RPG::Save::targets,
		LSD_Reader::ChunkSave::targets,
		"targets"
	),
	new TypedField<RPG::Save, RPG::SaveMapInfo>(
		&RPG::Save::map_info,
		LSD_Reader::ChunkSave::map_info,
		"map_info"
	),
	new TypedField<RPG::Save, int32_t>(
		&RPG::Save::panorama_data,
		LSD_Reader::ChunkSave::panorama_data,
		"panorama_data"
	),
	new TypedField<RPG::Save, RPG::SaveEventData>(
		&RPG::Save::events,
		LSD_Reader::ChunkSave::events,
		"events"
	),
	new TypedField<RPG::Save, std::vector<RPG::SaveCommonEvent>>(
		&RPG::Save::common_events,
		LSD_Reader::ChunkSave::common_events,
		"common_events"
	),
	NULL
};
