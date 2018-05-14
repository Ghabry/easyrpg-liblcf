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

#ifndef LCF_RPG_ITEMANIMATION_H
#define LCF_RPG_ITEMANIMATION_H

// Headers
#include <stdint.h>

/**
 * RPG::ItemAnimation class.
 */
namespace RPG {
	class ItemAnimation {
	public:
		enum Movement {
			Movement_none = 0,
			Movement_step = 1,
			Movement_jump = 2,
			Movement_move = 3
		};
		enum AfterImage {
			AfterImage_none = 0,
			AfterImage_add = 1
		};
		enum Speed {
			Speed_fast = 0,
			Speed_medium = 1,
			Speed_slow = 2
		};

		int ID = 0;
		int32_t type = 0;
		int32_t weapon_anim = 0;
		int32_t movement = 0;
		int32_t after_image = 0;
		int32_t attacks = 0;
		bool ranged = false;
		int32_t ranged_anim = 0;
		int32_t ranged_speed = 0;
		int32_t battle_anim = 0;
		int32_t GetType() const;
		void SetType(int32_t type);

		int32_t GetWeaponAnim() const;
		void SetWeaponAnim(int32_t weapon_anim);

		const int32_t& GetMovement() const;
		int32_t& GetMovement();
		void SetMovement(const int32_t& movement);

		const int32_t& GetAfterImage() const;
		int32_t& GetAfterImage();
		void SetAfterImage(const int32_t& after_image);

		int32_t GetAttacks() const;
		void SetAttacks(int32_t attacks);

		bool GetRanged() const;
		void SetRanged(bool ranged);

		int32_t GetRangedAnim() const;
		void SetRangedAnim(int32_t ranged_anim);

		const int32_t& GetRangedSpeed() const;
		int32_t& GetRangedSpeed();
		void SetRangedSpeed(const int32_t& ranged_speed);

		const int32_t& GetBattleAnim() const;
		int32_t& GetBattleAnim();
		void SetBattleAnim(const int32_t& battle_anim);

	};
}

#endif
