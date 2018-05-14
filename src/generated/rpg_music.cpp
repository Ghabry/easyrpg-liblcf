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
#include "rpg_music.h"


const std::string& RPG::Music::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Music::GetName() {
	return getter<std::string&>("name");
}

void RPG::Music::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int32_t RPG::Music::GetFadein() const {
	return getter<int32_t>("fadein");
}

void RPG::Music::SetFadein(int32_t fadein) {
	setter<int32_t>("fadein", fadein);
}

int32_t RPG::Music::GetVolume() const {
	return getter<int32_t>("volume");
}

void RPG::Music::SetVolume(int32_t volume) {
	setter<int32_t>("volume", volume);
}

int32_t RPG::Music::GetTempo() const {
	return getter<int32_t>("tempo");
}

void RPG::Music::SetTempo(int32_t tempo) {
	setter<int32_t>("tempo", tempo);
}

int32_t RPG::Music::GetBalance() const {
	return getter<int32_t>("balance");
}

void RPG::Music::SetBalance(int32_t balance) {
	setter<int32_t>("balance", balance);
}

