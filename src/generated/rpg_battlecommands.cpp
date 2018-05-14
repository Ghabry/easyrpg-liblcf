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
#include "rpg_battlecommands.h"


const int32_t& RPG::BattleCommands::GetPlacement() const {
	return getter<const int32_t&>("placement");
}

int32_t& RPG::BattleCommands::GetPlacement() {
	return getter<int32_t&>("placement");
}

void RPG::BattleCommands::SetPlacement(const int32_t& placement) {
	setter<int32_t>("placement", placement);
}

int32_t RPG::BattleCommands::GetDeathHandler1() const {
	return getter<int32_t>("death_handler1");
}

void RPG::BattleCommands::SetDeathHandler1(int32_t death_handler1) {
	setter<int32_t>("death_handler1", death_handler1);
}

const int32_t& RPG::BattleCommands::GetRow() const {
	return getter<const int32_t&>("row");
}

int32_t& RPG::BattleCommands::GetRow() {
	return getter<int32_t&>("row");
}

void RPG::BattleCommands::SetRow(const int32_t& row) {
	setter<int32_t>("row", row);
}

const int32_t& RPG::BattleCommands::GetBattleType() const {
	return getter<const int32_t&>("battle_type");
}

int32_t& RPG::BattleCommands::GetBattleType() {
	return getter<int32_t&>("battle_type");
}

void RPG::BattleCommands::SetBattleType(const int32_t& battle_type) {
	setter<int32_t>("battle_type", battle_type);
}

int32_t RPG::BattleCommands::GetUnknown09() const {
	return getter<int32_t>("unknown_09");
}

void RPG::BattleCommands::SetUnknown09(int32_t unknown_09) {
	setter<int32_t>("unknown_09", unknown_09);
}

const std::vector<RPG::BattleCommand>& RPG::BattleCommands::GetCommands() const {
	return vector_getter<const std::vector<RPG::BattleCommand>&, RPG::BattleCommand>("commands");
}

std::vector<RPG::BattleCommand>& RPG::BattleCommands::GetCommands() {
	return vector_getter<std::vector<RPG::BattleCommand>&, RPG::BattleCommand>("commands");
}

int32_t RPG::BattleCommands::GetDeathHandler2() const {
	return getter<int32_t>("death_handler2");
}

void RPG::BattleCommands::SetDeathHandler2(int32_t death_handler2) {
	setter<int32_t>("death_handler2", death_handler2);
}

const int32_t& RPG::BattleCommands::GetDeathEvent() const {
	return getter<const int32_t&>("death_event");
}

int32_t& RPG::BattleCommands::GetDeathEvent() {
	return getter<int32_t&>("death_event");
}

void RPG::BattleCommands::SetDeathEvent(const int32_t& death_event) {
	setter<int32_t>("death_event", death_event);
}

const int32_t& RPG::BattleCommands::GetWindowSize() const {
	return getter<const int32_t&>("window_size");
}

int32_t& RPG::BattleCommands::GetWindowSize() {
	return getter<int32_t&>("window_size");
}

void RPG::BattleCommands::SetWindowSize(const int32_t& window_size) {
	setter<int32_t>("window_size", window_size);
}

const int32_t& RPG::BattleCommands::GetTransparency() const {
	return getter<const int32_t&>("transparency");
}

int32_t& RPG::BattleCommands::GetTransparency() {
	return getter<int32_t&>("transparency");
}

void RPG::BattleCommands::SetTransparency(const int32_t& transparency) {
	setter<int32_t>("transparency", transparency);
}

bool RPG::BattleCommands::GetTeleport() const {
	return getter<bool>("teleport");
}

void RPG::BattleCommands::SetTeleport(bool teleport) {
	setter<bool>("teleport", teleport);
}

const int32_t& RPG::BattleCommands::GetTeleportId() const {
	return getter<const int32_t&>("teleport_id");
}

int32_t& RPG::BattleCommands::GetTeleportId() {
	return getter<int32_t&>("teleport_id");
}

void RPG::BattleCommands::SetTeleportId(const int32_t& teleport_id) {
	setter<int32_t>("teleport_id", teleport_id);
}

int32_t RPG::BattleCommands::GetTeleportX() const {
	return getter<int32_t>("teleport_x");
}

void RPG::BattleCommands::SetTeleportX(int32_t teleport_x) {
	setter<int32_t>("teleport_x", teleport_x);
}

int32_t RPG::BattleCommands::GetTeleportY() const {
	return getter<int32_t>("teleport_y");
}

void RPG::BattleCommands::SetTeleportY(int32_t teleport_y) {
	setter<int32_t>("teleport_y", teleport_y);
}

const int32_t& RPG::BattleCommands::GetTeleportFace() const {
	return getter<const int32_t&>("teleport_face");
}

int32_t& RPG::BattleCommands::GetTeleportFace() {
	return getter<int32_t&>("teleport_face");
}

void RPG::BattleCommands::SetTeleportFace(const int32_t& teleport_face) {
	setter<int32_t>("teleport_face", teleport_face);
}

