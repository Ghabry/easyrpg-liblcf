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
#include "rpg_treemap.h"


const std::vector<RPG::MapInfo>& RPG::TreeMap::GetMaps() const  {
	return maps;
}

std::vector<RPG::MapInfo>& RPG::TreeMap::GetMaps() {
	return maps;
}

const std::vector<int32_t>& RPG::TreeMap::GetTreeOrder() const  {
	return tree_order;
}

std::vector<int32_t>& RPG::TreeMap::GetTreeOrder() {
	return tree_order;
}

int32_t RPG::TreeMap::GetActiveNode() const {
	return active_node;
}

void RPG::TreeMap::SetActiveNode(int32_t active_node) {
	this->active_node = active_node;
}

const RPG::Start& RPG::TreeMap::GetStart() const  {
	return start;
}

RPG::Start& RPG::TreeMap::GetStart() {
	return start;
}

void RPG::TreeMap::SetStart(const RPG::Start& start) {
	this->start = start;
}

