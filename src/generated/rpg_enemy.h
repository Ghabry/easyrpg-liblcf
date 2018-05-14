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

#ifndef LCF_RPG_ENEMY_H
#define LCF_RPG_ENEMY_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_enemyaction.h"

/**
 * RPG::Enemy class.
 */
namespace RPG {
	class Enemy : public Base {
	public:
		Enemy() {}
		int ID = 0;
		std::string name;
		std::string battler_name;
		int32_t battler_hue = 0;
		int32_t max_hp = 10;
		int32_t max_sp = 10;
		int32_t attack = 10;
		int32_t defense = 10;
		int32_t spirit = 10;
		int32_t agility = 10;
		bool transparent = false;
		int32_t exp = 0;
		int32_t gold = 0;
		int32_t drop_id = 0;
		int32_t drop_prob = 100;
		bool critical_hit = false;
		int32_t critical_hit_chance = 30;
		bool miss = false;
		bool levitate = false;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<EnemyAction> actions;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetBattlerName() const;
		std::string& GetBattlerName();
		void SetBattlerName(const std::string& battler_name);

		int32_t GetBattlerHue() const;
		void SetBattlerHue(int32_t battler_hue);

		int32_t GetMaxHp() const;
		void SetMaxHp(int32_t max_hp);

		int32_t GetMaxSp() const;
		void SetMaxSp(int32_t max_sp);

		int32_t GetAttack() const;
		void SetAttack(int32_t attack);

		int32_t GetDefense() const;
		void SetDefense(int32_t defense);

		int32_t GetSpirit() const;
		void SetSpirit(int32_t spirit);

		int32_t GetAgility() const;
		void SetAgility(int32_t agility);

		bool GetTransparent() const;
		void SetTransparent(bool transparent);

		int32_t GetExp() const;
		void SetExp(int32_t exp);

		int32_t GetGold() const;
		void SetGold(int32_t gold);

		const int32_t& GetDropId() const;
		int32_t& GetDropId();
		void SetDropId(const int32_t& drop_id);

		int32_t GetDropProb() const;
		void SetDropProb(int32_t drop_prob);

		bool GetCriticalHit() const;
		void SetCriticalHit(bool critical_hit);

		int32_t GetCriticalHitChance() const;
		void SetCriticalHitChance(int32_t critical_hit_chance);

		bool GetMiss() const;
		void SetMiss(bool miss);

		bool GetLevitate() const;
		void SetLevitate(bool levitate);


		const std::vector<uint8_t>& GetStateRanks() const;
		std::vector<uint8_t>& GetStateRanks();


		const std::vector<uint8_t>& GetAttributeRanks() const;
		std::vector<uint8_t>& GetAttributeRanks();

		const std::vector<EnemyAction>& GetActions() const;
		std::vector<EnemyAction>& GetActions();

	};
}

#endif
