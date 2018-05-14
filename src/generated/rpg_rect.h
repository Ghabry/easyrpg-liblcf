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

#ifndef LCF_RPG_RECT_H
#define LCF_RPG_RECT_H

// Headers
#include "rpg_base.h"
#include <stdint.h>

/**
 * RPG::Rect class.
 */
namespace RPG {
	class Rect : public Base {
	public:
		Rect() {}
		uint32_t l = 0;
		uint32_t t = 0;
		uint32_t r = 0;
		uint32_t b = 0;
		uint32_t GetL() const;
		void SetL(uint32_t l);

		uint32_t GetT() const;
		void SetT(uint32_t t);

		uint32_t GetR() const;
		void SetR(uint32_t r);

		uint32_t GetB() const;
		void SetB(uint32_t b);

	};
}

#endif
