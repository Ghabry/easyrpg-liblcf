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

#ifndef LCF_RPG_SAVEACTOR_H
#define LCF_RPG_SAVEACTOR_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>

/**
 * RPG::SaveActor class.
 */
namespace RPG {
	class SaveActor {
	public:
		void Setup(int actor_id);
		void Fixup(int actor_id);
		int ID = 0;
		std::string name;
		std::string title;
		std::string sprite_name;
		int32_t sprite_id = 0;
		int32_t sprite_flags = 0;
		std::string face_name;
		int32_t face_id = 0;
		int32_t level = -1;
		int32_t exp = -1;
		int32_t hp_mod = -1;
		int32_t sp_mod = -1;
		int32_t attack_mod = 0;
		int32_t defense_mod = 0;
		int32_t spirit_mod = 0;
		int32_t agility_mod = 0;
		int32_t skills_size = -1;
		std::vector<int16_t> skills;
		std::vector<int16_t> equipped;
		int32_t current_hp = -1;
		int32_t current_sp = -1;
		std::vector<int32_t> battle_commands;
		int32_t status_size = 0;
		std::vector<int16_t> status;
		bool changed_battle_commands = false;
		int32_t class_id = -1;
		int32_t row = 0;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		int32_t battler_animation = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetTitle() const;
		std::string& GetTitle();
		void SetTitle(const std::string& title);

		const std::string& GetSpriteName() const;
		std::string& GetSpriteName();
		void SetSpriteName(const std::string& sprite_name);

		int32_t GetSpriteId() const;
		void SetSpriteId(int32_t sprite_id);

		int32_t GetSpriteFlags() const;
		void SetSpriteFlags(int32_t sprite_flags);

		const std::string& GetFaceName() const;
		std::string& GetFaceName();
		void SetFaceName(const std::string& face_name);

		int32_t GetFaceId() const;
		void SetFaceId(int32_t face_id);

		int32_t GetLevel() const;
		void SetLevel(int32_t level);

		int32_t GetExp() const;
		void SetExp(int32_t exp);

		int32_t GetHpMod() const;
		void SetHpMod(int32_t hp_mod);

		int32_t GetSpMod() const;
		void SetSpMod(int32_t sp_mod);

		int32_t GetAttackMod() const;
		void SetAttackMod(int32_t attack_mod);

		int32_t GetDefenseMod() const;
		void SetDefenseMod(int32_t defense_mod);

		int32_t GetSpiritMod() const;
		void SetSpiritMod(int32_t spirit_mod);

		int32_t GetAgilityMod() const;
		void SetAgilityMod(int32_t agility_mod);

		int32_t GetSkillsSize() const;
		void SetSkillsSize(int32_t skills_size);

		const std::vector<int16_t>& GetSkills() const;
		std::vector<int16_t>& GetSkills();

		const std::vector<int16_t>& GetEquipped() const;
		std::vector<int16_t>& GetEquipped();

		int32_t GetCurrentHp() const;
		void SetCurrentHp(int32_t current_hp);

		int32_t GetCurrentSp() const;
		void SetCurrentSp(int32_t current_sp);

		const std::vector<int32_t>& GetBattleCommands() const;
		std::vector<int32_t>& GetBattleCommands();

		int32_t GetStatusSize() const;
		void SetStatusSize(int32_t status_size);

		const std::vector<int16_t>& GetStatus() const;
		std::vector<int16_t>& GetStatus();

		bool GetChangedBattleCommands() const;
		void SetChangedBattleCommands(bool changed_battle_commands);

		const int32_t& GetClassId() const;
		int32_t& GetClassId();
		void SetClassId(const int32_t& class_id);

		int32_t GetRow() const;
		void SetRow(int32_t row);

		bool GetTwoWeapon() const;
		void SetTwoWeapon(bool two_weapon);

		bool GetLockEquipment() const;
		void SetLockEquipment(bool lock_equipment);

		bool GetAutoBattle() const;
		void SetAutoBattle(bool auto_battle);

		bool GetSuperGuard() const;
		void SetSuperGuard(bool super_guard);

		const int32_t& GetBattlerAnimation() const;
		int32_t& GetBattlerAnimation();
		void SetBattlerAnimation(const int32_t& battler_animation);

	};
}

#endif
