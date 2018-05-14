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
	return party_size;
}

void RPG::SaveInventory::SetPartySize(int32_t party_size) {
	this->party_size = party_size;
}

const std::vector<int16_t>& RPG::SaveInventory::GetParty() const  {
	return party;
}

std::vector<int16_t>& RPG::SaveInventory::GetParty() {
	return party;
}

int32_t RPG::SaveInventory::GetItemsSize() const {
	return items_size;
}

void RPG::SaveInventory::SetItemsSize(int32_t items_size) {
	this->items_size = items_size;
}

const std::vector<int16_t>& RPG::SaveInventory::GetItemIds() const  {
	return item_ids;
}

std::vector<int16_t>& RPG::SaveInventory::GetItemIds() {
	return item_ids;
}

const std::vector<uint8_t>& RPG::SaveInventory::GetItemCounts() const  {
	return item_counts;
}

std::vector<uint8_t>& RPG::SaveInventory::GetItemCounts() {
	return item_counts;
}

const std::vector<uint8_t>& RPG::SaveInventory::GetItemUsage() const  {
	return item_usage;
}

std::vector<uint8_t>& RPG::SaveInventory::GetItemUsage() {
	return item_usage;
}

int32_t RPG::SaveInventory::GetGold() const {
	return gold;
}

void RPG::SaveInventory::SetGold(int32_t gold) {
	this->gold = gold;
}

int32_t RPG::SaveInventory::GetTimer1Secs() const {
	return timer1_secs;
}

void RPG::SaveInventory::SetTimer1Secs(int32_t timer1_secs) {
	this->timer1_secs = timer1_secs;
}

bool RPG::SaveInventory::GetTimer1Active() const {
	return timer1_active;
}

void RPG::SaveInventory::SetTimer1Active(bool timer1_active) {
	this->timer1_active = timer1_active;
}

bool RPG::SaveInventory::GetTimer1Visible() const {
	return timer1_visible;
}

void RPG::SaveInventory::SetTimer1Visible(bool timer1_visible) {
	this->timer1_visible = timer1_visible;
}

bool RPG::SaveInventory::GetTimer1Battle() const {
	return timer1_battle;
}

void RPG::SaveInventory::SetTimer1Battle(bool timer1_battle) {
	this->timer1_battle = timer1_battle;
}

int32_t RPG::SaveInventory::GetTimer2Secs() const {
	return timer2_secs;
}

void RPG::SaveInventory::SetTimer2Secs(int32_t timer2_secs) {
	this->timer2_secs = timer2_secs;
}

bool RPG::SaveInventory::GetTimer2Active() const {
	return timer2_active;
}

void RPG::SaveInventory::SetTimer2Active(bool timer2_active) {
	this->timer2_active = timer2_active;
}

bool RPG::SaveInventory::GetTimer2Visible() const {
	return timer2_visible;
}

void RPG::SaveInventory::SetTimer2Visible(bool timer2_visible) {
	this->timer2_visible = timer2_visible;
}

bool RPG::SaveInventory::GetTimer2Battle() const {
	return timer2_battle;
}

void RPG::SaveInventory::SetTimer2Battle(bool timer2_battle) {
	this->timer2_battle = timer2_battle;
}

int32_t RPG::SaveInventory::GetBattles() const {
	return battles;
}

void RPG::SaveInventory::SetBattles(int32_t battles) {
	this->battles = battles;
}

int32_t RPG::SaveInventory::GetDefeats() const {
	return defeats;
}

void RPG::SaveInventory::SetDefeats(int32_t defeats) {
	this->defeats = defeats;
}

int32_t RPG::SaveInventory::GetEscapes() const {
	return escapes;
}

void RPG::SaveInventory::SetEscapes(int32_t escapes) {
	this->escapes = escapes;
}

int32_t RPG::SaveInventory::GetVictories() const {
	return victories;
}

void RPG::SaveInventory::SetVictories(int32_t victories) {
	this->victories = victories;
}

int32_t RPG::SaveInventory::GetTurns() const {
	return turns;
}

void RPG::SaveInventory::SetTurns(int32_t turns) {
	this->turns = turns;
}

int32_t RPG::SaveInventory::GetSteps() const {
	return steps;
}

void RPG::SaveInventory::SetSteps(int32_t steps) {
	this->steps = steps;
}

