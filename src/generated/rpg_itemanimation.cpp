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
#include "rpg_itemanimation.h"


int32_t RPG::ItemAnimation::GetType() const {
	return getter<int32_t>("type");
}

void RPG::ItemAnimation::SetType(int32_t type) {
	setter<int32_t>("type", type);
}

int32_t RPG::ItemAnimation::GetWeaponAnim() const {
	return getter<int32_t>("weapon_anim");
}

void RPG::ItemAnimation::SetWeaponAnim(int32_t weapon_anim) {
	setter<int32_t>("weapon_anim", weapon_anim);
}

const int32_t& RPG::ItemAnimation::GetMovement() const {
	return getter<const int32_t&>("movement");
}

int32_t& RPG::ItemAnimation::GetMovement() {
	return getter<int32_t&>("movement");
}

void RPG::ItemAnimation::SetMovement(const int32_t& movement) {
	setter<int32_t>("movement", movement);
}

const int32_t& RPG::ItemAnimation::GetAfterImage() const {
	return getter<const int32_t&>("after_image");
}

int32_t& RPG::ItemAnimation::GetAfterImage() {
	return getter<int32_t&>("after_image");
}

void RPG::ItemAnimation::SetAfterImage(const int32_t& after_image) {
	setter<int32_t>("after_image", after_image);
}

int32_t RPG::ItemAnimation::GetAttacks() const {
	return getter<int32_t>("attacks");
}

void RPG::ItemAnimation::SetAttacks(int32_t attacks) {
	setter<int32_t>("attacks", attacks);
}

bool RPG::ItemAnimation::GetRanged() const {
	return getter<bool>("ranged");
}

void RPG::ItemAnimation::SetRanged(bool ranged) {
	setter<bool>("ranged", ranged);
}

int32_t RPG::ItemAnimation::GetRangedAnim() const {
	return getter<int32_t>("ranged_anim");
}

void RPG::ItemAnimation::SetRangedAnim(int32_t ranged_anim) {
	setter<int32_t>("ranged_anim", ranged_anim);
}

const int32_t& RPG::ItemAnimation::GetRangedSpeed() const {
	return getter<const int32_t&>("ranged_speed");
}

int32_t& RPG::ItemAnimation::GetRangedSpeed() {
	return getter<int32_t&>("ranged_speed");
}

void RPG::ItemAnimation::SetRangedSpeed(const int32_t& ranged_speed) {
	setter<int32_t>("ranged_speed", ranged_speed);
}

const int32_t& RPG::ItemAnimation::GetBattleAnim() const {
	return getter<const int32_t&>("battle_anim");
}

int32_t& RPG::ItemAnimation::GetBattleAnim() {
	return getter<int32_t&>("battle_anim");
}

void RPG::ItemAnimation::SetBattleAnim(const int32_t& battle_anim) {
	setter<int32_t>("battle_anim", battle_anim);
}

