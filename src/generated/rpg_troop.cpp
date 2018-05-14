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
#include "rpg_troop.h"


const std::string& RPG::Troop::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Troop::GetName() {
	return getter<std::string&>("name");
}

void RPG::Troop::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::vector<RPG::TroopMember>& RPG::Troop::GetMembers() const {
	return vector_getter<const std::vector<RPG::TroopMember>&, RPG::TroopMember>("members");
}

std::vector<RPG::TroopMember>& RPG::Troop::GetMembers() {
	return vector_getter<std::vector<RPG::TroopMember>&, RPG::TroopMember>("members");
}

bool RPG::Troop::GetAutoAlignment() const {
	return getter<bool>("auto_alignment");
}

void RPG::Troop::SetAutoAlignment(bool auto_alignment) {
	setter<bool>("auto_alignment", auto_alignment);
}


const std::vector<bool>& RPG::Troop::GetTerrainSet() const {
	return vector_getter<const std::vector<bool>&, bool>("terrain_set");
}

std::vector<bool>& RPG::Troop::GetTerrainSet() {
	return vector_getter<std::vector<bool>&, bool>("terrain_set");
}

bool RPG::Troop::GetAppearRandomly() const {
	return getter<bool>("appear_randomly");
}

void RPG::Troop::SetAppearRandomly(bool appear_randomly) {
	setter<bool>("appear_randomly", appear_randomly);
}

const std::vector<RPG::TroopPage>& RPG::Troop::GetPages() const {
	return vector_getter<const std::vector<RPG::TroopPage>&, RPG::TroopPage>("pages");
}

std::vector<RPG::TroopPage>& RPG::Troop::GetPages() {
	return vector_getter<std::vector<RPG::TroopPage>&, RPG::TroopPage>("pages");
}

