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

#ifndef LCF_RPG_SAVEPICTURE_H
#define LCF_RPG_SAVEPICTURE_H

// Headers
#include <string>
#include "rpg_base.h"

/**
 * RPG::SavePicture class.
 */
namespace RPG {
	class SavePicture : Base {
	public:
		SavePicture() {}
		SavePicture(rapidjson::Value& json_values);
		int ID = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		double GetStartX() const;
		void SetStartX(double start_x);

		double GetStartY() const;
		void SetStartY(double start_y);

		double GetCurrentX() const;
		void SetCurrentX(double current_x);

		double GetCurrentY() const;
		void SetCurrentY(double current_y);

		bool GetFixedToMap() const;
		void SetFixedToMap(bool fixed_to_map);

		double GetCurrentMagnify() const;
		void SetCurrentMagnify(double current_magnify);

		double GetCurrentTopTrans() const;
		void SetCurrentTopTrans(double current_top_trans);

		bool GetTransparency() const;
		void SetTransparency(bool transparency);

		double GetCurrentRed() const;
		void SetCurrentRed(double current_red);

		double GetCurrentGreen() const;
		void SetCurrentGreen(double current_green);

		double GetCurrentBlue() const;
		void SetCurrentBlue(double current_blue);

		double GetCurrentSat() const;
		void SetCurrentSat(double current_sat);

		int GetEffectMode() const;
		void SetEffectMode(int effect_mode);

		double GetCurrentEffect() const;
		void SetCurrentEffect(double current_effect);

		double GetCurrentBotTrans() const;
		void SetCurrentBotTrans(double current_bot_trans);

		double GetFinishX() const;
		void SetFinishX(double finish_x);

		double GetFinishY() const;
		void SetFinishY(double finish_y);

		int GetFinishMagnify() const;
		void SetFinishMagnify(int finish_magnify);

		int GetFinishTopTrans() const;
		void SetFinishTopTrans(int finish_top_trans);

		int GetFinishBotTrans() const;
		void SetFinishBotTrans(int finish_bot_trans);

		int GetFinishRed() const;
		void SetFinishRed(int finish_red);

		int GetFinishGreen() const;
		void SetFinishGreen(int finish_green);

		int GetFinishBlue() const;
		void SetFinishBlue(int finish_blue);

		int GetFinishSat() const;
		void SetFinishSat(int finish_sat);

		int GetFinishEffect() const;
		void SetFinishEffect(int finish_effect);

		int GetTimeLeft() const;
		void SetTimeLeft(int time_left);

		double GetCurrentRotation() const;
		void SetCurrentRotation(double current_rotation);

		int GetCurrentWaver() const;
		void SetCurrentWaver(int current_waver);

	};
}

#endif
