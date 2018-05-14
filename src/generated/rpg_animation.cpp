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


const std::string& RPG::Animation::GetName() const  {
	return name;
}

std::string& RPG::Animation::GetName() {
	return name;
}

void RPG::Animation::SetName(const std::string& name) {
	this->name = name;
}

const std::string& RPG::Animation::GetAnimationName() const  {
	return animation_name;
}

std::string& RPG::Animation::GetAnimationName() {
	return animation_name;
}

void RPG::Animation::SetAnimationName(const std::string& animation_name) {
	this->animation_name = animation_name;
}

bool RPG::Animation::GetLarge() const {
	return large;
}

void RPG::Animation::SetLarge(bool large) {
	this->large = large;
}

const std::vector<RPG::AnimationTiming>& RPG::Animation::GetTimings() const  {
	return timings;
}

std::vector<RPG::AnimationTiming>& RPG::Animation::GetTimings() {
	return timings;
}

const int32_t& RPG::Animation::GetScope() const  {
	return scope;
}

int32_t& RPG::Animation::GetScope() {
	return scope;
}

void RPG::Animation::SetScope(const int32_t& scope) {
	this->scope = scope;
}

const int32_t& RPG::Animation::GetPosition() const  {
	return position;
}

int32_t& RPG::Animation::GetPosition() {
	return position;
}

void RPG::Animation::SetPosition(const int32_t& position) {
	this->position = position;
}

const std::vector<RPG::AnimationFrame>& RPG::Animation::GetFrames() const  {
	return frames;
}

std::vector<RPG::AnimationFrame>& RPG::Animation::GetFrames() {
	return frames;
}

