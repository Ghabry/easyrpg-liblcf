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

#ifndef LCF_RPG_ANIMATIONCELLDATA_H
#define LCF_RPG_ANIMATIONCELLDATA_H

// Headers
#include "rpg_base.h"
#include <stdint.h>

/**
 * RPG::AnimationCellData class.
 */
namespace RPG {
	class AnimationCellData : public Base {
	public:
		AnimationCellData() {}
		int ID = 0;
		int32_t valid = 1;
		int32_t cell_id = 0;
		int32_t x = 0;
		int32_t y = 0;
		int32_t zoom = 100;
		int32_t tone_red = 100;
		int32_t tone_green = 100;
		int32_t tone_blue = 100;
		int32_t tone_gray = 100;
		int32_t transparency = 0;
		int32_t GetValid() const;
		void SetValid(int32_t valid);

		int32_t GetCellId() const;
		void SetCellId(int32_t cell_id);

		int32_t GetX() const;
		void SetX(int32_t x);

		int32_t GetY() const;
		void SetY(int32_t y);

		int32_t GetZoom() const;
		void SetZoom(int32_t zoom);

		int32_t GetToneRed() const;
		void SetToneRed(int32_t tone_red);

		int32_t GetToneGreen() const;
		void SetToneGreen(int32_t tone_green);

		int32_t GetToneBlue() const;
		void SetToneBlue(int32_t tone_blue);

		int32_t GetToneGray() const;
		void SetToneGray(int32_t tone_gray);

		int32_t GetTransparency() const;
		void SetTransparency(int32_t transparency);

	};
}

#endif
