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

// Read Event.




template <>
char const* const Struct<RPG::Event>::name = "Event";

template <>
Field<RPG::Event> const* Struct<RPG::Event>::fields[] = {
	new TypedField<RPG::Event, std::string>(
		&RPG::Event::name,
		LMU_Reader::ChunkEvent::name,
		"name"
	),
	new TypedField<RPG::Event, int32_t>(
		&RPG::Event::x,
		LMU_Reader::ChunkEvent::x,
		"x"
	),
	new TypedField<RPG::Event, int32_t>(
		&RPG::Event::y,
		LMU_Reader::ChunkEvent::y,
		"y"
	),
	new TypedField<RPG::Event, std::vector<RPG::EventPage>>(
		&RPG::Event::pages,
		LMU_Reader::ChunkEvent::pages,
		"pages"
	),
	NULL
};
