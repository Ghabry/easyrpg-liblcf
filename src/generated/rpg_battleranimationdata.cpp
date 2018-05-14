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
#include "rpg_battleranimationdata.h"


const int32_t& RPG::BattlerAnimationData::GetMove() const {
	return getter<const int32_t&>("move");
}

int32_t& RPG::BattlerAnimationData::GetMove() {
	return getter<int32_t&>("move");
}

void RPG::BattlerAnimationData::SetMove(const int32_t& move) {
	setter<int32_t>("move", move);
}

const int32_t& RPG::BattlerAnimationData::GetAfterImage() const {
	return getter<const int32_t&>("after_image");
}

int32_t& RPG::BattlerAnimationData::GetAfterImage() {
	return getter<int32_t&>("after_image");
}

void RPG::BattlerAnimationData::SetAfterImage(const int32_t& after_image) {
	setter<int32_t>("after_image", after_image);
}

int32_t RPG::BattlerAnimationData::GetPose() const {
	return getter<int32_t>("pose");
}

void RPG::BattlerAnimationData::SetPose(int32_t pose) {
	setter<int32_t>("pose", pose);
}

