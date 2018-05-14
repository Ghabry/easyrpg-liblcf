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


const std::string& RPG::Troop::GetName() const  {
	return name;
}

std::string& RPG::Troop::GetName() {
	return name;
}

void RPG::Troop::SetName(const std::string& name) {
	this->name = name;
}

const std::vector<RPG::TroopMember>& RPG::Troop::GetMembers() const  {
	return members;
}

std::vector<RPG::TroopMember>& RPG::Troop::GetMembers() {
	return members;
}

bool RPG::Troop::GetAutoAlignment() const {
	return auto_alignment;
}

void RPG::Troop::SetAutoAlignment(bool auto_alignment) {
	this->auto_alignment = auto_alignment;
}


const std::vector<bool>& RPG::Troop::GetTerrainSet() const  {
	return terrain_set;
}

std::vector<bool>& RPG::Troop::GetTerrainSet() {
	return terrain_set;
}

bool RPG::Troop::GetAppearRandomly() const {
	return appear_randomly;
}

void RPG::Troop::SetAppearRandomly(bool appear_randomly) {
	this->appear_randomly = appear_randomly;
}

const std::vector<RPG::TroopPage>& RPG::Troop::GetPages() const  {
	return pages;
}

std::vector<RPG::TroopPage>& RPG::Troop::GetPages() {
	return pages;
}

