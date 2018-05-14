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

#ifndef LCF_RPG_SAVESCREEN_H
#define LCF_RPG_SAVESCREEN_H

// Headers
#include "rpg_base.h"
#include <stdint.h>

/**
 * RPG::SaveScreen class.
 */
namespace RPG {
	class SaveScreen : public Base {
	public:
		SaveScreen() {}
		int32_t tint_finish_red = 100;
		int32_t tint_finish_green = 100;
		int32_t tint_finish_blue = 100;
		int32_t tint_finish_sat = 100;
		double tint_current_red = 100.0;
		double tint_current_green = 100.0;
		double tint_current_blue = 100.0;
		double tint_current_sat = 100.0;
		int32_t tint_time_left = 0;
		bool flash_continuous = false;
		int32_t flash_red = 0;
		int32_t flash_green = 0;
		int32_t flash_blue = 0;
		double flash_current_level = 0.0;
		int32_t flash_time_left = 0;
		bool shake_continuous = false;
		int32_t shake_strength = 0;
		int32_t shake_speed = 0;
		int32_t shake_position = 0;
		int32_t shake_position_y = 0;
		int32_t shake_time_left = 0;
		int32_t pan_x = 0;
		int32_t pan_y = 0;
		int32_t battleanim_id = 0;
		int32_t battleanim_target = 0;
		int32_t battleanim_frame = 0;
		int32_t unknown_2e_battleanim_active = 0;
		bool battleanim_global = false;
		int32_t weather = 0;
		int32_t weather_strength = 0;
		int32_t GetTintFinishRed() const;
		void SetTintFinishRed(int32_t tint_finish_red);

		int32_t GetTintFinishGreen() const;
		void SetTintFinishGreen(int32_t tint_finish_green);

		int32_t GetTintFinishBlue() const;
		void SetTintFinishBlue(int32_t tint_finish_blue);

		int32_t GetTintFinishSat() const;
		void SetTintFinishSat(int32_t tint_finish_sat);

		double GetTintCurrentRed() const;
		void SetTintCurrentRed(double tint_current_red);

		double GetTintCurrentGreen() const;
		void SetTintCurrentGreen(double tint_current_green);

		double GetTintCurrentBlue() const;
		void SetTintCurrentBlue(double tint_current_blue);

		double GetTintCurrentSat() const;
		void SetTintCurrentSat(double tint_current_sat);

		int32_t GetTintTimeLeft() const;
		void SetTintTimeLeft(int32_t tint_time_left);

		bool GetFlashContinuous() const;
		void SetFlashContinuous(bool flash_continuous);

		int32_t GetFlashRed() const;
		void SetFlashRed(int32_t flash_red);

		int32_t GetFlashGreen() const;
		void SetFlashGreen(int32_t flash_green);

		int32_t GetFlashBlue() const;
		void SetFlashBlue(int32_t flash_blue);

		double GetFlashCurrentLevel() const;
		void SetFlashCurrentLevel(double flash_current_level);

		int32_t GetFlashTimeLeft() const;
		void SetFlashTimeLeft(int32_t flash_time_left);

		bool GetShakeContinuous() const;
		void SetShakeContinuous(bool shake_continuous);

		int32_t GetShakeStrength() const;
		void SetShakeStrength(int32_t shake_strength);

		int32_t GetShakeSpeed() const;
		void SetShakeSpeed(int32_t shake_speed);

		int32_t GetShakePosition() const;
		void SetShakePosition(int32_t shake_position);

		int32_t GetShakePositionY() const;
		void SetShakePositionY(int32_t shake_position_y);

		int32_t GetShakeTimeLeft() const;
		void SetShakeTimeLeft(int32_t shake_time_left);

		int32_t GetPanX() const;
		void SetPanX(int32_t pan_x);

		int32_t GetPanY() const;
		void SetPanY(int32_t pan_y);

		int32_t GetBattleanimId() const;
		void SetBattleanimId(int32_t battleanim_id);

		int32_t GetBattleanimTarget() const;
		void SetBattleanimTarget(int32_t battleanim_target);

		int32_t GetBattleanimFrame() const;
		void SetBattleanimFrame(int32_t battleanim_frame);

		int32_t GetUnknown2eBattleanimActive() const;
		void SetUnknown2eBattleanimActive(int32_t unknown_2e_battleanim_active);

		bool GetBattleanimGlobal() const;
		void SetBattleanimGlobal(bool battleanim_global);

		int32_t GetWeather() const;
		void SetWeather(int32_t weather);

		int32_t GetWeatherStrength() const;
		void SetWeatherStrength(int32_t weather_strength);

	};
}

#endif
