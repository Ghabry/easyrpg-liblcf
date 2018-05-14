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

#ifndef LCF_RPG_SAVESYSTEM_H
#define LCF_RPG_SAVESYSTEM_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_music.h"
#include "rpg_sound.h"

/**
 * RPG::SaveSystem class.
 */
namespace RPG {
	class SaveSystem {
	public:
		enum AtbMode {
			AtbMode_atb_active = 0,
			AtbMode_atb_wait = 1
		};

		void Setup();
		void Fixup();
		int32_t screen = 1;
		int32_t frame_count = 0;
		std::string graphics_name;
		int32_t message_stretch = -1;
		int32_t font_id = 0;
		int32_t switches_size = 0;
		std::vector<bool> switches;
		int32_t variables_size = 0;
		std::vector<uint32_t> variables;
		int32_t message_transparent = 0;
		int32_t message_position = 2;
		int32_t message_prevent_overlap = 1;
		int32_t message_continue_events = 0;
		std::string face_name;
		int32_t face_id = 0;
		bool face_right = false;
		bool face_flip = false;
		bool transparent = false;
		int32_t unknown_3d_music_fadeout = 0;
		Music title_music;
		Music battle_music;
		Music battle_end_music;
		Music inn_music;
		Music current_music;
		Music before_vehicle_music;
		Music before_battle_music;
		Music stored_music;
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
		uint8_t transition_out = 1;
		uint8_t transition_in = 1;
		uint8_t battle_start_fadeout = 1;
		uint8_t battle_start_fadein = 1;
		uint8_t battle_end_fadeout = 1;
		uint8_t battle_end_fadein = 1;
		bool teleport_allowed = true;
		bool escape_allowed = true;
		bool save_allowed = true;
		bool menu_allowed = true;
		std::string background;
		int32_t save_count = 0;
		int32_t save_slot = 1;
		int32_t atb_mode = 0;
		int32_t GetScreen() const;
		void SetScreen(int32_t screen);

		int32_t GetFrameCount() const;
		void SetFrameCount(int32_t frame_count);

		const std::string& GetGraphicsName() const;
		std::string& GetGraphicsName();
		void SetGraphicsName(const std::string& graphics_name);

		int32_t GetMessageStretch() const;
		void SetMessageStretch(int32_t message_stretch);

		int32_t GetFontId() const;
		void SetFontId(int32_t font_id);

		int32_t GetSwitchesSize() const;
		void SetSwitchesSize(int32_t switches_size);

		const std::vector<bool>& GetSwitches() const;
		std::vector<bool>& GetSwitches();

		int32_t GetVariablesSize() const;
		void SetVariablesSize(int32_t variables_size);

		const std::vector<uint32_t>& GetVariables() const;
		std::vector<uint32_t>& GetVariables();

		int32_t GetMessageTransparent() const;
		void SetMessageTransparent(int32_t message_transparent);

		int32_t GetMessagePosition() const;
		void SetMessagePosition(int32_t message_position);

		int32_t GetMessagePreventOverlap() const;
		void SetMessagePreventOverlap(int32_t message_prevent_overlap);

		int32_t GetMessageContinueEvents() const;
		void SetMessageContinueEvents(int32_t message_continue_events);

		const std::string& GetFaceName() const;
		std::string& GetFaceName();
		void SetFaceName(const std::string& face_name);

		int32_t GetFaceId() const;
		void SetFaceId(int32_t face_id);

		bool GetFaceRight() const;
		void SetFaceRight(bool face_right);

		bool GetFaceFlip() const;
		void SetFaceFlip(bool face_flip);

		bool GetTransparent() const;
		void SetTransparent(bool transparent);

		int32_t GetUnknown3dMusicFadeout() const;
		void SetUnknown3dMusicFadeout(int32_t unknown_3d_music_fadeout);

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

		const Music& GetCurrentMusic() const;
		Music& GetCurrentMusic();
		void SetCurrentMusic(const Music& current_music);

		const Music& GetBeforeVehicleMusic() const;
		Music& GetBeforeVehicleMusic();
		void SetBeforeVehicleMusic(const Music& before_vehicle_music);

		const Music& GetBeforeBattleMusic() const;
		Music& GetBeforeBattleMusic();
		void SetBeforeBattleMusic(const Music& before_battle_music);

		const Music& GetStoredMusic() const;
		Music& GetStoredMusic();
		void SetStoredMusic(const Music& stored_music);

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

		uint8_t GetTransitionOut() const;
		void SetTransitionOut(uint8_t transition_out);

		uint8_t GetTransitionIn() const;
		void SetTransitionIn(uint8_t transition_in);

		uint8_t GetBattleStartFadeout() const;
		void SetBattleStartFadeout(uint8_t battle_start_fadeout);

		uint8_t GetBattleStartFadein() const;
		void SetBattleStartFadein(uint8_t battle_start_fadein);

		uint8_t GetBattleEndFadeout() const;
		void SetBattleEndFadeout(uint8_t battle_end_fadeout);

		uint8_t GetBattleEndFadein() const;
		void SetBattleEndFadein(uint8_t battle_end_fadein);

		bool GetTeleportAllowed() const;
		void SetTeleportAllowed(bool teleport_allowed);

		bool GetEscapeAllowed() const;
		void SetEscapeAllowed(bool escape_allowed);

		bool GetSaveAllowed() const;
		void SetSaveAllowed(bool save_allowed);

		bool GetMenuAllowed() const;
		void SetMenuAllowed(bool menu_allowed);

		const std::string& GetBackground() const;
		std::string& GetBackground();
		void SetBackground(const std::string& background);

		int32_t GetSaveCount() const;
		void SetSaveCount(int32_t save_count);

		int32_t GetSaveSlot() const;
		void SetSaveSlot(int32_t save_slot);

		const int32_t& GetAtbMode() const;
		int32_t& GetAtbMode();
		void SetAtbMode(const int32_t& atb_mode);

	};
}

#endif
