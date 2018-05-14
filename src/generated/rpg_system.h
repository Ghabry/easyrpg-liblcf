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

#ifndef LCF_RPG_SYSTEM_H
#define LCF_RPG_SYSTEM_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_music.h"
#include "rpg_sound.h"
#include "rpg_testbattler.h"

/**
 * RPG::System class.
 */
namespace RPG {
	class System : public Base {
	public:
		enum FadeOut {
			FadeOut_default = 0,
			FadeOut_fade_out = 1,
			FadeOut_remove_blocks = 2,
			FadeOut_wipe_downward = 3,
			FadeOut_wipe_upward = 4,
			FadeOut_venetian_blinds = 5,
			FadeOut_vertical_blinds = 6,
			FadeOut_horizontal_blinds = 7,
			FadeOut_receding_square = 8,
			FadeOut_expanding_square = 9,
			FadeOut_screen_moves_up = 10,
			FadeOut_screen_moves_down = 11,
			FadeOut_screen_moves_left = 12,
			FadeOut_screen_moves_right = 13,
			FadeOut_vertical_div = 14,
			FadeOut_horizontal_div = 15,
			FadeOut_quadrasection = 16,
			FadeOut_zoom_in = 17,
			FadeOut_mosaic = 18,
			FadeOut_waver_screen = 19,
			FadeOut_instantaneous = 20,
			FadeOut_none = 21
		};
		enum FadeIn {
			FadeIn_default = 0,
			FadeIn_fade_in = 1,
			FadeIn_reconstitute_blocks = 2,
			FadeIn_unwipe_downward = 3,
			FadeIn_unwipe_upward = 4,
			FadeIn_venetian_blinds = 5,
			FadeIn_vertical_blinds = 6,
			FadeIn_horizontal_blinds = 7,
			FadeIn_receding_square = 8,
			FadeIn_expanding_square = 9,
			FadeIn_screen_moves_down = 10,
			FadeIn_screen_moves_up = 11,
			FadeIn_screen_moves_right = 12,
			FadeIn_screen_moves_left = 13,
			FadeIn_vertical_unify = 14,
			FadeIn_horizontal_unify = 15,
			FadeIn_unify_quadrants = 16,
			FadeIn_zoom_out = 17,
			FadeIn_mosaic = 18,
			FadeIn_waver_screen = 19,
			FadeIn_instantaneous = 20,
			FadeIn_none = 21
		};
		enum Stretch {
			Stretch_stretch = 0,
			Stretch_tiled = 1
		};
		enum Font {
			Font_gothic = 0,
			Font_mincho = 1
		};
		enum BattleFormation {
			BattleFormation_terrain = 0,
			BattleFormation_loose = 1,
			BattleFormation_tight = 2
		};
		enum BattleCondition {
			BattleCondition_none = 0,
			BattleCondition_initiative = 1,
			BattleCondition_back = 2,
			BattleCondition_surround = 3,
			BattleCondition_pincers = 4
		};

		System() {}
		int32_t ldb_id = 0;
		std::string boat_name;
		std::string ship_name;
		std::string airship_name;
		int32_t boat_index = 0;
		int32_t ship_index = 0;
		int32_t airship_index = 0;
		std::string title_name;
		std::string gameover_name;
		std::string system_name;
		std::string system2_name;
		std::vector<int16_t> party;
		std::vector<int16_t> menu_commands;
		Music title_music;
		Music battle_music;
		Music battle_end_music;
		Music inn_music;
		Music boat_music;
		Music ship_music;
		Music airship_music;
		Music gameover_music;
		Sound cursor_se;
		Sound decision_se;
		Sound cancel_se;
		Sound buzzer_se;
		Sound battle_se;
		Sound escape_se;
		Sound enemy_attack_se;
		Sound enemy_damaged_se;
		Sound actor_damaged_se;
		Sound dodge_se;
		Sound enemy_death_se;
		Sound item_se;
		int32_t transition_out = 0;
		int32_t transition_in = 0;
		int32_t battle_start_fadeout = 0;
		int32_t battle_start_fadein = 0;
		int32_t battle_end_fadeout = 0;
		int32_t battle_end_fadein = 0;
		int32_t message_stretch = 0;
		int32_t font_id = 0;
		int32_t selected_condition = 0;
		int32_t selected_hero = 0;
		std::string battletest_background;
		std::vector<TestBattler> battletest_data;
		int32_t save_count = 0;
		int32_t battletest_terrain = 0;
		int32_t battletest_formation = 0;
		int32_t battletest_condition = 0;
		int32_t unknown_61 = -1;
		bool show_frame = false;
		std::string frame_name;
		bool invert_animations = false;
		bool show_title = true;
		int32_t GetLdbId() const;
		void SetLdbId(int32_t ldb_id);

		const std::string& GetBoatName() const;
		std::string& GetBoatName();
		void SetBoatName(const std::string& boat_name);

		const std::string& GetShipName() const;
		std::string& GetShipName();
		void SetShipName(const std::string& ship_name);

		const std::string& GetAirshipName() const;
		std::string& GetAirshipName();
		void SetAirshipName(const std::string& airship_name);

		int32_t GetBoatIndex() const;
		void SetBoatIndex(int32_t boat_index);

		int32_t GetShipIndex() const;
		void SetShipIndex(int32_t ship_index);

		int32_t GetAirshipIndex() const;
		void SetAirshipIndex(int32_t airship_index);

		const std::string& GetTitleName() const;
		std::string& GetTitleName();
		void SetTitleName(const std::string& title_name);

		const std::string& GetGameoverName() const;
		std::string& GetGameoverName();
		void SetGameoverName(const std::string& gameover_name);

		const std::string& GetSystemName() const;
		std::string& GetSystemName();
		void SetSystemName(const std::string& system_name);

		const std::string& GetSystem2Name() const;
		std::string& GetSystem2Name();
		void SetSystem2Name(const std::string& system2_name);


		const std::vector<int16_t>& GetParty() const;
		std::vector<int16_t>& GetParty();


		const std::vector<int16_t>& GetMenuCommands() const;
		std::vector<int16_t>& GetMenuCommands();

		const Music& GetTitleMusic() const;
		Music& GetTitleMusic();
		void SetTitleMusic(const Music& title_music);

		const Music& GetBattleMusic() const;
		Music& GetBattleMusic();
		void SetBattleMusic(const Music& battle_music);

		const Music& GetBattleEndMusic() const;
		Music& GetBattleEndMusic();
		void SetBattleEndMusic(const Music& battle_end_music);

		const Music& GetInnMusic() const;
		Music& GetInnMusic();
		void SetInnMusic(const Music& inn_music);

		const Music& GetBoatMusic() const;
		Music& GetBoatMusic();
		void SetBoatMusic(const Music& boat_music);

		const Music& GetShipMusic() const;
		Music& GetShipMusic();
		void SetShipMusic(const Music& ship_music);

		const Music& GetAirshipMusic() const;
		Music& GetAirshipMusic();
		void SetAirshipMusic(const Music& airship_music);

		const Music& GetGameoverMusic() const;
		Music& GetGameoverMusic();
		void SetGameoverMusic(const Music& gameover_music);

		const Sound& GetCursorSe() const;
		Sound& GetCursorSe();
		void SetCursorSe(const Sound& cursor_se);

		const Sound& GetDecisionSe() const;
		Sound& GetDecisionSe();
		void SetDecisionSe(const Sound& decision_se);

		const Sound& GetCancelSe() const;
		Sound& GetCancelSe();
		void SetCancelSe(const Sound& cancel_se);

		const Sound& GetBuzzerSe() const;
		Sound& GetBuzzerSe();
		void SetBuzzerSe(const Sound& buzzer_se);

		const Sound& GetBattleSe() const;
		Sound& GetBattleSe();
		void SetBattleSe(const Sound& battle_se);

		const Sound& GetEscapeSe() const;
		Sound& GetEscapeSe();
		void SetEscapeSe(const Sound& escape_se);

		const Sound& GetEnemyAttackSe() const;
		Sound& GetEnemyAttackSe();
		void SetEnemyAttackSe(const Sound& enemy_attack_se);

		const Sound& GetEnemyDamagedSe() const;
		Sound& GetEnemyDamagedSe();
		void SetEnemyDamagedSe(const Sound& enemy_damaged_se);

		const Sound& GetActorDamagedSe() const;
		Sound& GetActorDamagedSe();
		void SetActorDamagedSe(const Sound& actor_damaged_se);

		const Sound& GetDodgeSe() const;
		Sound& GetDodgeSe();
		void SetDodgeSe(const Sound& dodge_se);

		const Sound& GetEnemyDeathSe() const;
		Sound& GetEnemyDeathSe();
		void SetEnemyDeathSe(const Sound& enemy_death_se);

		const Sound& GetItemSe() const;
		Sound& GetItemSe();
		void SetItemSe(const Sound& item_se);

		const int32_t& GetTransitionOut() const;
		int32_t& GetTransitionOut();
		void SetTransitionOut(const int32_t& transition_out);

		const int32_t& GetTransitionIn() const;
		int32_t& GetTransitionIn();
		void SetTransitionIn(const int32_t& transition_in);

		const int32_t& GetBattleStartFadeout() const;
		int32_t& GetBattleStartFadeout();
		void SetBattleStartFadeout(const int32_t& battle_start_fadeout);

		const int32_t& GetBattleStartFadein() const;
		int32_t& GetBattleStartFadein();
		void SetBattleStartFadein(const int32_t& battle_start_fadein);

		const int32_t& GetBattleEndFadeout() const;
		int32_t& GetBattleEndFadeout();
		void SetBattleEndFadeout(const int32_t& battle_end_fadeout);

		const int32_t& GetBattleEndFadein() const;
		int32_t& GetBattleEndFadein();
		void SetBattleEndFadein(const int32_t& battle_end_fadein);

		const int32_t& GetMessageStretch() const;
		int32_t& GetMessageStretch();
		void SetMessageStretch(const int32_t& message_stretch);

		const int32_t& GetFontId() const;
		int32_t& GetFontId();
		void SetFontId(const int32_t& font_id);

		int32_t GetSelectedCondition() const;
		void SetSelectedCondition(int32_t selected_condition);

		const int32_t& GetSelectedHero() const;
		int32_t& GetSelectedHero();
		void SetSelectedHero(const int32_t& selected_hero);

		const std::string& GetBattletestBackground() const;
		std::string& GetBattletestBackground();
		void SetBattletestBackground(const std::string& battletest_background);

		const std::vector<TestBattler>& GetBattletestData() const;
		std::vector<TestBattler>& GetBattletestData();

		int32_t GetSaveCount() const;
		void SetSaveCount(int32_t save_count);

		const int32_t& GetBattletestTerrain() const;
		int32_t& GetBattletestTerrain();
		void SetBattletestTerrain(const int32_t& battletest_terrain);

		const int32_t& GetBattletestFormation() const;
		int32_t& GetBattletestFormation();
		void SetBattletestFormation(const int32_t& battletest_formation);

		const int32_t& GetBattletestCondition() const;
		int32_t& GetBattletestCondition();
		void SetBattletestCondition(const int32_t& battletest_condition);

		int32_t GetUnknown61() const;
		void SetUnknown61(int32_t unknown_61);

		bool GetShowFrame() const;
		void SetShowFrame(bool show_frame);

		const std::string& GetFrameName() const;
		std::string& GetFrameName();
		void SetFrameName(const std::string& frame_name);

		bool GetInvertAnimations() const;
		void SetInvertAnimations(bool invert_animations);

		bool GetShowTitle() const;
		void SetShowTitle(bool show_title);

	};
}

#endif
