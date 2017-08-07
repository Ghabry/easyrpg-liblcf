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

RPG::AnimationFrame::AnimationFrame(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::vector<RPG::AnimationCellData>& RPG::AnimationFrame::GetCells() const {
	return vector_getter<const std::vector<RPG::AnimationCellData>&, RPG::AnimationCellData>("cells");
}

std::vector<RPG::AnimationCellData>& RPG::AnimationFrame::GetCells() {
	return vector_getter<std::vector<RPG::AnimationCellData>&, RPG::AnimationCellData>("cells");
}

