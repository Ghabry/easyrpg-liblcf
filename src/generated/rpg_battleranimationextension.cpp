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


const std::string& RPG::BattlerAnimationExtension::GetName() const  {
    return name;
}

std::string& RPG::BattlerAnimationExtension::GetName() {
    return name;
}

void RPG::BattlerAnimationExtension::SetName(const std::string& name) {
    this->name = name;
}

const std::string& RPG::BattlerAnimationExtension::GetBattlerName() const  {
    return battler_name;
}

std::string& RPG::BattlerAnimationExtension::GetBattlerName() {
    return battler_name;
}

void RPG::BattlerAnimationExtension::SetBattlerName(const std::string& battler_name) {
    this->battler_name = battler_name;
}

int RPG::BattlerAnimationExtension::GetBattlerIndex() const {
    return battler_index;
}

void RPG::BattlerAnimationExtension::SetBattlerIndex(int battler_index) {
    this->battler_index = battler_index;
}

int RPG::BattlerAnimationExtension::GetAnimationType() const {
    return animation_type;
}

void RPG::BattlerAnimationExtension::SetAnimationType(int animation_type) {
    this->animation_type = animation_type;
}

int RPG::BattlerAnimationExtension::GetAnimationId() const {
    return animation_id;
}

void RPG::BattlerAnimationExtension::SetAnimationId(int animation_id) {
    this->animation_id = animation_id;
}
