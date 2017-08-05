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
#include "rpg_animationframe.h"


const std::vector<RPG::AnimationCellData>& RPG::AnimationFrame::GetCells() const  {
	return cells;
}

std::vector<RPG::AnimationCellData>& RPG::AnimationFrame::GetCells() {
	return cells;
}

void RPG::AnimationFrame::SetCells(const std::vector<RPG::AnimationCellData>& cells) {
	this->cells = cells;
}

