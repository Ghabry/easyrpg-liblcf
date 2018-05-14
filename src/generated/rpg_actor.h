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

#ifndef LCF_RPG_ACTOR_H
#define LCF_RPG_ACTOR_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_equipment.h"
#include "rpg_learning.h"
#include "rpg_parameters.h"

/**
 * RPG::Actor class.
 */
namespace RPG {
	class Actor : public Base {
	public:
		Actor() {}
		void Setup();
		int ID = 0;
		std::string name;
		std::string title;
		std::string character_name;
		int32_t character_index = 0;
		bool transparent = false;
		int32_t initial_level = 1;
		int32_t final_level = -1;
		bool critical_hit = true;
		int32_t critical_hit_chance = 30;
		std::string face_name;
		int32_t face_index = 0;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		Parameters parameters;
		int32_t exp_base = -1;
		int32_t exp_inflation = -1;
		int32_t exp_correction = 0;
		Equipment initial_equipment;
		int32_t unarmed_animation = 1;
		int32_t class_id = 0;
		int32_t battle_x = 220;
		int32_t battle_y = 120;
		int32_t battler_animation = 1;
		std::vector<Learning> skills;
		bool rename_skill = false;
		std::string skill_name;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<int32_t> battle_commands;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetTitle() const;
		std::string& GetTitle();
		void SetTitle(const std::string& title);

		const std::string& GetCharacterName() const;
		std::string& GetCharacterName();
		void SetCharacterName(const std::string& character_name);

		int32_t GetCharacterIndex() const;
		void SetCharacterIndex(int32_t character_index);

		bool GetTransparent() const;
		void SetTransparent(bool transparent);

		int32_t GetInitialLevel() const;
		void SetInitialLevel(int32_t initial_level);

		int32_t GetFinalLevel() const;
		void SetFinalLevel(int32_t final_level);

		bool GetCriticalHit() const;
		void SetCriticalHit(bool critical_hit);

		int32_t GetCriticalHitChance() const;
		void SetCriticalHitChance(int32_t critical_hit_chance);

		const std::string& GetFaceName() const;
		std::string& GetFaceName();
		void SetFaceName(const std::string& face_name);

		int32_t GetFaceIndex() const;
		void SetFaceIndex(int32_t face_index);

		bool GetTwoWeapon() const;
		void SetTwoWeapon(bool two_weapon);

		bool GetLockEquipment() const;
		void SetLockEquipment(bool lock_equipment);

		bool GetAutoBattle() const;
		void SetAutoBattle(bool auto_battle);

		bool GetSuperGuard() const;
		void SetSuperGuard(bool super_guard);

		const Parameters& GetParameters() const;
		Parameters& GetParameters();
		void SetParameters(const Parameters& parameters);

		int32_t GetExpBase() const;
		void SetExpBase(int32_t exp_base);

		int32_t GetExpInflation() const;
		void SetExpInflation(int32_t exp_inflation);

		int32_t GetExpCorrection() const;
		void SetExpCorrection(int32_t exp_correction);

		const Equipment& GetInitialEquipment() const;
		Equipment& GetInitialEquipment();
		void SetInitialEquipment(const Equipment& initial_equipment);

		const int32_t& GetUnarmedAnimation() const;
		int32_t& GetUnarmedAnimation();
		void SetUnarmedAnimation(const int32_t& unarmed_animation);

		const int32_t& GetClassId() const;
		int32_t& GetClassId();
		void SetClassId(const int32_t& class_id);

		int32_t GetBattleX() const;
		void SetBattleX(int32_t battle_x);

		int32_t GetBattleY() const;
		void SetBattleY(int32_t battle_y);

		const int32_t& GetBattlerAnimation() const;
		int32_t& GetBattlerAnimation();
		void SetBattlerAnimation(const int32_t& battler_animation);

		const std::vector<Learning>& GetSkills() const;
		std::vector<Learning>& GetSkills();

		bool GetRenameSkill() const;
		void SetRenameSkill(bool rename_skill);

		const std::string& GetSkillName() const;
		std::string& GetSkillName();
		void SetSkillName(const std::string& skill_name);


		const std::vector<uint8_t>& GetStateRanks() const;
		std::vector<uint8_t>& GetStateRanks();


		const std::vector<uint8_t>& GetAttributeRanks() const;
		std::vector<uint8_t>& GetAttributeRanks();

		const std::vector<int32_t>& GetBattleCommands() const;
		std::vector<int32_t>& GetBattleCommands();

	};
}

#endif
