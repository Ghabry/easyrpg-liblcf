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


int RPG::AnimationTiming::GetFrame() const {
    return frame;
}

void RPG::AnimationTiming::SetFrame(int frame) {
    this->frame = frame;
}

const RPG::Sound& RPG::AnimationTiming::GetSe() const  {
    return se;
}

RPG::Sound& RPG::AnimationTiming::GetSe() {
    return se;
}

void RPG::AnimationTiming::SetSe(const RPG::Sound& se) {
    this->se = se;
}

int RPG::AnimationTiming::GetFlashScope() const {
    return flash_scope;
}

void RPG::AnimationTiming::SetFlashScope(int flash_scope) {
    this->flash_scope = flash_scope;
}

int RPG::AnimationTiming::GetFlashRed() const {
    return flash_red;
}

void RPG::AnimationTiming::SetFlashRed(int flash_red) {
    this->flash_red = flash_red;
}

int RPG::AnimationTiming::GetFlashGreen() const {
    return flash_green;
}

void RPG::AnimationTiming::SetFlashGreen(int flash_green) {
    this->flash_green = flash_green;
}

int RPG::AnimationTiming::GetFlashBlue() const {
    return flash_blue;
}

void RPG::AnimationTiming::SetFlashBlue(int flash_blue) {
    this->flash_blue = flash_blue;
}

int RPG::AnimationTiming::GetFlashPower() const {
    return flash_power;
}

void RPG::AnimationTiming::SetFlashPower(int flash_power) {
    this->flash_power = flash_power;
}

int RPG::AnimationTiming::GetScreenShake() const {
    return screen_shake;
}

void RPG::AnimationTiming::SetScreenShake(int screen_shake) {
    this->screen_shake = screen_shake;
}

