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

#ifndef LCF_RPG_CLASS_H
#define LCF_RPG_CLASS_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_learning.h"
#include "rpg_parameters.h"

/**
 * RPG::Class class.
 */
namespace RPG {
	class Class : public Base {
	public:
		Class() {}
		int ID = 0;
		std::string name;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		Parameters parameters;
		int32_t exp_base = 300;
		int32_t exp_inflation = 300;
		int32_t exp_correction = 0;
		int32_t battler_animation = 0;
		std::vector<Learning> skills;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<int32_t> battle_commands;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

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

		const int32_t& GetBattlerAnimation() const;
		int32_t& GetBattlerAnimation();
		void SetBattlerAnimation(const int32_t& battler_animation);

		const std::vector<Learning>& GetSkills() const;
		std::vector<Learning>& GetSkills();


		const std::vector<uint8_t>& GetStateRanks() const;
		std::vector<uint8_t>& GetStateRanks();


		const std::vector<uint8_t>& GetAttributeRanks() const;
		std::vector<uint8_t>& GetAttributeRanks();

		const std::vector<int32_t>& GetBattleCommands() const;
		std::vector<int32_t>& GetBattleCommands();

	};
}

#endif
