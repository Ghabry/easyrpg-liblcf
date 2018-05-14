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
#include "rpg_equipment.h"


const int16_t& RPG::Equipment::GetWeaponId() const {
	return getter<const int16_t&>("weapon_id");
}

int16_t& RPG::Equipment::GetWeaponId() {
	return getter<int16_t&>("weapon_id");
}

void RPG::Equipment::SetWeaponId(const int16_t& weapon_id) {
	setter<int16_t>("weapon_id", weapon_id);
}

const int16_t& RPG::Equipment::GetShieldId() const {
	return getter<const int16_t&>("shield_id");
}

int16_t& RPG::Equipment::GetShieldId() {
	return getter<int16_t&>("shield_id");
}

void RPG::Equipment::SetShieldId(const int16_t& shield_id) {
	setter<int16_t>("shield_id", shield_id);
}

const int16_t& RPG::Equipment::GetArmorId() const {
	return getter<const int16_t&>("armor_id");
}

int16_t& RPG::Equipment::GetArmorId() {
	return getter<int16_t&>("armor_id");
}

void RPG::Equipment::SetArmorId(const int16_t& armor_id) {
	setter<int16_t>("armor_id", armor_id);
}

const int16_t& RPG::Equipment::GetHelmetId() const {
	return getter<const int16_t&>("helmet_id");
}

int16_t& RPG::Equipment::GetHelmetId() {
	return getter<int16_t&>("helmet_id");
}

void RPG::Equipment::SetHelmetId(const int16_t& helmet_id) {
	setter<int16_t>("helmet_id", helmet_id);
}

const int16_t& RPG::Equipment::GetAccessoryId() const {
	return getter<const int16_t&>("accessory_id");
}

int16_t& RPG::Equipment::GetAccessoryId() {
	return getter<int16_t&>("accessory_id");
}

void RPG::Equipment::SetAccessoryId(const int16_t& accessory_id) {
	setter<int16_t>("accessory_id", accessory_id);
}

