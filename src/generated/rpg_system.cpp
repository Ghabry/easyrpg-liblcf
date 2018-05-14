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

// Headers
#include "rpg_system.h"


int32_t RPG::System::GetLdbId() const {
	return getter<int32_t>("ldb_id");
}

void RPG::System::SetLdbId(int32_t ldb_id) {
	setter<int32_t>("ldb_id", ldb_id);
}

const std::string& RPG::System::GetBoatName() const {
	return getter<const std::string&>("boat_name");
}

std::string& RPG::System::GetBoatName() {
	return getter<std::string&>("boat_name");
}

void RPG::System::SetBoatName(const std::string& boat_name) {
	setter<std::string>("boat_name", boat_name);
}

const std::string& RPG::System::GetShipName() const {
	return getter<const std::string&>("ship_name");
}

std::string& RPG::System::GetShipName() {
	return getter<std::string&>("ship_name");
}

void RPG::System::SetShipName(const std::string& ship_name) {
	setter<std::string>("ship_name", ship_name);
}

const std::string& RPG::System::GetAirshipName() const {
	return getter<const std::string&>("airship_name");
}

std::string& RPG::System::GetAirshipName() {
	return getter<std::string&>("airship_name");
}

void RPG::System::SetAirshipName(const std::string& airship_name) {
	setter<std::string>("airship_name", airship_name);
}

int32_t RPG::System::GetBoatIndex() const {
	return getter<int32_t>("boat_index");
}

void RPG::System::SetBoatIndex(int32_t boat_index) {
	setter<int32_t>("boat_index", boat_index);
}

int32_t RPG::System::GetShipIndex() const {
	return getter<int32_t>("ship_index");
}

void RPG::System::SetShipIndex(int32_t ship_index) {
	setter<int32_t>("ship_index", ship_index);
}

int32_t RPG::System::GetAirshipIndex() const {
	return getter<int32_t>("airship_index");
}

void RPG::System::SetAirshipIndex(int32_t airship_index) {
	setter<int32_t>("airship_index", airship_index);
}

const std::string& RPG::System::GetTitleName() const {
	return getter<const std::string&>("title_name");
}

std::string& RPG::System::GetTitleName() {
	return getter<std::string&>("title_name");
}

void RPG::System::SetTitleName(const std::string& title_name) {
	setter<std::string>("title_name", title_name);
}

const std::string& RPG::System::GetGameoverName() const {
	return getter<const std::string&>("gameover_name");
}

std::string& RPG::System::GetGameoverName() {
	return getter<std::string&>("gameover_name");
}

void RPG::System::SetGameoverName(const std::string& gameover_name) {
	setter<std::string>("gameover_name", gameover_name);
}

const std::string& RPG::System::GetSystemName() const {
	return getter<const std::string&>("system_name");
}

std::string& RPG::System::GetSystemName() {
	return getter<std::string&>("system_name");
}

void RPG::System::SetSystemName(const std::string& system_name) {
	setter<std::string>("system_name", system_name);
}

const std::string& RPG::System::GetSystem2Name() const {
	return getter<const std::string&>("system2_name");
}

std::string& RPG::System::GetSystem2Name() {
	return getter<std::string&>("system2_name");
}

void RPG::System::SetSystem2Name(const std::string& system2_name) {
	setter<std::string>("system2_name", system2_name);
}


const std::vector<int16_t>& RPG::System::GetParty() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("party");
}

std::vector<int16_t>& RPG::System::GetParty() {
	return vector_getter<std::vector<int16_t>&, int16_t>("party");
}


const std::vector<int16_t>& RPG::System::GetMenuCommands() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("menu_commands");
}

std::vector<int16_t>& RPG::System::GetMenuCommands() {
	return vector_getter<std::vector<int16_t>&, int16_t>("menu_commands");
}

const RPG::Music& RPG::System::GetTitleMusic() const {
	return getter<const RPG::Music&>("title_music");
}

RPG::Music& RPG::System::GetTitleMusic() {
	return getter<RPG::Music&>("title_music");
}

void RPG::System::SetTitleMusic(const RPG::Music& title_music) {
	setter<RPG::Music>("title_music", title_music);
}

const RPG::Music& RPG::System::GetBattleMusic() const {
	return getter<const RPG::Music&>("battle_music");
}

RPG::Music& RPG::System::GetBattleMusic() {
	return getter<RPG::Music&>("battle_music");
}

void RPG::System::SetBattleMusic(const RPG::Music& battle_music) {
	setter<RPG::Music>("battle_music", battle_music);
}

const RPG::Music& RPG::System::GetBattleEndMusic() const {
	return getter<const RPG::Music&>("battle_end_music");
}

RPG::Music& RPG::System::GetBattleEndMusic() {
	return getter<RPG::Music&>("battle_end_music");
}

void RPG::System::SetBattleEndMusic(const RPG::Music& battle_end_music) {
	setter<RPG::Music>("battle_end_music", battle_end_music);
}

const RPG::Music& RPG::System::GetInnMusic() const {
	return getter<const RPG::Music&>("inn_music");
}

RPG::Music& RPG::System::GetInnMusic() {
	return getter<RPG::Music&>("inn_music");
}

void RPG::System::SetInnMusic(const RPG::Music& inn_music) {
	setter<RPG::Music>("inn_music", inn_music);
}

const RPG::Music& RPG::System::GetBoatMusic() const {
	return getter<const RPG::Music&>("boat_music");
}

RPG::Music& RPG::System::GetBoatMusic() {
	return getter<RPG::Music&>("boat_music");
}

void RPG::System::SetBoatMusic(const RPG::Music& boat_music) {
	setter<RPG::Music>("boat_music", boat_music);
}

const RPG::Music& RPG::System::GetShipMusic() const {
	return getter<const RPG::Music&>("ship_music");
}

RPG::Music& RPG::System::GetShipMusic() {
	return getter<RPG::Music&>("ship_music");
}

void RPG::System::SetShipMusic(const RPG::Music& ship_music) {
	setter<RPG::Music>("ship_music", ship_music);
}

const RPG::Music& RPG::System::GetAirshipMusic() const {
	return getter<const RPG::Music&>("airship_music");
}

RPG::Music& RPG::System::GetAirshipMusic() {
	return getter<RPG::Music&>("airship_music");
}

void RPG::System::SetAirshipMusic(const RPG::Music& airship_music) {
	setter<RPG::Music>("airship_music", airship_music);
}

const RPG::Music& RPG::System::GetGameoverMusic() const {
	return getter<const RPG::Music&>("gameover_music");
}

RPG::Music& RPG::System::GetGameoverMusic() {
	return getter<RPG::Music&>("gameover_music");
}

void RPG::System::SetGameoverMusic(const RPG::Music& gameover_music) {
	setter<RPG::Music>("gameover_music", gameover_music);
}

const RPG::Sound& RPG::System::GetCursorSe() const {
	return getter<const RPG::Sound&>("cursor_se");
}

RPG::Sound& RPG::System::GetCursorSe() {
	return getter<RPG::Sound&>("cursor_se");
}

void RPG::System::SetCursorSe(const RPG::Sound& cursor_se) {
	setter<RPG::Sound>("cursor_se", cursor_se);
}

const RPG::Sound& RPG::System::GetDecisionSe() const {
	return getter<const RPG::Sound&>("decision_se");
}

RPG::Sound& RPG::System::GetDecisionSe() {
	return getter<RPG::Sound&>("decision_se");
}

void RPG::System::SetDecisionSe(const RPG::Sound& decision_se) {
	setter<RPG::Sound>("decision_se", decision_se);
}

const RPG::Sound& RPG::System::GetCancelSe() const {
	return getter<const RPG::Sound&>("cancel_se");
}

RPG::Sound& RPG::System::GetCancelSe() {
	return getter<RPG::Sound&>("cancel_se");
}

void RPG::System::SetCancelSe(const RPG::Sound& cancel_se) {
	setter<RPG::Sound>("cancel_se", cancel_se);
}

const RPG::Sound& RPG::System::GetBuzzerSe() const {
	return getter<const RPG::Sound&>("buzzer_se");
}

RPG::Sound& RPG::System::GetBuzzerSe() {
	return getter<RPG::Sound&>("buzzer_se");
}

void RPG::System::SetBuzzerSe(const RPG::Sound& buzzer_se) {
	setter<RPG::Sound>("buzzer_se", buzzer_se);
}

const RPG::Sound& RPG::System::GetBattleSe() const {
	return getter<const RPG::Sound&>("battle_se");
}

RPG::Sound& RPG::System::GetBattleSe() {
	return getter<RPG::Sound&>("battle_se");
}

void RPG::System::SetBattleSe(const RPG::Sound& battle_se) {
	setter<RPG::Sound>("battle_se", battle_se);
}

const RPG::Sound& RPG::System::GetEscapeSe() const {
	return getter<const RPG::Sound&>("escape_se");
}

RPG::Sound& RPG::System::GetEscapeSe() {
	return getter<RPG::Sound&>("escape_se");
}

void RPG::System::SetEscapeSe(const RPG::Sound& escape_se) {
	setter<RPG::Sound>("escape_se", escape_se);
}

const RPG::Sound& RPG::System::GetEnemyAttackSe() const {
	return getter<const RPG::Sound&>("enemy_attack_se");
}

RPG::Sound& RPG::System::GetEnemyAttackSe() {
	return getter<RPG::Sound&>("enemy_attack_se");
}

void RPG::System::SetEnemyAttackSe(const RPG::Sound& enemy_attack_se) {
	setter<RPG::Sound>("enemy_attack_se", enemy_attack_se);
}

const RPG::Sound& RPG::System::GetEnemyDamagedSe() const {
	return getter<const RPG::Sound&>("enemy_damaged_se");
}

RPG::Sound& RPG::System::GetEnemyDamagedSe() {
	return getter<RPG::Sound&>("enemy_damaged_se");
}

void RPG::System::SetEnemyDamagedSe(const RPG::Sound& enemy_damaged_se) {
	setter<RPG::Sound>("enemy_damaged_se", enemy_damaged_se);
}

const RPG::Sound& RPG::System::GetActorDamagedSe() const {
	return getter<const RPG::Sound&>("actor_damaged_se");
}

RPG::Sound& RPG::System::GetActorDamagedSe() {
	return getter<RPG::Sound&>("actor_damaged_se");
}

void RPG::System::SetActorDamagedSe(const RPG::Sound& actor_damaged_se) {
	setter<RPG::Sound>("actor_damaged_se", actor_damaged_se);
}

const RPG::Sound& RPG::System::GetDodgeSe() const {
	return getter<const RPG::Sound&>("dodge_se");
}

RPG::Sound& RPG::System::GetDodgeSe() {
	return getter<RPG::Sound&>("dodge_se");
}

void RPG::System::SetDodgeSe(const RPG::Sound& dodge_se) {
	setter<RPG::Sound>("dodge_se", dodge_se);
}

const RPG::Sound& RPG::System::GetEnemyDeathSe() const {
	return getter<const RPG::Sound&>("enemy_death_se");
}

RPG::Sound& RPG::System::GetEnemyDeathSe() {
	return getter<RPG::Sound&>("enemy_death_se");
}

void RPG::System::SetEnemyDeathSe(const RPG::Sound& enemy_death_se) {
	setter<RPG::Sound>("enemy_death_se", enemy_death_se);
}

const RPG::Sound& RPG::System::GetItemSe() const {
	return getter<const RPG::Sound&>("item_se");
}

RPG::Sound& RPG::System::GetItemSe() {
	return getter<RPG::Sound&>("item_se");
}

void RPG::System::SetItemSe(const RPG::Sound& item_se) {
	setter<RPG::Sound>("item_se", item_se);
}

const int32_t& RPG::System::GetTransitionOut() const {
	return getter<const int32_t&>("transition_out");
}

int32_t& RPG::System::GetTransitionOut() {
	return getter<int32_t&>("transition_out");
}

void RPG::System::SetTransitionOut(const int32_t& transition_out) {
	setter<int32_t>("transition_out", transition_out);
}

const int32_t& RPG::System::GetTransitionIn() const {
	return getter<const int32_t&>("transition_in");
}

int32_t& RPG::System::GetTransitionIn() {
	return getter<int32_t&>("transition_in");
}

void RPG::System::SetTransitionIn(const int32_t& transition_in) {
	setter<int32_t>("transition_in", transition_in);
}

const int32_t& RPG::System::GetBattleStartFadeout() const {
	return getter<const int32_t&>("battle_start_fadeout");
}

int32_t& RPG::System::GetBattleStartFadeout() {
	return getter<int32_t&>("battle_start_fadeout");
}

void RPG::System::SetBattleStartFadeout(const int32_t& battle_start_fadeout) {
	setter<int32_t>("battle_start_fadeout", battle_start_fadeout);
}

const int32_t& RPG::System::GetBattleStartFadein() const {
	return getter<const int32_t&>("battle_start_fadein");
}

int32_t& RPG::System::GetBattleStartFadein() {
	return getter<int32_t&>("battle_start_fadein");
}

void RPG::System::SetBattleStartFadein(const int32_t& battle_start_fadein) {
	setter<int32_t>("battle_start_fadein", battle_start_fadein);
}

const int32_t& RPG::System::GetBattleEndFadeout() const {
	return getter<const int32_t&>("battle_end_fadeout");
}

int32_t& RPG::System::GetBattleEndFadeout() {
	return getter<int32_t&>("battle_end_fadeout");
}

void RPG::System::SetBattleEndFadeout(const int32_t& battle_end_fadeout) {
	setter<int32_t>("battle_end_fadeout", battle_end_fadeout);
}

const int32_t& RPG::System::GetBattleEndFadein() const {
	return getter<const int32_t&>("battle_end_fadein");
}

int32_t& RPG::System::GetBattleEndFadein() {
	return getter<int32_t&>("battle_end_fadein");
}

void RPG::System::SetBattleEndFadein(const int32_t& battle_end_fadein) {
	setter<int32_t>("battle_end_fadein", battle_end_fadein);
}

const int32_t& RPG::System::GetMessageStretch() const {
	return getter<const int32_t&>("message_stretch");
}

int32_t& RPG::System::GetMessageStretch() {
	return getter<int32_t&>("message_stretch");
}

void RPG::System::SetMessageStretch(const int32_t& message_stretch) {
	setter<int32_t>("message_stretch", message_stretch);
}

const int32_t& RPG::System::GetFontId() const {
	return getter<const int32_t&>("font_id");
}

int32_t& RPG::System::GetFontId() {
	return getter<int32_t&>("font_id");
}

void RPG::System::SetFontId(const int32_t& font_id) {
	setter<int32_t>("font_id", font_id);
}

int32_t RPG::System::GetSelectedCondition() const {
	return getter<int32_t>("selected_condition");
}

void RPG::System::SetSelectedCondition(int32_t selected_condition) {
	setter<int32_t>("selected_condition", selected_condition);
}

const int32_t& RPG::System::GetSelectedHero() const {
	return getter<const int32_t&>("selected_hero");
}

int32_t& RPG::System::GetSelectedHero() {
	return getter<int32_t&>("selected_hero");
}

void RPG::System::SetSelectedHero(const int32_t& selected_hero) {
	setter<int32_t>("selected_hero", selected_hero);
}

const std::string& RPG::System::GetBattletestBackground() const {
	return getter<const std::string&>("battletest_background");
}

std::string& RPG::System::GetBattletestBackground() {
	return getter<std::string&>("battletest_background");
}

void RPG::System::SetBattletestBackground(const std::string& battletest_background) {
	setter<std::string>("battletest_background", battletest_background);
}

const std::vector<RPG::TestBattler>& RPG::System::GetBattletestData() const {
	return vector_getter<const std::vector<RPG::TestBattler>&, RPG::TestBattler>("battletest_data");
}

std::vector<RPG::TestBattler>& RPG::System::GetBattletestData() {
	return vector_getter<std::vector<RPG::TestBattler>&, RPG::TestBattler>("battletest_data");
}

int32_t RPG::System::GetSaveCount() const {
	return getter<int32_t>("save_count");
}

void RPG::System::SetSaveCount(int32_t save_count) {
	setter<int32_t>("save_count", save_count);
}

const int32_t& RPG::System::GetBattletestTerrain() const {
	return getter<const int32_t&>("battletest_terrain");
}

int32_t& RPG::System::GetBattletestTerrain() {
	return getter<int32_t&>("battletest_terrain");
}

void RPG::System::SetBattletestTerrain(const int32_t& battletest_terrain) {
	setter<int32_t>("battletest_terrain", battletest_terrain);
}

const int32_t& RPG::System::GetBattletestFormation() const {
	return getter<const int32_t&>("battletest_formation");
}

int32_t& RPG::System::GetBattletestFormation() {
	return getter<int32_t&>("battletest_formation");
}

void RPG::System::SetBattletestFormation(const int32_t& battletest_formation) {
	setter<int32_t>("battletest_formation", battletest_formation);
}

const int32_t& RPG::System::GetBattletestCondition() const {
	return getter<const int32_t&>("battletest_condition");
}

int32_t& RPG::System::GetBattletestCondition() {
	return getter<int32_t&>("battletest_condition");
}

void RPG::System::SetBattletestCondition(const int32_t& battletest_condition) {
	setter<int32_t>("battletest_condition", battletest_condition);
}

int32_t RPG::System::GetUnknown61() const {
	return getter<int32_t>("unknown_61");
}

void RPG::System::SetUnknown61(int32_t unknown_61) {
	setter<int32_t>("unknown_61", unknown_61);
}

bool RPG::System::GetShowFrame() const {
	return getter<bool>("show_frame");
}

void RPG::System::SetShowFrame(bool show_frame) {
	setter<bool>("show_frame", show_frame);
}

const std::string& RPG::System::GetFrameName() const {
	return getter<const std::string&>("frame_name");
}

std::string& RPG::System::GetFrameName() {
	return getter<std::string&>("frame_name");
}

void RPG::System::SetFrameName(const std::string& frame_name) {
	setter<std::string>("frame_name", frame_name);
}

bool RPG::System::GetInvertAnimations() const {
	return getter<bool>("invert_animations");
}

void RPG::System::SetInvertAnimations(bool invert_animations) {
	setter<bool>("invert_animations", invert_animations);
}

bool RPG::System::GetShowTitle() const {
	return getter<bool>("show_title");
}

void RPG::System::SetShowTitle(bool show_title) {
	setter<bool>("show_title", show_title);
}

