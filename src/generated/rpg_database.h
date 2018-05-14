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

#ifndef LCF_RPG_DATABASE_H
#define LCF_RPG_DATABASE_H

// Headers
#include <stdint.h>
#include <vector>
#include "rpg_actor.h"
#include "rpg_animation.h"
#include "rpg_attribute.h"
#include "rpg_battlecommands.h"
#include "rpg_battleranimation.h"
#include "rpg_chipset.h"
#include "rpg_class.h"
#include "rpg_commonevent.h"
#include "rpg_enemy.h"
#include "rpg_item.h"
#include "rpg_skill.h"
#include "rpg_state.h"
#include "rpg_switch.h"
#include "rpg_system.h"
#include "rpg_terms.h"
#include "rpg_terrain.h"
#include "rpg_troop.h"
#include "rpg_variable.h"

/**
 * RPG::Database class.
 */
namespace RPG {
	class Database {
	public:
		std::vector<Actor> actors;
		std::vector<Skill> skills;
		std::vector<Item> items;
		std::vector<Enemy> enemies;
		std::vector<Troop> troops;
		std::vector<Terrain> terrains;
		std::vector<Attribute> attributes;
		std::vector<State> states;
		std::vector<Animation> animations;
		std::vector<Chipset> chipsets;
		Terms terms;
		System system;
		std::vector<Switch> switches;
		std::vector<Variable> variables;
		std::vector<CommonEvent> commonevents;
		int32_t version = 0;
		BattleCommands battlecommands;
		std::vector<Class> classes;
		std::vector<BattlerAnimation> battleranimations;
		const std::vector<Actor>& GetActors() const;
		std::vector<Actor>& GetActors();

		const std::vector<Skill>& GetSkills() const;
		std::vector<Skill>& GetSkills();

		const std::vector<Item>& GetItems() const;
		std::vector<Item>& GetItems();

		const std::vector<Enemy>& GetEnemies() const;
		std::vector<Enemy>& GetEnemies();

		const std::vector<Troop>& GetTroops() const;
		std::vector<Troop>& GetTroops();

		const std::vector<Terrain>& GetTerrains() const;
		std::vector<Terrain>& GetTerrains();

		const std::vector<Attribute>& GetAttributes() const;
		std::vector<Attribute>& GetAttributes();

		const std::vector<State>& GetStates() const;
		std::vector<State>& GetStates();

		const std::vector<Animation>& GetAnimations() const;
		std::vector<Animation>& GetAnimations();

		const std::vector<Chipset>& GetChipsets() const;
		std::vector<Chipset>& GetChipsets();

		const Terms& GetTerms() const;
		Terms& GetTerms();
		void SetTerms(const Terms& terms);

		const System& GetSystem() const;
		System& GetSystem();
		void SetSystem(const System& system);

		const std::vector<Switch>& GetSwitches() const;
		std::vector<Switch>& GetSwitches();

		const std::vector<Variable>& GetVariables() const;
		std::vector<Variable>& GetVariables();

		const std::vector<CommonEvent>& GetCommonevents() const;
		std::vector<CommonEvent>& GetCommonevents();

		int32_t GetVersion() const;
		void SetVersion(int32_t version);

		const BattleCommands& GetBattlecommands() const;
		BattleCommands& GetBattlecommands();
		void SetBattlecommands(const BattleCommands& battlecommands);

		const std::vector<Class>& GetClasses() const;
		std::vector<Class>& GetClasses();

		const std::vector<BattlerAnimation>& GetBattleranimations() const;
		std::vector<BattlerAnimation>& GetBattleranimations();

	};
}

#endif
