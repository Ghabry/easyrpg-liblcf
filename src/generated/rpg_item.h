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

#ifndef LCF_RPG_ITEM_H
#define LCF_RPG_ITEM_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_itemanimation.h"

/**
 * RPG::Item class.
 */
namespace RPG {
	class Item : public Base {
	public:
		enum Type {
			Type_normal = 0,
			Type_weapon = 1,
			Type_shield = 2,
			Type_armor = 3,
			Type_helmet = 4,
			Type_accessory = 5,
			Type_medicine = 6,
			Type_book = 7,
			Type_material = 8,
			Type_special = 9,
			Type_switch = 10
		};
		enum Trajectory {
			Trajectory_straight = 0,
			Trajectory_return = 1
		};
		enum Target {
			Target_single = 0,
			Target_center = 1,
			Target_simultaneous = 2,
			Target_sequential = 3
		};

		Item() {}
		int ID = 0;
		std::string name;
		std::string description;
		int32_t type = 0;
		int32_t price = 0;
		int32_t uses = 1;
		int32_t atk_points1 = 0;
		int32_t def_points1 = 0;
		int32_t spi_points1 = 0;
		int32_t agi_points1 = 0;
		bool two_handed = false;
		int32_t sp_cost = 0;
		int32_t hit = 90;
		int32_t critical_hit = 0;
		int32_t animation_id = 1;
		bool preemptive = false;
		bool dual_attack = false;
		bool attack_all = false;
		bool ignore_evasion = false;
		bool prevent_critical = false;
		bool raise_evasion = false;
		bool half_sp_cost = false;
		bool no_terrain_damage = false;
		bool cursed = false;
		bool entire_party = false;
		int32_t recover_hp_rate = 0;
		int32_t recover_hp = 0;
		int32_t recover_sp_rate = 0;
		int32_t recover_sp = 0;
		bool occasion_field1 = false;
		bool ko_only = false;
		int32_t max_hp_points = 0;
		int32_t max_sp_points = 0;
		int32_t atk_points2 = 0;
		int32_t def_points2 = 0;
		int32_t spi_points2 = 0;
		int32_t agi_points2 = 0;
		int32_t using_message = 0;
		int32_t skill_id = 1;
		int32_t switch_id = 1;
		bool occasion_field2 = true;
		bool occasion_battle = false;
		std::vector<bool> actor_set;
		std::vector<bool> state_set;
		std::vector<bool> attribute_set;
		int32_t state_chance = 0;
		bool state_effect = false;
		int32_t weapon_animation = 1;
		std::vector<ItemAnimation> animation_data;
		bool use_skill = false;
		std::vector<bool> class_set;
		int32_t ranged_trajectory = 0;
		int32_t ranged_target = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetDescription() const;
		std::string& GetDescription();
		void SetDescription(const std::string& description);

		const int32_t& GetType() const;
		int32_t& GetType();
		void SetType(const int32_t& type);

		int32_t GetPrice() const;
		void SetPrice(int32_t price);

		int32_t GetUses() const;
		void SetUses(int32_t uses);

		int32_t GetAtkPoints1() const;
		void SetAtkPoints1(int32_t atk_points1);

		int32_t GetDefPoints1() const;
		void SetDefPoints1(int32_t def_points1);

		int32_t GetSpiPoints1() const;
		void SetSpiPoints1(int32_t spi_points1);

		int32_t GetAgiPoints1() const;
		void SetAgiPoints1(int32_t agi_points1);

		bool GetTwoHanded() const;
		void SetTwoHanded(bool two_handed);

		int32_t GetSpCost() const;
		void SetSpCost(int32_t sp_cost);

		int32_t GetHit() const;
		void SetHit(int32_t hit);

		int32_t GetCriticalHit() const;
		void SetCriticalHit(int32_t critical_hit);

		const int32_t& GetAnimationId() const;
		int32_t& GetAnimationId();
		void SetAnimationId(const int32_t& animation_id);

		bool GetPreemptive() const;
		void SetPreemptive(bool preemptive);

		bool GetDualAttack() const;
		void SetDualAttack(bool dual_attack);

		bool GetAttackAll() const;
		void SetAttackAll(bool attack_all);

		bool GetIgnoreEvasion() const;
		void SetIgnoreEvasion(bool ignore_evasion);

		bool GetPreventCritical() const;
		void SetPreventCritical(bool prevent_critical);

		bool GetRaiseEvasion() const;
		void SetRaiseEvasion(bool raise_evasion);

		bool GetHalfSpCost() const;
		void SetHalfSpCost(bool half_sp_cost);

		bool GetNoTerrainDamage() const;
		void SetNoTerrainDamage(bool no_terrain_damage);

		bool GetCursed() const;
		void SetCursed(bool cursed);

		bool GetEntireParty() const;
		void SetEntireParty(bool entire_party);

		int32_t GetRecoverHpRate() const;
		void SetRecoverHpRate(int32_t recover_hp_rate);

		int32_t GetRecoverHp() const;
		void SetRecoverHp(int32_t recover_hp);

		int32_t GetRecoverSpRate() const;
		void SetRecoverSpRate(int32_t recover_sp_rate);

		int32_t GetRecoverSp() const;
		void SetRecoverSp(int32_t recover_sp);

		bool GetOccasionField1() const;
		void SetOccasionField1(bool occasion_field1);

		bool GetKoOnly() const;
		void SetKoOnly(bool ko_only);

		int32_t GetMaxHpPoints() const;
		void SetMaxHpPoints(int32_t max_hp_points);

		int32_t GetMaxSpPoints() const;
		void SetMaxSpPoints(int32_t max_sp_points);

		int32_t GetAtkPoints2() const;
		void SetAtkPoints2(int32_t atk_points2);

		int32_t GetDefPoints2() const;
		void SetDefPoints2(int32_t def_points2);

		int32_t GetSpiPoints2() const;
		void SetSpiPoints2(int32_t spi_points2);

		int32_t GetAgiPoints2() const;
		void SetAgiPoints2(int32_t agi_points2);

		int32_t GetUsingMessage() const;
		void SetUsingMessage(int32_t using_message);

		const int32_t& GetSkillId() const;
		int32_t& GetSkillId();
		void SetSkillId(const int32_t& skill_id);

		const int32_t& GetSwitchId() const;
		int32_t& GetSwitchId();
		void SetSwitchId(const int32_t& switch_id);

		bool GetOccasionField2() const;
		void SetOccasionField2(bool occasion_field2);

		bool GetOccasionBattle() const;
		void SetOccasionBattle(bool occasion_battle);


		const std::vector<bool>& GetActorSet() const;
		std::vector<bool>& GetActorSet();


		const std::vector<bool>& GetStateSet() const;
		std::vector<bool>& GetStateSet();


		const std::vector<bool>& GetAttributeSet() const;
		std::vector<bool>& GetAttributeSet();

		int32_t GetStateChance() const;
		void SetStateChance(int32_t state_chance);

		bool GetStateEffect() const;
		void SetStateEffect(bool state_effect);

		const int32_t& GetWeaponAnimation() const;
		int32_t& GetWeaponAnimation();
		void SetWeaponAnimation(const int32_t& weapon_animation);

		const std::vector<ItemAnimation>& GetAnimationData() const;
		std::vector<ItemAnimation>& GetAnimationData();

		bool GetUseSkill() const;
		void SetUseSkill(bool use_skill);


		const std::vector<bool>& GetClassSet() const;
		std::vector<bool>& GetClassSet();

		const int32_t& GetRangedTrajectory() const;
		int32_t& GetRangedTrajectory();
		void SetRangedTrajectory(const int32_t& ranged_trajectory);

		const int32_t& GetRangedTarget() const;
		int32_t& GetRangedTarget();
		void SetRangedTarget(const int32_t& ranged_target);

	};
}

#endif
