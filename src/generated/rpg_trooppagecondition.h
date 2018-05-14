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

#ifndef LCF_RPG_TROOPPAGECONDITION_H
#define LCF_RPG_TROOPPAGECONDITION_H

// Headers
#include "rpg_base.h"
#include <stdint.h>

/**
 * RPG::TroopPageCondition class.
 */
namespace RPG {
	class TroopPageCondition : public Base {
	public:
		TroopPageCondition() {}
		struct Flags : Flags_Base {
			bool switch_a = false;
			bool switch_b = false;
			bool variable = false;
			bool turn = false;
			bool fatigue = false;
			bool enemy_hp = false;
			bool actor_hp = false;
			bool turn_enemy = false;
			bool turn_actor = false;
			bool command_actor = false;
		} flags;
		int32_t switch_a_id = 1;
		int32_t switch_b_id = 1;
		int32_t variable_id = 1;
		int32_t variable_value = 0;
		int32_t turn_a = 0;
		int32_t turn_b = 0;
		int32_t fatigue_min = 0;
		int32_t fatigue_max = 100;
		int32_t enemy_id = 0;
		int32_t enemy_hp_min = 0;
		int32_t enemy_hp_max = 100;
		int32_t actor_id = 1;
		int32_t actor_hp_min = 0;
		int32_t actor_hp_max = 100;
		int32_t turn_enemy_id = 0;
		int32_t turn_enemy_a = 0;
		int32_t turn_enemy_b = 0;
		int32_t turn_actor_id = 1;
		int32_t turn_actor_a = 0;
		int32_t turn_actor_b = 0;
		int32_t command_actor_id = 1;
		int32_t command_id = 1;
		const Flags& GetFlags() const;
		Flags& GetFlags();
		void SetFlags(const Flags& flags);

		const int32_t& GetSwitchAId() const;
		int32_t& GetSwitchAId();
		void SetSwitchAId(const int32_t& switch_a_id);

		const int32_t& GetSwitchBId() const;
		int32_t& GetSwitchBId();
		void SetSwitchBId(const int32_t& switch_b_id);

		const int32_t& GetVariableId() const;
		int32_t& GetVariableId();
		void SetVariableId(const int32_t& variable_id);

		int32_t GetVariableValue() const;
		void SetVariableValue(int32_t variable_value);

		int32_t GetTurnA() const;
		void SetTurnA(int32_t turn_a);

		int32_t GetTurnB() const;
		void SetTurnB(int32_t turn_b);

		int32_t GetFatigueMin() const;
		void SetFatigueMin(int32_t fatigue_min);

		int32_t GetFatigueMax() const;
		void SetFatigueMax(int32_t fatigue_max);

		int32_t GetEnemyId() const;
		void SetEnemyId(int32_t enemy_id);

		int32_t GetEnemyHpMin() const;
		void SetEnemyHpMin(int32_t enemy_hp_min);

		int32_t GetEnemyHpMax() const;
		void SetEnemyHpMax(int32_t enemy_hp_max);

		const int32_t& GetActorId() const;
		int32_t& GetActorId();
		void SetActorId(const int32_t& actor_id);

		int32_t GetActorHpMin() const;
		void SetActorHpMin(int32_t actor_hp_min);

		int32_t GetActorHpMax() const;
		void SetActorHpMax(int32_t actor_hp_max);

		int32_t GetTurnEnemyId() const;
		void SetTurnEnemyId(int32_t turn_enemy_id);

		int32_t GetTurnEnemyA() const;
		void SetTurnEnemyA(int32_t turn_enemy_a);

		int32_t GetTurnEnemyB() const;
		void SetTurnEnemyB(int32_t turn_enemy_b);

		const int32_t& GetTurnActorId() const;
		int32_t& GetTurnActorId();
		void SetTurnActorId(const int32_t& turn_actor_id);

		int32_t GetTurnActorA() const;
		void SetTurnActorA(int32_t turn_actor_a);

		int32_t GetTurnActorB() const;
		void SetTurnActorB(int32_t turn_actor_b);

		const int32_t& GetCommandActorId() const;
		int32_t& GetCommandActorId();
		void SetCommandActorId(const int32_t& command_actor_id);

		const int32_t& GetCommandId() const;
		int32_t& GetCommandId();
		void SetCommandId(const int32_t& command_id);

	};
}

#endif
