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

#ifndef LCF_RPG_PARAMETERS_H
#define LCF_RPG_PARAMETERS_H

// Headers
#include <vector>
#include "reader_types.h"

/**
 * RPG::Parameters class.
 */
namespace RPG {
	class Parameters {
	public:
		void Setup(int final_level);
		std::vector<int16_t> maxhp;
		std::vector<int16_t> maxsp;
		std::vector<int16_t> attack;
		std::vector<int16_t> defense;
		std::vector<int16_t> spirit;
		std::vector<int16_t> agility;
        const std::vector<int16_t>& GetMaxhp() const;
        std::vector<int16_t>& GetMaxhp();
        void SetMaxhp(const std::vector<int16_t>& maxhp);

        const std::vector<int16_t>& GetMaxsp() const;
        std::vector<int16_t>& GetMaxsp();
        void SetMaxsp(const std::vector<int16_t>& maxsp);

        const std::vector<int16_t>& GetAttack() const;
        std::vector<int16_t>& GetAttack();
        void SetAttack(const std::vector<int16_t>& attack);

        const std::vector<int16_t>& GetDefense() const;
        std::vector<int16_t>& GetDefense();
        void SetDefense(const std::vector<int16_t>& defense);

        const std::vector<int16_t>& GetSpirit() const;
        std::vector<int16_t>& GetSpirit();
        void SetSpirit(const std::vector<int16_t>& spirit);

        const std::vector<int16_t>& GetAgility() const;
        std::vector<int16_t>& GetAgility();
        void SetAgility(const std::vector<int16_t>& agility);

	};
}

#endif
