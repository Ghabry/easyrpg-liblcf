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
#include "rpg_sound.h"


const std::string& RPG::Sound::GetName() const  {
	return name;
}

std::string& RPG::Sound::GetName() {
	return name;
}

void RPG::Sound::SetName(const std::string& name) {
	this->name = name;
}

int32_t RPG::Sound::GetVolume() const {
	return volume;
}

void RPG::Sound::SetVolume(int32_t volume) {
	this->volume = volume;
}

int32_t RPG::Sound::GetTempo() const {
	return tempo;
}

void RPG::Sound::SetTempo(int32_t tempo) {
	this->tempo = tempo;
}

int32_t RPG::Sound::GetBalance() const {
	return balance;
}

void RPG::Sound::SetBalance(int32_t balance) {
	this->balance = balance;
}

