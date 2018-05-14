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

#ifndef LCF_RPG_SAVETITLE_H
#define LCF_RPG_SAVETITLE_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>

/**
 * RPG::SaveTitle class.
 */
namespace RPG {
	class SaveTitle : public Base {
	public:
		SaveTitle() {}
		double timestamp = 0;
		std::string hero_name;
		int32_t hero_level = 0;
		int32_t hero_hp = 0;
		std::string face1_name;
		int32_t face1_id = 0;
		std::string face2_name;
		int32_t face2_id = 0;
		std::string face3_name;
		int32_t face3_id = 0;
		std::string face4_name;
		int32_t face4_id = 0;
		double GetTimestamp() const;
		void SetTimestamp(double timestamp);

		const std::string& GetHeroName() const;
		std::string& GetHeroName();
		void SetHeroName(const std::string& hero_name);

		int32_t GetHeroLevel() const;
		void SetHeroLevel(int32_t hero_level);

		int32_t GetHeroHp() const;
		void SetHeroHp(int32_t hero_hp);

		const std::string& GetFace1Name() const;
		std::string& GetFace1Name();
		void SetFace1Name(const std::string& face1_name);

		int32_t GetFace1Id() const;
		void SetFace1Id(int32_t face1_id);

		const std::string& GetFace2Name() const;
		std::string& GetFace2Name();
		void SetFace2Name(const std::string& face2_name);

		int32_t GetFace2Id() const;
		void SetFace2Id(int32_t face2_id);

		const std::string& GetFace3Name() const;
		std::string& GetFace3Name();
		void SetFace3Name(const std::string& face3_name);

		int32_t GetFace3Id() const;
		void SetFace3Id(int32_t face3_id);

		const std::string& GetFace4Name() const;
		std::string& GetFace4Name();
		void SetFace4Name(const std::string& face4_name);

		int32_t GetFace4Id() const;
		void SetFace4Id(int32_t face4_id);

	};
}

#endif
