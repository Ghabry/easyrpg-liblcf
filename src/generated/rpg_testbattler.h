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

#ifndef LCF_RPG_TESTBATTLER_H
#define LCF_RPG_TESTBATTLER_H

// Headers
#include "rpg_base.h"
#include <stdint.h>

/**
 * RPG::TestBattler class.
 */
namespace RPG {
	class TestBattler : public Base {
	public:
		TestBattler() {}
		int ID = 0;
		int32_t actor_id = 1;
		int32_t level = 1;
		int32_t weapon_id = 0;
		int32_t shield_id = 0;
		int32_t armor_id = 0;
		int32_t helmet_id = 0;
		int32_t accessory_id = 0;
		const int32_t& GetActorId() const;
		int32_t& GetActorId();
		void SetActorId(const int32_t& actor_id);

		int32_t GetLevel() const;
		void SetLevel(int32_t level);

		const int32_t& GetWeaponId() const;
		int32_t& GetWeaponId();
		void SetWeaponId(const int32_t& weapon_id);

		const int32_t& GetShieldId() const;
		int32_t& GetShieldId();
		void SetShieldId(const int32_t& shield_id);

		const int32_t& GetArmorId() const;
		int32_t& GetArmorId();
		void SetArmorId(const int32_t& armor_id);

		const int32_t& GetHelmetId() const;
		int32_t& GetHelmetId();
		void SetHelmetId(const int32_t& helmet_id);

		const int32_t& GetAccessoryId() const;
		int32_t& GetAccessoryId();
		void SetAccessoryId(const int32_t& accessory_id);

	};
}

#endif
