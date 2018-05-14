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


const std::vector<RPG::Actor>& RPG::Database::GetActors() const {
	return vector_getter<const std::vector<RPG::Actor>&, RPG::Actor>("actors");
}

std::vector<RPG::Actor>& RPG::Database::GetActors() {
	return vector_getter<std::vector<RPG::Actor>&, RPG::Actor>("actors");
}

const std::vector<RPG::Skill>& RPG::Database::GetSkills() const {
	return vector_getter<const std::vector<RPG::Skill>&, RPG::Skill>("skills");
}

std::vector<RPG::Skill>& RPG::Database::GetSkills() {
	return vector_getter<std::vector<RPG::Skill>&, RPG::Skill>("skills");
}

const std::vector<RPG::Item>& RPG::Database::GetItems() const {
	return vector_getter<const std::vector<RPG::Item>&, RPG::Item>("items");
}

std::vector<RPG::Item>& RPG::Database::GetItems() {
	return vector_getter<std::vector<RPG::Item>&, RPG::Item>("items");
}

const std::vector<RPG::Enemy>& RPG::Database::GetEnemies() const {
	return vector_getter<const std::vector<RPG::Enemy>&, RPG::Enemy>("enemies");
}

std::vector<RPG::Enemy>& RPG::Database::GetEnemies() {
	return vector_getter<std::vector<RPG::Enemy>&, RPG::Enemy>("enemies");
}

const std::vector<RPG::Troop>& RPG::Database::GetTroops() const {
	return vector_getter<const std::vector<RPG::Troop>&, RPG::Troop>("troops");
}

std::vector<RPG::Troop>& RPG::Database::GetTroops() {
	return vector_getter<std::vector<RPG::Troop>&, RPG::Troop>("troops");
}

const std::vector<RPG::Terrain>& RPG::Database::GetTerrains() const {
	return vector_getter<const std::vector<RPG::Terrain>&, RPG::Terrain>("terrains");
}

std::vector<RPG::Terrain>& RPG::Database::GetTerrains() {
	return vector_getter<std::vector<RPG::Terrain>&, RPG::Terrain>("terrains");
}

const std::vector<RPG::Attribute>& RPG::Database::GetAttributes() const {
	return vector_getter<const std::vector<RPG::Attribute>&, RPG::Attribute>("attributes");
}

std::vector<RPG::Attribute>& RPG::Database::GetAttributes() {
	return vector_getter<std::vector<RPG::Attribute>&, RPG::Attribute>("attributes");
}

const std::vector<RPG::State>& RPG::Database::GetStates() const {
	return vector_getter<const std::vector<RPG::State>&, RPG::State>("states");
}

std::vector<RPG::State>& RPG::Database::GetStates() {
	return vector_getter<std::vector<RPG::State>&, RPG::State>("states");
}

const std::vector<RPG::Animation>& RPG::Database::GetAnimations() const {
	return vector_getter<const std::vector<RPG::Animation>&, RPG::Animation>("animations");
}

std::vector<RPG::Animation>& RPG::Database::GetAnimations() {
	return vector_getter<std::vector<RPG::Animation>&, RPG::Animation>("animations");
}

const std::vector<RPG::Chipset>& RPG::Database::GetChipsets() const {
	return vector_getter<const std::vector<RPG::Chipset>&, RPG::Chipset>("chipsets");
}

std::vector<RPG::Chipset>& RPG::Database::GetChipsets() {
	return vector_getter<std::vector<RPG::Chipset>&, RPG::Chipset>("chipsets");
}

const RPG::Terms& RPG::Database::GetTerms() const {
	return getter<const RPG::Terms&>("terms");
}

RPG::Terms& RPG::Database::GetTerms() {
	return getter<RPG::Terms&>("terms");
}

void RPG::Database::SetTerms(const RPG::Terms& terms) {
	setter<RPG::Terms>("terms", terms);
}

const RPG::System& RPG::Database::GetSystem() const {
	return getter<const RPG::System&>("system");
}

RPG::System& RPG::Database::GetSystem() {
	return getter<RPG::System&>("system");
}

void RPG::Database::SetSystem(const RPG::System& system) {
	setter<RPG::System>("system", system);
}

const std::vector<RPG::Switch>& RPG::Database::GetSwitches() const {
	return vector_getter<const std::vector<RPG::Switch>&, RPG::Switch>("switches");
}

std::vector<RPG::Switch>& RPG::Database::GetSwitches() {
	return vector_getter<std::vector<RPG::Switch>&, RPG::Switch>("switches");
}

const std::vector<RPG::Variable>& RPG::Database::GetVariables() const {
	return vector_getter<const std::vector<RPG::Variable>&, RPG::Variable>("variables");
}

std::vector<RPG::Variable>& RPG::Database::GetVariables() {
	return vector_getter<std::vector<RPG::Variable>&, RPG::Variable>("variables");
}

const std::vector<RPG::CommonEvent>& RPG::Database::GetCommonevents() const {
	return vector_getter<const std::vector<RPG::CommonEvent>&, RPG::CommonEvent>("commonevents");
}

std::vector<RPG::CommonEvent>& RPG::Database::GetCommonevents() {
	return vector_getter<std::vector<RPG::CommonEvent>&, RPG::CommonEvent>("commonevents");
}

int32_t RPG::Database::GetVersion() const {
	return getter<int32_t>("version");
}

void RPG::Database::SetVersion(int32_t version) {
	setter<int32_t>("version", version);
}

const RPG::BattleCommands& RPG::Database::GetBattlecommands() const {
	return getter<const RPG::BattleCommands&>("battlecommands");
}

RPG::BattleCommands& RPG::Database::GetBattlecommands() {
	return getter<RPG::BattleCommands&>("battlecommands");
}

void RPG::Database::SetBattlecommands(const RPG::BattleCommands& battlecommands) {
	setter<RPG::BattleCommands>("battlecommands", battlecommands);
}

const std::vector<RPG::Class>& RPG::Database::GetClasses() const {
	return vector_getter<const std::vector<RPG::Class>&, RPG::Class>("classes");
}

std::vector<RPG::Class>& RPG::Database::GetClasses() {
	return vector_getter<std::vector<RPG::Class>&, RPG::Class>("classes");
}

const std::vector<RPG::BattlerAnimation>& RPG::Database::GetBattleranimations() const {
	return vector_getter<const std::vector<RPG::BattlerAnimation>&, RPG::BattlerAnimation>("battleranimations");
}

std::vector<RPG::BattlerAnimation>& RPG::Database::GetBattleranimations() {
	return vector_getter<std::vector<RPG::BattlerAnimation>&, RPG::BattlerAnimation>("battleranimations");
}

