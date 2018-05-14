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
#include "rpg_event.h"


const std::string& RPG::Event::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Event::GetName() {
	return getter<std::string&>("name");
}

void RPG::Event::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int32_t RPG::Event::GetX() const {
	return getter<int32_t>("x");
}

void RPG::Event::SetX(int32_t x) {
	setter<int32_t>("x", x);
}

int32_t RPG::Event::GetY() const {
	return getter<int32_t>("y");
}

void RPG::Event::SetY(int32_t y) {
	setter<int32_t>("y", y);
}

const std::vector<RPG::EventPage>& RPG::Event::GetPages() const {
	return vector_getter<const std::vector<RPG::EventPage>&, RPG::EventPage>("pages");
}

std::vector<RPG::EventPage>& RPG::Event::GetPages() {
	return vector_getter<std::vector<RPG::EventPage>&, RPG::EventPage>("pages");
}

