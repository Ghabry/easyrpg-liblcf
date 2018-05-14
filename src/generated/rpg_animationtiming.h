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

#ifndef LCF_RPG_ANIMATIONTIMING_H
#define LCF_RPG_ANIMATIONTIMING_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include "rpg_sound.h"

/**
 * RPG::AnimationTiming class.
 */
namespace RPG {
	class AnimationTiming : public Base {
	public:
		enum FlashScope {
			FlashScope_nothing = 0,
			FlashScope_target = 1,
			FlashScope_screen = 2
		};
		enum ScreenShake {
			ScreenShake_nothing = 0,
			ScreenShake_target = 1,
			ScreenShake_screen = 2
		};

		AnimationTiming() {}
		int ID = 0;
		int32_t frame = 0;
		Sound se;
		int32_t flash_scope = 0;
		int32_t flash_red = 31;
		int32_t flash_green = 31;
		int32_t flash_blue = 31;
		int32_t flash_power = 31;
		int32_t screen_shake = 0;
		int32_t GetFrame() const;
		void SetFrame(int32_t frame);

		const Sound& GetSe() const;
		Sound& GetSe();
		void SetSe(const Sound& se);

		const int32_t& GetFlashScope() const;
		int32_t& GetFlashScope();
		void SetFlashScope(const int32_t& flash_scope);

		int32_t GetFlashRed() const;
		void SetFlashRed(int32_t flash_red);

		int32_t GetFlashGreen() const;
		void SetFlashGreen(int32_t flash_green);

		int32_t GetFlashBlue() const;
		void SetFlashBlue(int32_t flash_blue);

		int32_t GetFlashPower() const;
		void SetFlashPower(int32_t flash_power);

		const int32_t& GetScreenShake() const;
		int32_t& GetScreenShake();
		void SetScreenShake(const int32_t& screen_shake);

	};
}

#endif
