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

#ifndef LCF_RPG_TROOPMEMBER_H
#define LCF_RPG_TROOPMEMBER_H

// Headers
#include "rpg_base.h"
#include <stdint.h>

/**
 * RPG::TroopMember class.
 */
namespace RPG {
	class TroopMember : public Base {
	public:
		TroopMember() {}
		int ID = 0;
		int32_t enemy_id = 1;
		int32_t x = 0;
		int32_t y = 0;
		bool invisible = false;
		const int32_t& GetEnemyId() const;
		int32_t& GetEnemyId();
		void SetEnemyId(const int32_t& enemy_id);

		int32_t GetX() const;
		void SetX(int32_t x);

		int32_t GetY() const;
		void SetY(int32_t y);

		bool GetInvisible() const;
		void SetInvisible(bool invisible);

	};
}

#endif
