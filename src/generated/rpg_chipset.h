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

#ifndef LCF_RPG_CHIPSET_H
#define LCF_RPG_CHIPSET_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>

/**
 * RPG::Chipset class.
 */
namespace RPG {
	class Chipset {
	public:
		enum AnimType {
			AnimType_reciprocating = 0,
			AnimType_cyclic = 1
		};

		Chipset();
		void Init();
		int ID = 0;
		std::string name;
		std::string chipset_name;
		std::vector<int16_t> terrain_data;
		std::vector<uint8_t> passable_data_lower;
		std::vector<uint8_t> passable_data_upper;
		int32_t animation_type = 0;
		int32_t animation_speed = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetChipsetName() const;
		std::string& GetChipsetName();
		void SetChipsetName(const std::string& chipset_name);

		const std::vector<int16_t>& GetTerrainData() const;
		std::vector<int16_t>& GetTerrainData();

		const std::vector<uint8_t>& GetPassableDataLower() const;
		std::vector<uint8_t>& GetPassableDataLower();

		const std::vector<uint8_t>& GetPassableDataUpper() const;
		std::vector<uint8_t>& GetPassableDataUpper();

		const int32_t& GetAnimationType() const;
		int32_t& GetAnimationType();
		void SetAnimationType(const int32_t& animation_type);

		int32_t GetAnimationSpeed() const;
		void SetAnimationSpeed(int32_t animation_speed);

	};
}

#endif
