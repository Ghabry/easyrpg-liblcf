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
#include "rpg_learning.h"


int32_t RPG::Learning::GetLevel() const {
	return getter<int32_t>("level");
}

void RPG::Learning::SetLevel(int32_t level) {
	setter<int32_t>("level", level);
}

const int32_t& RPG::Learning::GetSkillId() const {
	return getter<const int32_t&>("skill_id");
}

int32_t& RPG::Learning::GetSkillId() {
	return getter<int32_t&>("skill_id");
}

void RPG::Learning::SetSkillId(const int32_t& skill_id) {
	setter<int32_t>("skill_id", skill_id);
}

