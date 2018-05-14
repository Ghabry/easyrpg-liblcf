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
#include "rpg_base.h"
#include <stdint.h>
#include <string>

/**
 * RPG::SavePicture class.
 */
namespace RPG {
	class SavePicture : public Base {
	public:
		enum MapLayer {
			MapLayer_none = 0,
			MapLayer_parallax = 1,
			MapLayer_tilemap_below = 2,
			MapLayer_events_below = 3,
			MapLayer_events_same_as_player = 4,
			MapLayer_tilemap_above = 5,
			MapLayer_events_above = 6,
			MapLayer_weather = 7,
			MapLayer_animations = 8,
			MapLayer_windows = 9,
			MapLayer_timers = 10
		};
		enum BattleLayer {
			BattleLayer_none = 0,
			BattleLayer_background = 1,
			BattleLayer_battlers_and_animations = 2,
			BattleLayer_weather = 3,
			BattleLayer_windows_and_status = 4,
			BattleLayer_timers = 5
		};

		SavePicture() {}
		int ID = 0;
		std::string name;
		double start_x = 0.0;
		double start_y = 0.0;
		double current_x = 0.0;
		double current_y = 0.0;
		bool fixed_to_map = false;
		double current_magnify = -1.0;
		double current_top_trans = 0.0;
		bool transparency = false;
		double current_red = -1.0;
		double current_green = -1.0;
		double current_blue = -1.0;
		double current_sat = -1.0;
		int32_t effect_mode = 0;
		double current_effect = 0.0;
		double current_bot_trans = 0.0;
		int32_t spritesheet_cols = 1;
		int32_t spritesheet_rows = 1;
		int32_t spritesheet_frame = 0;
		int32_t spritesheet_speed = 0;
		int32_t frames = 0;
		bool spritesheet_play_once = false;
		int32_t map_layer = 7;
		int32_t battle_layer = 0;
		struct Flags : Flags_Base {
			bool erase_on_map_change = true;
			bool erase_on_battle_end = false;
			bool unused_bit = false;
			bool unused_bit2 = false;
			bool affected_by_tint = false;
			bool affected_by_flash = true;
			bool affected_by_shake = true;
		} flags;
		double finish_x = 0.0;
		double finish_y = 0.0;
		int32_t finish_magnify = 100;
		int32_t finish_top_trans = 0;
		int32_t finish_bot_trans = 0;
		int32_t finish_red = 100;
		int32_t finish_green = 100;
		int32_t finish_blue = 100;
		int32_t finish_sat = 100;
		int32_t finish_effect = 0;
		int32_t time_left = 0;
		double current_rotation = 0.0;
		int32_t current_waver = 0;
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

		int32_t GetEffectMode() const;
		void SetEffectMode(int32_t effect_mode);

		double GetCurrentEffect() const;
		void SetCurrentEffect(double current_effect);

		double GetCurrentBotTrans() const;
		void SetCurrentBotTrans(double current_bot_trans);

		int32_t GetSpritesheetCols() const;
		void SetSpritesheetCols(int32_t spritesheet_cols);

		int32_t GetSpritesheetRows() const;
		void SetSpritesheetRows(int32_t spritesheet_rows);

		int32_t GetSpritesheetFrame() const;
		void SetSpritesheetFrame(int32_t spritesheet_frame);

		int32_t GetSpritesheetSpeed() const;
		void SetSpritesheetSpeed(int32_t spritesheet_speed);

		int32_t GetFrames() const;
		void SetFrames(int32_t frames);

		bool GetSpritesheetPlayOnce() const;
		void SetSpritesheetPlayOnce(bool spritesheet_play_once);

		const int32_t& GetMapLayer() const;
		int32_t& GetMapLayer();
		void SetMapLayer(const int32_t& map_layer);

		const int32_t& GetBattleLayer() const;
		int32_t& GetBattleLayer();
		void SetBattleLayer(const int32_t& battle_layer);

		const Flags& GetFlags() const;
		Flags& GetFlags();
		void SetFlags(const Flags& flags);

		double GetFinishX() const;
		void SetFinishX(double finish_x);

		double GetFinishY() const;
		void SetFinishY(double finish_y);

		int32_t GetFinishMagnify() const;
		void SetFinishMagnify(int32_t finish_magnify);

		int32_t GetFinishTopTrans() const;
		void SetFinishTopTrans(int32_t finish_top_trans);

		int32_t GetFinishBotTrans() const;
		void SetFinishBotTrans(int32_t finish_bot_trans);

		int32_t GetFinishRed() const;
		void SetFinishRed(int32_t finish_red);

		int32_t GetFinishGreen() const;
		void SetFinishGreen(int32_t finish_green);

		int32_t GetFinishBlue() const;
		void SetFinishBlue(int32_t finish_blue);

		int32_t GetFinishSat() const;
		void SetFinishSat(int32_t finish_sat);

		int32_t GetFinishEffect() const;
		void SetFinishEffect(int32_t finish_effect);

		int32_t GetTimeLeft() const;
		void SetTimeLeft(int32_t time_left);

		double GetCurrentRotation() const;
		void SetCurrentRotation(double current_rotation);

		int32_t GetCurrentWaver() const;
		void SetCurrentWaver(int32_t current_waver);

	};
}

#endif
