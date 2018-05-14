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
#include "rpg_animationtiming.h"


int32_t RPG::AnimationTiming::GetFrame() const {
	return getter<int32_t>("frame");
}

void RPG::AnimationTiming::SetFrame(int32_t frame) {
	setter<int32_t>("frame", frame);
}

const RPG::Sound& RPG::AnimationTiming::GetSe() const {
	return getter<const RPG::Sound&>("se");
}

RPG::Sound& RPG::AnimationTiming::GetSe() {
	return getter<RPG::Sound&>("se");
}

void RPG::AnimationTiming::SetSe(const RPG::Sound& se) {
	setter<RPG::Sound>("se", se);
}

const int32_t& RPG::AnimationTiming::GetFlashScope() const {
	return getter<const int32_t&>("flash_scope");
}

int32_t& RPG::AnimationTiming::GetFlashScope() {
	return getter<int32_t&>("flash_scope");
}

void RPG::AnimationTiming::SetFlashScope(const int32_t& flash_scope) {
	setter<int32_t>("flash_scope", flash_scope);
}

int32_t RPG::AnimationTiming::GetFlashRed() const {
	return getter<int32_t>("flash_red");
}

void RPG::AnimationTiming::SetFlashRed(int32_t flash_red) {
	setter<int32_t>("flash_red", flash_red);
}

int32_t RPG::AnimationTiming::GetFlashGreen() const {
	return getter<int32_t>("flash_green");
}

void RPG::AnimationTiming::SetFlashGreen(int32_t flash_green) {
	setter<int32_t>("flash_green", flash_green);
}

int32_t RPG::AnimationTiming::GetFlashBlue() const {
	return getter<int32_t>("flash_blue");
}

void RPG::AnimationTiming::SetFlashBlue(int32_t flash_blue) {
	setter<int32_t>("flash_blue", flash_blue);
}

int32_t RPG::AnimationTiming::GetFlashPower() const {
	return getter<int32_t>("flash_power");
}

void RPG::AnimationTiming::SetFlashPower(int32_t flash_power) {
	setter<int32_t>("flash_power", flash_power);
}

const int32_t& RPG::AnimationTiming::GetScreenShake() const {
	return getter<const int32_t&>("screen_shake");
}

int32_t& RPG::AnimationTiming::GetScreenShake() {
	return getter<int32_t&>("screen_shake");
}

void RPG::AnimationTiming::SetScreenShake(const int32_t& screen_shake) {
	setter<int32_t>("screen_shake", screen_shake);
}

