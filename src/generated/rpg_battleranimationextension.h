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

#ifndef LCF_RPG_BATTLERANIMATIONEXTENSION_H
#define LCF_RPG_BATTLERANIMATIONEXTENSION_H

// Headers
#include <stdint.h>
#include <string>

/**
 * RPG::BattlerAnimationExtension class.
 */
namespace RPG {
	class BattlerAnimationExtension {
	public:
		enum AnimType {
			AnimType_graphic = 0,
			AnimType_animation = 1
		};

		int ID = 0;
		std::string name;
		std::string battler_name;
		int32_t battler_index = 0;
		int32_t animation_type = 0;
		int32_t animation_id = 1;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetBattlerName() const;
		std::string& GetBattlerName();
		void SetBattlerName(const std::string& battler_name);

		int32_t GetBattlerIndex() const;
		void SetBattlerIndex(int32_t battler_index);

		const int32_t& GetAnimationType() const;
		int32_t& GetAnimationType();
		void SetAnimationType(const int32_t& animation_type);

		const int32_t& GetAnimationId() const;
		int32_t& GetAnimationId();
		void SetAnimationId(const int32_t& animation_id);

	};
}

#endif
