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

#ifndef LCF_RPG_STATE_H
#define LCF_RPG_STATE_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>

/**
 * RPG::State class.
 */
namespace RPG {
	class State : public Base {
	public:
		enum Persistence {
			Persistence_ends = 0,
			Persistence_persists = 1
		};
		enum Restriction {
			Restriction_normal = 0,
			Restriction_do_nothing = 1,
			Restriction_attack_enemy = 2,
			Restriction_attack_ally = 3
		};
		enum AffectType {
			AffectType_half = 0,
			AffectType_double = 1,
			AffectType_nothing = 2
		};
		enum ChangeType {
			ChangeType_lose = 0,
			ChangeType_gain = 1,
			ChangeType_nothing = 2
		};

		State() {}
		int ID = 0;
		std::string name;
		int32_t type = 0;
		int32_t color = 6;
		int32_t priority = 50;
		int32_t restriction = 0;
		int32_t a_rate = 100;
		int32_t b_rate = 80;
		int32_t c_rate = 60;
		int32_t d_rate = 30;
		int32_t e_rate = 0;
		int32_t hold_turn = 0;
		int32_t auto_release_prob = 0;
		int32_t release_by_damage = 0;
		int32_t affect_type = 0;
		bool affect_attack = false;
		bool affect_defense = false;
		bool affect_spirit = false;
		bool affect_agility = false;
		int32_t reduce_hit_ratio = 100;
		bool avoid_attacks = false;
		bool reflect_magic = false;
		bool cursed = false;
		int32_t battler_animation_id = 100;
		bool restrict_skill = false;
		int32_t restrict_skill_level = 0;
		bool restrict_magic = false;
		int32_t restrict_magic_level = 0;
		int32_t hp_change_type = 0;
		int32_t sp_change_type = 0;
		std::string message_actor;
		std::string message_enemy;
		std::string message_already;
		std::string message_affected;
		std::string message_recovery;
		int32_t hp_change_max = 0;
		int32_t hp_change_val = 0;
		int32_t hp_change_map_val = 0;
		int32_t hp_change_map_steps = 0;
		int32_t sp_change_max = 0;
		int32_t sp_change_val = 0;
		int32_t sp_change_map_val = 0;
		int32_t sp_change_map_steps = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const int32_t& GetType() const;
		int32_t& GetType();
		void SetType(const int32_t& type);

		int32_t GetColor() const;
		void SetColor(int32_t color);

		int32_t GetPriority() const;
		void SetPriority(int32_t priority);

		const int32_t& GetRestriction() const;
		int32_t& GetRestriction();
		void SetRestriction(const int32_t& restriction);

		int32_t GetARate() const;
		void SetARate(int32_t a_rate);

		int32_t GetBRate() const;
		void SetBRate(int32_t b_rate);

		int32_t GetCRate() const;
		void SetCRate(int32_t c_rate);

		int32_t GetDRate() const;
		void SetDRate(int32_t d_rate);

		int32_t GetERate() const;
		void SetERate(int32_t e_rate);

		int32_t GetHoldTurn() const;
		void SetHoldTurn(int32_t hold_turn);

		int32_t GetAutoReleaseProb() const;
		void SetAutoReleaseProb(int32_t auto_release_prob);

		int32_t GetReleaseByDamage() const;
		void SetReleaseByDamage(int32_t release_by_damage);

		const int32_t& GetAffectType() const;
		int32_t& GetAffectType();
		void SetAffectType(const int32_t& affect_type);

		bool GetAffectAttack() const;
		void SetAffectAttack(bool affect_attack);

		bool GetAffectDefense() const;
		void SetAffectDefense(bool affect_defense);

		bool GetAffectSpirit() const;
		void SetAffectSpirit(bool affect_spirit);

		bool GetAffectAgility() const;
		void SetAffectAgility(bool affect_agility);

		int32_t GetReduceHitRatio() const;
		void SetReduceHitRatio(int32_t reduce_hit_ratio);

		bool GetAvoidAttacks() const;
		void SetAvoidAttacks(bool avoid_attacks);

		bool GetReflectMagic() const;
		void SetReflectMagic(bool reflect_magic);

		bool GetCursed() const;
		void SetCursed(bool cursed);

		const int32_t& GetBattlerAnimationId() const;
		int32_t& GetBattlerAnimationId();
		void SetBattlerAnimationId(const int32_t& battler_animation_id);

		bool GetRestrictSkill() const;
		void SetRestrictSkill(bool restrict_skill);

		int32_t GetRestrictSkillLevel() const;
		void SetRestrictSkillLevel(int32_t restrict_skill_level);

		bool GetRestrictMagic() const;
		void SetRestrictMagic(bool restrict_magic);

		int32_t GetRestrictMagicLevel() const;
		void SetRestrictMagicLevel(int32_t restrict_magic_level);

		const int32_t& GetHpChangeType() const;
		int32_t& GetHpChangeType();
		void SetHpChangeType(const int32_t& hp_change_type);

		const int32_t& GetSpChangeType() const;
		int32_t& GetSpChangeType();
		void SetSpChangeType(const int32_t& sp_change_type);

		const std::string& GetMessageActor() const;
		std::string& GetMessageActor();
		void SetMessageActor(const std::string& message_actor);

		const std::string& GetMessageEnemy() const;
		std::string& GetMessageEnemy();
		void SetMessageEnemy(const std::string& message_enemy);

		const std::string& GetMessageAlready() const;
		std::string& GetMessageAlready();
		void SetMessageAlready(const std::string& message_already);

		const std::string& GetMessageAffected() const;
		std::string& GetMessageAffected();
		void SetMessageAffected(const std::string& message_affected);

		const std::string& GetMessageRecovery() const;
		std::string& GetMessageRecovery();
		void SetMessageRecovery(const std::string& message_recovery);

		int32_t GetHpChangeMax() const;
		void SetHpChangeMax(int32_t hp_change_max);

		int32_t GetHpChangeVal() const;
		void SetHpChangeVal(int32_t hp_change_val);

		int32_t GetHpChangeMapVal() const;
		void SetHpChangeMapVal(int32_t hp_change_map_val);

		int32_t GetHpChangeMapSteps() const;
		void SetHpChangeMapSteps(int32_t hp_change_map_steps);

		int32_t GetSpChangeMax() const;
		void SetSpChangeMax(int32_t sp_change_max);

		int32_t GetSpChangeVal() const;
		void SetSpChangeVal(int32_t sp_change_val);

		int32_t GetSpChangeMapVal() const;
		void SetSpChangeMapVal(int32_t sp_change_map_val);

		int32_t GetSpChangeMapSteps() const;
		void SetSpChangeMapSteps(int32_t sp_change_map_steps);

	};
}

#endif
