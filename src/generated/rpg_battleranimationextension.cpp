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
#include "rpg_battleranimationextension.h"


const std::string& RPG::BattlerAnimationExtension::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::BattlerAnimationExtension::GetName() {
	return getter<std::string&>("name");
}

void RPG::BattlerAnimationExtension::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::BattlerAnimationExtension::GetBattlerName() const {
	return getter<const std::string&>("battler_name");
}

std::string& RPG::BattlerAnimationExtension::GetBattlerName() {
	return getter<std::string&>("battler_name");
}

void RPG::BattlerAnimationExtension::SetBattlerName(const std::string& battler_name) {
	setter<std::string>("battler_name", battler_name);
}

int32_t RPG::BattlerAnimationExtension::GetBattlerIndex() const {
	return getter<int32_t>("battler_index");
}

void RPG::BattlerAnimationExtension::SetBattlerIndex(int32_t battler_index) {
	setter<int32_t>("battler_index", battler_index);
}

const int32_t& RPG::BattlerAnimationExtension::GetAnimationType() const {
	return getter<const int32_t&>("animation_type");
}

int32_t& RPG::BattlerAnimationExtension::GetAnimationType() {
	return getter<int32_t&>("animation_type");
}

void RPG::BattlerAnimationExtension::SetAnimationType(const int32_t& animation_type) {
	setter<int32_t>("animation_type", animation_type);
}

const int32_t& RPG::BattlerAnimationExtension::GetAnimationId() const {
	return getter<const int32_t&>("animation_id");
}

int32_t& RPG::BattlerAnimationExtension::GetAnimationId() {
	return getter<int32_t&>("animation_id");
}

void RPG::BattlerAnimationExtension::SetAnimationId(const int32_t& animation_id) {
	setter<int32_t>("animation_id", animation_id);
}

