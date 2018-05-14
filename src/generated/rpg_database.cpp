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
#include "rpg_database.h"


const std::vector<RPG::Actor>& RPG::Database::GetActors() const  {
	return actors;
}

std::vector<RPG::Actor>& RPG::Database::GetActors() {
	return actors;
}

const std::vector<RPG::Skill>& RPG::Database::GetSkills() const  {
	return skills;
}

std::vector<RPG::Skill>& RPG::Database::GetSkills() {
	return skills;
}

const std::vector<RPG::Item>& RPG::Database::GetItems() const  {
	return items;
}

std::vector<RPG::Item>& RPG::Database::GetItems() {
	return items;
}

const std::vector<RPG::Enemy>& RPG::Database::GetEnemies() const  {
	return enemies;
}

std::vector<RPG::Enemy>& RPG::Database::GetEnemies() {
	return enemies;
}

const std::vector<RPG::Troop>& RPG::Database::GetTroops() const  {
	return troops;
}

std::vector<RPG::Troop>& RPG::Database::GetTroops() {
	return troops;
}

const std::vector<RPG::Terrain>& RPG::Database::GetTerrains() const  {
	return terrains;
}

std::vector<RPG::Terrain>& RPG::Database::GetTerrains() {
	return terrains;
}

const std::vector<RPG::Attribute>& RPG::Database::GetAttributes() const  {
	return attributes;
}

std::vector<RPG::Attribute>& RPG::Database::GetAttributes() {
	return attributes;
}

const std::vector<RPG::State>& RPG::Database::GetStates() const  {
	return states;
}

std::vector<RPG::State>& RPG::Database::GetStates() {
	return states;
}

const std::vector<RPG::Animation>& RPG::Database::GetAnimations() const  {
	return animations;
}

std::vector<RPG::Animation>& RPG::Database::GetAnimations() {
	return animations;
}

const std::vector<RPG::Chipset>& RPG::Database::GetChipsets() const  {
	return chipsets;
}

std::vector<RPG::Chipset>& RPG::Database::GetChipsets() {
	return chipsets;
}

const RPG::Terms& RPG::Database::GetTerms() const  {
	return terms;
}

RPG::Terms& RPG::Database::GetTerms() {
	return terms;
}

void RPG::Database::SetTerms(const RPG::Terms& terms) {
	this->terms = terms;
}

const RPG::System& RPG::Database::GetSystem() const  {
	return system;
}

RPG::System& RPG::Database::GetSystem() {
	return system;
}

void RPG::Database::SetSystem(const RPG::System& system) {
	this->system = system;
}

const std::vector<RPG::Switch>& RPG::Database::GetSwitches() const  {
	return switches;
}

std::vector<RPG::Switch>& RPG::Database::GetSwitches() {
	return switches;
}

const std::vector<RPG::Variable>& RPG::Database::GetVariables() const  {
	return variables;
}

std::vector<RPG::Variable>& RPG::Database::GetVariables() {
	return variables;
}

const std::vector<RPG::CommonEvent>& RPG::Database::GetCommonevents() const  {
	return commonevents;
}

std::vector<RPG::CommonEvent>& RPG::Database::GetCommonevents() {
	return commonevents;
}

int32_t RPG::Database::GetVersion() const {
	return version;
}

void RPG::Database::SetVersion(int32_t version) {
	this->version = version;
}

const RPG::BattleCommands& RPG::Database::GetBattlecommands() const  {
	return battlecommands;
}

RPG::BattleCommands& RPG::Database::GetBattlecommands() {
	return battlecommands;
}

void RPG::Database::SetBattlecommands(const RPG::BattleCommands& battlecommands) {
	this->battlecommands = battlecommands;
}

const std::vector<RPG::Class>& RPG::Database::GetClasses() const  {
	return classes;
}

std::vector<RPG::Class>& RPG::Database::GetClasses() {
	return classes;
}

const std::vector<RPG::BattlerAnimation>& RPG::Database::GetBattleranimations() const  {
	return battleranimations;
}

std::vector<RPG::BattlerAnimation>& RPG::Database::GetBattleranimations() {
	return battleranimations;
}

