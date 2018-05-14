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

#ifndef LCF_RPG_SKILL_H
#define LCF_RPG_SKILL_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_battleranimationdata.h"
#include "rpg_sound.h"

/**
 * RPG::Skill class.
 */
namespace RPG {
	class Skill {
	public:
		enum Type {
			Type_normal = 0,
			Type_teleport = 1,
			Type_escape = 2,
			Type_switch = 3,
			Type_subskill = 4
		};
		enum SpType {
			SpType_cost = 0,
			SpType_percent = 1
		};
		enum Scope {
			Scope_enemy = 0,
			Scope_enemies = 1,
			Scope_self = 2,
			Scope_ally = 3,
			Scope_party = 4
		};

		int ID = 0;
		std::string name;
		std::string description;
		std::string using_message1;
		std::string using_message2;
		int32_t failure_message = 0;
		int32_t type = 0;
		int32_t sp_type = 0;
		int32_t sp_percent = 1;
		int32_t sp_cost = 0;
		int32_t scope = 0;
		int32_t switch_id = 1;
		int32_t animation_id = 0;
		Sound sound_effect;
		bool occasion_field = true;
		bool occasion_battle = false;
		bool state_effect = false;
		int32_t physical_rate = 0;
		int32_t magical_rate = 3;
		int32_t variance = 4;
		int32_t power = 0;
		int32_t hit = 100;
		bool affect_hp = false;
		bool affect_sp = false;
		bool affect_attack = false;
		bool affect_defense = false;
		bool affect_spirit = false;
		bool affect_agility = false;
		bool absorb_damage = false;
		bool ignore_defense = false;
		std::vector<bool> state_effects;
		std::vector<bool> attribute_effects;
		bool affect_attr_defence = false;
		int32_t battler_animation = 1;
		std::vector<BattlerAnimationData> battler_animation_data;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetDescription() const;
		std::string& GetDescription();
		void SetDescription(const std::string& description);

		const std::string& GetUsingMessage1() const;
		std::string& GetUsingMessage1();
		void SetUsingMessage1(const std::string& using_message1);

		const std::string& GetUsingMessage2() const;
		std::string& GetUsingMessage2();
		void SetUsingMessage2(const std::string& using_message2);

		int32_t GetFailureMessage() const;
		void SetFailureMessage(int32_t failure_message);

		const int32_t& GetType() const;
		int32_t& GetType();
		void SetType(const int32_t& type);

		const int32_t& GetSpType() const;
		int32_t& GetSpType();
		void SetSpType(const int32_t& sp_type);

		int32_t GetSpPercent() const;
		void SetSpPercent(int32_t sp_percent);

		int32_t GetSpCost() const;
		void SetSpCost(int32_t sp_cost);

		const int32_t& GetScope() const;
		int32_t& GetScope();
		void SetScope(const int32_t& scope);

		const int32_t& GetSwitchId() const;
		int32_t& GetSwitchId();
		void SetSwitchId(const int32_t& switch_id);

		const int32_t& GetAnimationId() const;
		int32_t& GetAnimationId();
		void SetAnimationId(const int32_t& animation_id);

		const Sound& GetSoundEffect() const;
		Sound& GetSoundEffect();
		void SetSoundEffect(const Sound& sound_effect);

		bool GetOccasionField() const;
		void SetOccasionField(bool occasion_field);

		bool GetOccasionBattle() const;
		void SetOccasionBattle(bool occasion_battle);

		bool GetStateEffect() const;
		void SetStateEffect(bool state_effect);

		int32_t GetPhysicalRate() const;
		void SetPhysicalRate(int32_t physical_rate);

		int32_t GetMagicalRate() const;
		void SetMagicalRate(int32_t magical_rate);

		int32_t GetVariance() const;
		void SetVariance(int32_t variance);

		int32_t GetPower() const;
		void SetPower(int32_t power);

		int32_t GetHit() const;
		void SetHit(int32_t hit);

		bool GetAffectHp() const;
		void SetAffectHp(bool affect_hp);

		bool GetAffectSp() const;
		void SetAffectSp(bool affect_sp);

		bool GetAffectAttack() const;
		void SetAffectAttack(bool affect_attack);

		bool GetAffectDefense() const;
		void SetAffectDefense(bool affect_defense);

		bool GetAffectSpirit() const;
		void SetAffectSpirit(bool affect_spirit);

		bool GetAffectAgility() const;
		void SetAffectAgility(bool affect_agility);

		bool GetAbsorbDamage() const;
		void SetAbsorbDamage(bool absorb_damage);

		bool GetIgnoreDefense() const;
		void SetIgnoreDefense(bool ignore_defense);


		const std::vector<bool>& GetStateEffects() const;
		std::vector<bool>& GetStateEffects();


		const std::vector<bool>& GetAttributeEffects() const;
		std::vector<bool>& GetAttributeEffects();

		bool GetAffectAttrDefence() const;
		void SetAffectAttrDefence(bool affect_attr_defence);

		const int32_t& GetBattlerAnimation() const;
		int32_t& GetBattlerAnimation();
		void SetBattlerAnimation(const int32_t& battler_animation);

		const std::vector<BattlerAnimationData>& GetBattlerAnimationData() const;
		std::vector<BattlerAnimationData>& GetBattlerAnimationData();

	};
}

#endif
