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
#include "rpg_eventpage.h"


const RPG::EventPageCondition& RPG::EventPage::GetCondition() const {
	return getter<const RPG::EventPageCondition&>("condition");
}

RPG::EventPageCondition& RPG::EventPage::GetCondition() {
	return getter<RPG::EventPageCondition&>("condition");
}

void RPG::EventPage::SetCondition(const RPG::EventPageCondition& condition) {
	setter<RPG::EventPageCondition>("condition", condition);
}

const std::string& RPG::EventPage::GetCharacterName() const {
	return getter<const std::string&>("character_name");
}

std::string& RPG::EventPage::GetCharacterName() {
	return getter<std::string&>("character_name");
}

void RPG::EventPage::SetCharacterName(const std::string& character_name) {
	setter<std::string>("character_name", character_name);
}

int32_t RPG::EventPage::GetCharacterIndex() const {
	return getter<int32_t>("character_index");
}

void RPG::EventPage::SetCharacterIndex(int32_t character_index) {
	setter<int32_t>("character_index", character_index);
}

const int32_t& RPG::EventPage::GetCharacterDirection() const {
	return getter<const int32_t&>("character_direction");
}

int32_t& RPG::EventPage::GetCharacterDirection() {
	return getter<int32_t&>("character_direction");
}

void RPG::EventPage::SetCharacterDirection(const int32_t& character_direction) {
	setter<int32_t>("character_direction", character_direction);
}

const int32_t& RPG::EventPage::GetCharacterPattern() const {
	return getter<const int32_t&>("character_pattern");
}

int32_t& RPG::EventPage::GetCharacterPattern() {
	return getter<int32_t&>("character_pattern");
}

void RPG::EventPage::SetCharacterPattern(const int32_t& character_pattern) {
	setter<int32_t>("character_pattern", character_pattern);
}

bool RPG::EventPage::GetTranslucent() const {
	return getter<bool>("translucent");
}

void RPG::EventPage::SetTranslucent(bool translucent) {
	setter<bool>("translucent", translucent);
}

const int32_t& RPG::EventPage::GetMoveType() const {
	return getter<const int32_t&>("move_type");
}

int32_t& RPG::EventPage::GetMoveType() {
	return getter<int32_t&>("move_type");
}

void RPG::EventPage::SetMoveType(const int32_t& move_type) {
	setter<int32_t>("move_type", move_type);
}

int32_t RPG::EventPage::GetMoveFrequency() const {
	return getter<int32_t>("move_frequency");
}

void RPG::EventPage::SetMoveFrequency(int32_t move_frequency) {
	setter<int32_t>("move_frequency", move_frequency);
}

const int32_t& RPG::EventPage::GetTrigger() const {
	return getter<const int32_t&>("trigger");
}

int32_t& RPG::EventPage::GetTrigger() {
	return getter<int32_t&>("trigger");
}

void RPG::EventPage::SetTrigger(const int32_t& trigger) {
	setter<int32_t>("trigger", trigger);
}

const int32_t& RPG::EventPage::GetLayer() const {
	return getter<const int32_t&>("layer");
}

int32_t& RPG::EventPage::GetLayer() {
	return getter<int32_t&>("layer");
}

void RPG::EventPage::SetLayer(const int32_t& layer) {
	setter<int32_t>("layer", layer);
}

bool RPG::EventPage::GetOverlapForbidden() const {
	return getter<bool>("overlap_forbidden");
}

void RPG::EventPage::SetOverlapForbidden(bool overlap_forbidden) {
	setter<bool>("overlap_forbidden", overlap_forbidden);
}

const int32_t& RPG::EventPage::GetAnimationType() const {
	return getter<const int32_t&>("animation_type");
}

int32_t& RPG::EventPage::GetAnimationType() {
	return getter<int32_t&>("animation_type");
}

void RPG::EventPage::SetAnimationType(const int32_t& animation_type) {
	setter<int32_t>("animation_type", animation_type);
}

const int32_t& RPG::EventPage::GetMoveSpeed() const {
	return getter<const int32_t&>("move_speed");
}

int32_t& RPG::EventPage::GetMoveSpeed() {
	return getter<int32_t&>("move_speed");
}

void RPG::EventPage::SetMoveSpeed(const int32_t& move_speed) {
	setter<int32_t>("move_speed", move_speed);
}

const RPG::MoveRoute& RPG::EventPage::GetMoveRoute() const {
	return getter<const RPG::MoveRoute&>("move_route");
}

RPG::MoveRoute& RPG::EventPage::GetMoveRoute() {
	return getter<RPG::MoveRoute&>("move_route");
}

void RPG::EventPage::SetMoveRoute(const RPG::MoveRoute& move_route) {
	setter<RPG::MoveRoute>("move_route", move_route);
}


const std::vector<RPG::EventCommand>& RPG::EventPage::GetEventCommands() const {
	return vector_getter<const std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

std::vector<RPG::EventCommand>& RPG::EventPage::GetEventCommands() {
	return vector_getter<std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

