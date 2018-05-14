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
	return type;
}

void RPG::ItemAnimation::SetType(int32_t type) {
	this->type = type;
}

int32_t RPG::ItemAnimation::GetWeaponAnim() const {
	return weapon_anim;
}

void RPG::ItemAnimation::SetWeaponAnim(int32_t weapon_anim) {
	this->weapon_anim = weapon_anim;
}

const int32_t& RPG::ItemAnimation::GetMovement() const  {
	return movement;
}

int32_t& RPG::ItemAnimation::GetMovement() {
	return movement;
}

void RPG::ItemAnimation::SetMovement(const int32_t& movement) {
	this->movement = movement;
}

const int32_t& RPG::ItemAnimation::GetAfterImage() const  {
	return after_image;
}

int32_t& RPG::ItemAnimation::GetAfterImage() {
	return after_image;
}

void RPG::ItemAnimation::SetAfterImage(const int32_t& after_image) {
	this->after_image = after_image;
}

int32_t RPG::ItemAnimation::GetAttacks() const {
	return attacks;
}

void RPG::ItemAnimation::SetAttacks(int32_t attacks) {
	this->attacks = attacks;
}

bool RPG::ItemAnimation::GetRanged() const {
	return ranged;
}

void RPG::ItemAnimation::SetRanged(bool ranged) {
	this->ranged = ranged;
}

int32_t RPG::ItemAnimation::GetRangedAnim() const {
	return ranged_anim;
}

void RPG::ItemAnimation::SetRangedAnim(int32_t ranged_anim) {
	this->ranged_anim = ranged_anim;
}

const int32_t& RPG::ItemAnimation::GetRangedSpeed() const  {
	return ranged_speed;
}

int32_t& RPG::ItemAnimation::GetRangedSpeed() {
	return ranged_speed;
}

void RPG::ItemAnimation::SetRangedSpeed(const int32_t& ranged_speed) {
	this->ranged_speed = ranged_speed;
}

const int32_t& RPG::ItemAnimation::GetBattleAnim() const  {
	return battle_anim;
}

int32_t& RPG::ItemAnimation::GetBattleAnim() {
	return battle_anim;
}

void RPG::ItemAnimation::SetBattleAnim(const int32_t& battle_anim) {
	this->battle_anim = battle_anim;
}

