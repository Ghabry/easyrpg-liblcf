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
#include "rpg_saveinventory.h"


int32_t RPG::SaveInventory::GetPartySize() const {
	return getter<int32_t>("party_size");
}

void RPG::SaveInventory::SetPartySize(int32_t party_size) {
	setter<int32_t>("party_size", party_size);
}

const std::vector<int16_t>& RPG::SaveInventory::GetParty() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("party");
}

std::vector<int16_t>& RPG::SaveInventory::GetParty() {
	return vector_getter<std::vector<int16_t>&, int16_t>("party");
}

int32_t RPG::SaveInventory::GetItemsSize() const {
	return getter<int32_t>("items_size");
}

void RPG::SaveInventory::SetItemsSize(int32_t items_size) {
	setter<int32_t>("items_size", items_size);
}

const std::vector<int16_t>& RPG::SaveInventory::GetItemIds() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("item_ids");
}

std::vector<int16_t>& RPG::SaveInventory::GetItemIds() {
	return vector_getter<std::vector<int16_t>&, int16_t>("item_ids");
}

const std::vector<uint8_t>& RPG::SaveInventory::GetItemCounts() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("item_counts");
}

std::vector<uint8_t>& RPG::SaveInventory::GetItemCounts() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("item_counts");
}

const std::vector<uint8_t>& RPG::SaveInventory::GetItemUsage() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("item_usage");
}

std::vector<uint8_t>& RPG::SaveInventory::GetItemUsage() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("item_usage");
}

int32_t RPG::SaveInventory::GetGold() const {
	return getter<int32_t>("gold");
}

void RPG::SaveInventory::SetGold(int32_t gold) {
	setter<int32_t>("gold", gold);
}

int32_t RPG::SaveInventory::GetTimer1Secs() const {
	return getter<int32_t>("timer1_secs");
}

void RPG::SaveInventory::SetTimer1Secs(int32_t timer1_secs) {
	setter<int32_t>("timer1_secs", timer1_secs);
}

bool RPG::SaveInventory::GetTimer1Active() const {
	return getter<bool>("timer1_active");
}

void RPG::SaveInventory::SetTimer1Active(bool timer1_active) {
	setter<bool>("timer1_active", timer1_active);
}

bool RPG::SaveInventory::GetTimer1Visible() const {
	return getter<bool>("timer1_visible");
}

void RPG::SaveInventory::SetTimer1Visible(bool timer1_visible) {
	setter<bool>("timer1_visible", timer1_visible);
}

bool RPG::SaveInventory::GetTimer1Battle() const {
	return getter<bool>("timer1_battle");
}

void RPG::SaveInventory::SetTimer1Battle(bool timer1_battle) {
	setter<bool>("timer1_battle", timer1_battle);
}

int32_t RPG::SaveInventory::GetTimer2Secs() const {
	return getter<int32_t>("timer2_secs");
}

void RPG::SaveInventory::SetTimer2Secs(int32_t timer2_secs) {
	setter<int32_t>("timer2_secs", timer2_secs);
}

bool RPG::SaveInventory::GetTimer2Active() const {
	return getter<bool>("timer2_active");
}

void RPG::SaveInventory::SetTimer2Active(bool timer2_active) {
	setter<bool>("timer2_active", timer2_active);
}

bool RPG::SaveInventory::GetTimer2Visible() const {
	return getter<bool>("timer2_visible");
}

void RPG::SaveInventory::SetTimer2Visible(bool timer2_visible) {
	setter<bool>("timer2_visible", timer2_visible);
}

bool RPG::SaveInventory::GetTimer2Battle() const {
	return getter<bool>("timer2_battle");
}

void RPG::SaveInventory::SetTimer2Battle(bool timer2_battle) {
	setter<bool>("timer2_battle", timer2_battle);
}

int32_t RPG::SaveInventory::GetBattles() const {
	return getter<int32_t>("battles");
}

void RPG::SaveInventory::SetBattles(int32_t battles) {
	setter<int32_t>("battles", battles);
}

int32_t RPG::SaveInventory::GetDefeats() const {
	return getter<int32_t>("defeats");
}

void RPG::SaveInventory::SetDefeats(int32_t defeats) {
	setter<int32_t>("defeats", defeats);
}

int32_t RPG::SaveInventory::GetEscapes() const {
	return getter<int32_t>("escapes");
}

void RPG::SaveInventory::SetEscapes(int32_t escapes) {
	setter<int32_t>("escapes", escapes);
}

int32_t RPG::SaveInventory::GetVictories() const {
	return getter<int32_t>("victories");
}

void RPG::SaveInventory::SetVictories(int32_t victories) {
	setter<int32_t>("victories", victories);
}

int32_t RPG::SaveInventory::GetTurns() const {
	return getter<int32_t>("turns");
}

void RPG::SaveInventory::SetTurns(int32_t turns) {
	setter<int32_t>("turns", turns);
}

int32_t RPG::SaveInventory::GetSteps() const {
	return getter<int32_t>("steps");
}

void RPG::SaveInventory::SetSteps(int32_t steps) {
	setter<int32_t>("steps", steps);
}

