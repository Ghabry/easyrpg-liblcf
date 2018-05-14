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


const RPG::EventPageCondition& RPG::EventPage::GetCondition() const  {
	return condition;
}

RPG::EventPageCondition& RPG::EventPage::GetCondition() {
	return condition;
}

void RPG::EventPage::SetCondition(const RPG::EventPageCondition& condition) {
	this->condition = condition;
}

const std::string& RPG::EventPage::GetCharacterName() const  {
	return character_name;
}

std::string& RPG::EventPage::GetCharacterName() {
	return character_name;
}

void RPG::EventPage::SetCharacterName(const std::string& character_name) {
	this->character_name = character_name;
}

int32_t RPG::EventPage::GetCharacterIndex() const {
	return character_index;
}

void RPG::EventPage::SetCharacterIndex(int32_t character_index) {
	this->character_index = character_index;
}

const int32_t& RPG::EventPage::GetCharacterDirection() const  {
	return character_direction;
}

int32_t& RPG::EventPage::GetCharacterDirection() {
	return character_direction;
}

void RPG::EventPage::SetCharacterDirection(const int32_t& character_direction) {
	this->character_direction = character_direction;
}

const int32_t& RPG::EventPage::GetCharacterPattern() const  {
	return character_pattern;
}

int32_t& RPG::EventPage::GetCharacterPattern() {
	return character_pattern;
}

void RPG::EventPage::SetCharacterPattern(const int32_t& character_pattern) {
	this->character_pattern = character_pattern;
}

bool RPG::EventPage::GetTranslucent() const {
	return translucent;
}

void RPG::EventPage::SetTranslucent(bool translucent) {
	this->translucent = translucent;
}

const int32_t& RPG::EventPage::GetMoveType() const  {
	return move_type;
}

int32_t& RPG::EventPage::GetMoveType() {
	return move_type;
}

void RPG::EventPage::SetMoveType(const int32_t& move_type) {
	this->move_type = move_type;
}

int32_t RPG::EventPage::GetMoveFrequency() const {
	return move_frequency;
}

void RPG::EventPage::SetMoveFrequency(int32_t move_frequency) {
	this->move_frequency = move_frequency;
}

const int32_t& RPG::EventPage::GetTrigger() const  {
	return trigger;
}

int32_t& RPG::EventPage::GetTrigger() {
	return trigger;
}

void RPG::EventPage::SetTrigger(const int32_t& trigger) {
	this->trigger = trigger;
}

const int32_t& RPG::EventPage::GetLayer() const  {
	return layer;
}

int32_t& RPG::EventPage::GetLayer() {
	return layer;
}

void RPG::EventPage::SetLayer(const int32_t& layer) {
	this->layer = layer;
}

bool RPG::EventPage::GetOverlapForbidden() const {
	return overlap_forbidden;
}

void RPG::EventPage::SetOverlapForbidden(bool overlap_forbidden) {
	this->overlap_forbidden = overlap_forbidden;
}

const int32_t& RPG::EventPage::GetAnimationType() const  {
	return animation_type;
}

int32_t& RPG::EventPage::GetAnimationType() {
	return animation_type;
}

void RPG::EventPage::SetAnimationType(const int32_t& animation_type) {
	this->animation_type = animation_type;
}

const int32_t& RPG::EventPage::GetMoveSpeed() const  {
	return move_speed;
}

int32_t& RPG::EventPage::GetMoveSpeed() {
	return move_speed;
}

void RPG::EventPage::SetMoveSpeed(const int32_t& move_speed) {
	this->move_speed = move_speed;
}

const RPG::MoveRoute& RPG::EventPage::GetMoveRoute() const  {
	return move_route;
}

RPG::MoveRoute& RPG::EventPage::GetMoveRoute() {
	return move_route;
}

void RPG::EventPage::SetMoveRoute(const RPG::MoveRoute& move_route) {
	this->move_route = move_route;
}


const std::vector<RPG::EventCommand>& RPG::EventPage::GetEventCommands() const  {
	return event_commands;
}

std::vector<RPG::EventCommand>& RPG::EventPage::GetEventCommands() {
	return event_commands;
}

