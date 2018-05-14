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
#include "rpg_animation.h"


const std::string& RPG::Animation::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Animation::GetName() {
	return getter<std::string&>("name");
}

void RPG::Animation::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::Animation::GetAnimationName() const {
	return getter<const std::string&>("animation_name");
}

std::string& RPG::Animation::GetAnimationName() {
	return getter<std::string&>("animation_name");
}

void RPG::Animation::SetAnimationName(const std::string& animation_name) {
	setter<std::string>("animation_name", animation_name);
}

bool RPG::Animation::GetLarge() const {
	return getter<bool>("large");
}

void RPG::Animation::SetLarge(bool large) {
	setter<bool>("large", large);
}

const std::vector<RPG::AnimationTiming>& RPG::Animation::GetTimings() const {
	return vector_getter<const std::vector<RPG::AnimationTiming>&, RPG::AnimationTiming>("timings");
}

std::vector<RPG::AnimationTiming>& RPG::Animation::GetTimings() {
	return vector_getter<std::vector<RPG::AnimationTiming>&, RPG::AnimationTiming>("timings");
}

const int32_t& RPG::Animation::GetScope() const {
	return getter<const int32_t&>("scope");
}

int32_t& RPG::Animation::GetScope() {
	return getter<int32_t&>("scope");
}

void RPG::Animation::SetScope(const int32_t& scope) {
	setter<int32_t>("scope", scope);
}

const int32_t& RPG::Animation::GetPosition() const {
	return getter<const int32_t&>("position");
}

int32_t& RPG::Animation::GetPosition() {
	return getter<int32_t&>("position");
}

void RPG::Animation::SetPosition(const int32_t& position) {
	setter<int32_t>("position", position);
}

const std::vector<RPG::AnimationFrame>& RPG::Animation::GetFrames() const {
	return vector_getter<const std::vector<RPG::AnimationFrame>&, RPG::AnimationFrame>("frames");
}

std::vector<RPG::AnimationFrame>& RPG::Animation::GetFrames() {
	return vector_getter<std::vector<RPG::AnimationFrame>&, RPG::AnimationFrame>("frames");
}

