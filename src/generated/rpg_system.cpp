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
	return ldb_id;
}

void RPG::System::SetLdbId(int32_t ldb_id) {
	this->ldb_id = ldb_id;
}

const std::string& RPG::System::GetBoatName() const  {
	return boat_name;
}

std::string& RPG::System::GetBoatName() {
	return boat_name;
}

void RPG::System::SetBoatName(const std::string& boat_name) {
	this->boat_name = boat_name;
}

const std::string& RPG::System::GetShipName() const  {
	return ship_name;
}

std::string& RPG::System::GetShipName() {
	return ship_name;
}

void RPG::System::SetShipName(const std::string& ship_name) {
	this->ship_name = ship_name;
}

const std::string& RPG::System::GetAirshipName() const  {
	return airship_name;
}

std::string& RPG::System::GetAirshipName() {
	return airship_name;
}

void RPG::System::SetAirshipName(const std::string& airship_name) {
	this->airship_name = airship_name;
}

int32_t RPG::System::GetBoatIndex() const {
	return boat_index;
}

void RPG::System::SetBoatIndex(int32_t boat_index) {
	this->boat_index = boat_index;
}

int32_t RPG::System::GetShipIndex() const {
	return ship_index;
}

void RPG::System::SetShipIndex(int32_t ship_index) {
	this->ship_index = ship_index;
}

int32_t RPG::System::GetAirshipIndex() const {
	return airship_index;
}

void RPG::System::SetAirshipIndex(int32_t airship_index) {
	this->airship_index = airship_index;
}

const std::string& RPG::System::GetTitleName() const  {
	return title_name;
}

std::string& RPG::System::GetTitleName() {
	return title_name;
}

void RPG::System::SetTitleName(const std::string& title_name) {
	this->title_name = title_name;
}

const std::string& RPG::System::GetGameoverName() const  {
	return gameover_name;
}

std::string& RPG::System::GetGameoverName() {
	return gameover_name;
}

void RPG::System::SetGameoverName(const std::string& gameover_name) {
	this->gameover_name = gameover_name;
}

const std::string& RPG::System::GetSystemName() const  {
	return system_name;
}

std::string& RPG::System::GetSystemName() {
	return system_name;
}

void RPG::System::SetSystemName(const std::string& system_name) {
	this->system_name = system_name;
}

const std::string& RPG::System::GetSystem2Name() const  {
	return system2_name;
}

std::string& RPG::System::GetSystem2Name() {
	return system2_name;
}

void RPG::System::SetSystem2Name(const std::string& system2_name) {
	this->system2_name = system2_name;
}


const std::vector<int16_t>& RPG::System::GetParty() const  {
	return party;
}

std::vector<int16_t>& RPG::System::GetParty() {
	return party;
}


const std::vector<int16_t>& RPG::System::GetMenuCommands() const  {
	return menu_commands;
}

std::vector<int16_t>& RPG::System::GetMenuCommands() {
	return menu_commands;
}

const RPG::Music& RPG::System::GetTitleMusic() const  {
	return title_music;
}

RPG::Music& RPG::System::GetTitleMusic() {
	return title_music;
}

void RPG::System::SetTitleMusic(const RPG::Music& title_music) {
	this->title_music = title_music;
}

const RPG::Music& RPG::System::GetBattleMusic() const  {
	return battle_music;
}

RPG::Music& RPG::System::GetBattleMusic() {
	return battle_music;
}

void RPG::System::SetBattleMusic(const RPG::Music& battle_music) {
	this->battle_music = battle_music;
}

const RPG::Music& RPG::System::GetBattleEndMusic() const  {
	return battle_end_music;
}

RPG::Music& RPG::System::GetBattleEndMusic() {
	return battle_end_music;
}

void RPG::System::SetBattleEndMusic(const RPG::Music& battle_end_music) {
	this->battle_end_music = battle_end_music;
}

const RPG::Music& RPG::System::GetInnMusic() const  {
	return inn_music;
}

RPG::Music& RPG::System::GetInnMusic() {
	return inn_music;
}

void RPG::System::SetInnMusic(const RPG::Music& inn_music) {
	this->inn_music = inn_music;
}

const RPG::Music& RPG::System::GetBoatMusic() const  {
	return boat_music;
}

RPG::Music& RPG::System::GetBoatMusic() {
	return boat_music;
}

void RPG::System::SetBoatMusic(const RPG::Music& boat_music) {
	this->boat_music = boat_music;
}

const RPG::Music& RPG::System::GetShipMusic() const  {
	return ship_music;
}

RPG::Music& RPG::System::GetShipMusic() {
	return ship_music;
}

void RPG::System::SetShipMusic(const RPG::Music& ship_music) {
	this->ship_music = ship_music;
}

const RPG::Music& RPG::System::GetAirshipMusic() const  {
	return airship_music;
}

RPG::Music& RPG::System::GetAirshipMusic() {
	return airship_music;
}

void RPG::System::SetAirshipMusic(const RPG::Music& airship_music) {
	this->airship_music = airship_music;
}

const RPG::Music& RPG::System::GetGameoverMusic() const  {
	return gameover_music;
}

RPG::Music& RPG::System::GetGameoverMusic() {
	return gameover_music;
}

void RPG::System::SetGameoverMusic(const RPG::Music& gameover_music) {
	this->gameover_music = gameover_music;
}

const RPG::Sound& RPG::System::GetCursorSe() const  {
	return cursor_se;
}

RPG::Sound& RPG::System::GetCursorSe() {
	return cursor_se;
}

void RPG::System::SetCursorSe(const RPG::Sound& cursor_se) {
	this->cursor_se = cursor_se;
}

const RPG::Sound& RPG::System::GetDecisionSe() const  {
	return decision_se;
}

RPG::Sound& RPG::System::GetDecisionSe() {
	return decision_se;
}

void RPG::System::SetDecisionSe(const RPG::Sound& decision_se) {
	this->decision_se = decision_se;
}

const RPG::Sound& RPG::System::GetCancelSe() const  {
	return cancel_se;
}

RPG::Sound& RPG::System::GetCancelSe() {
	return cancel_se;
}

void RPG::System::SetCancelSe(const RPG::Sound& cancel_se) {
	this->cancel_se = cancel_se;
}

const RPG::Sound& RPG::System::GetBuzzerSe() const  {
	return buzzer_se;
}

RPG::Sound& RPG::System::GetBuzzerSe() {
	return buzzer_se;
}

void RPG::System::SetBuzzerSe(const RPG::Sound& buzzer_se) {
	this->buzzer_se = buzzer_se;
}

const RPG::Sound& RPG::System::GetBattleSe() const  {
	return battle_se;
}

RPG::Sound& RPG::System::GetBattleSe() {
	return battle_se;
}

void RPG::System::SetBattleSe(const RPG::Sound& battle_se) {
	this->battle_se = battle_se;
}

const RPG::Sound& RPG::System::GetEscapeSe() const  {
	return escape_se;
}

RPG::Sound& RPG::System::GetEscapeSe() {
	return escape_se;
}

void RPG::System::SetEscapeSe(const RPG::Sound& escape_se) {
	this->escape_se = escape_se;
}

const RPG::Sound& RPG::System::GetEnemyAttackSe() const  {
	return enemy_attack_se;
}

RPG::Sound& RPG::System::GetEnemyAttackSe() {
	return enemy_attack_se;
}

void RPG::System::SetEnemyAttackSe(const RPG::Sound& enemy_attack_se) {
	this->enemy_attack_se = enemy_attack_se;
}

const RPG::Sound& RPG::System::GetEnemyDamagedSe() const  {
	return enemy_damaged_se;
}

RPG::Sound& RPG::System::GetEnemyDamagedSe() {
	return enemy_damaged_se;
}

void RPG::System::SetEnemyDamagedSe(const RPG::Sound& enemy_damaged_se) {
	this->enemy_damaged_se = enemy_damaged_se;
}

const RPG::Sound& RPG::System::GetActorDamagedSe() const  {
	return actor_damaged_se;
}

RPG::Sound& RPG::System::GetActorDamagedSe() {
	return actor_damaged_se;
}

void RPG::System::SetActorDamagedSe(const RPG::Sound& actor_damaged_se) {
	this->actor_damaged_se = actor_damaged_se;
}

const RPG::Sound& RPG::System::GetDodgeSe() const  {
	return dodge_se;
}

RPG::Sound& RPG::System::GetDodgeSe() {
	return dodge_se;
}

void RPG::System::SetDodgeSe(const RPG::Sound& dodge_se) {
	this->dodge_se = dodge_se;
}

const RPG::Sound& RPG::System::GetEnemyDeathSe() const  {
	return enemy_death_se;
}

RPG::Sound& RPG::System::GetEnemyDeathSe() {
	return enemy_death_se;
}

void RPG::System::SetEnemyDeathSe(const RPG::Sound& enemy_death_se) {
	this->enemy_death_se = enemy_death_se;
}

const RPG::Sound& RPG::System::GetItemSe() const  {
	return item_se;
}

RPG::Sound& RPG::System::GetItemSe() {
	return item_se;
}

void RPG::System::SetItemSe(const RPG::Sound& item_se) {
	this->item_se = item_se;
}

const int32_t& RPG::System::GetTransitionOut() const  {
	return transition_out;
}

int32_t& RPG::System::GetTransitionOut() {
	return transition_out;
}

void RPG::System::SetTransitionOut(const int32_t& transition_out) {
	this->transition_out = transition_out;
}

const int32_t& RPG::System::GetTransitionIn() const  {
	return transition_in;
}

int32_t& RPG::System::GetTransitionIn() {
	return transition_in;
}

void RPG::System::SetTransitionIn(const int32_t& transition_in) {
	this->transition_in = transition_in;
}

const int32_t& RPG::System::GetBattleStartFadeout() const  {
	return battle_start_fadeout;
}

int32_t& RPG::System::GetBattleStartFadeout() {
	return battle_start_fadeout;
}

void RPG::System::SetBattleStartFadeout(const int32_t& battle_start_fadeout) {
	this->battle_start_fadeout = battle_start_fadeout;
}

const int32_t& RPG::System::GetBattleStartFadein() const  {
	return battle_start_fadein;
}

int32_t& RPG::System::GetBattleStartFadein() {
	return battle_start_fadein;
}

void RPG::System::SetBattleStartFadein(const int32_t& battle_start_fadein) {
	this->battle_start_fadein = battle_start_fadein;
}

const int32_t& RPG::System::GetBattleEndFadeout() const  {
	return battle_end_fadeout;
}

int32_t& RPG::System::GetBattleEndFadeout() {
	return battle_end_fadeout;
}

void RPG::System::SetBattleEndFadeout(const int32_t& battle_end_fadeout) {
	this->battle_end_fadeout = battle_end_fadeout;
}

const int32_t& RPG::System::GetBattleEndFadein() const  {
	return battle_end_fadein;
}

int32_t& RPG::System::GetBattleEndFadein() {
	return battle_end_fadein;
}

void RPG::System::SetBattleEndFadein(const int32_t& battle_end_fadein) {
	this->battle_end_fadein = battle_end_fadein;
}

const int32_t& RPG::System::GetMessageStretch() const  {
	return message_stretch;
}

int32_t& RPG::System::GetMessageStretch() {
	return message_stretch;
}

void RPG::System::SetMessageStretch(const int32_t& message_stretch) {
	this->message_stretch = message_stretch;
}

const int32_t& RPG::System::GetFontId() const  {
	return font_id;
}

int32_t& RPG::System::GetFontId() {
	return font_id;
}

void RPG::System::SetFontId(const int32_t& font_id) {
	this->font_id = font_id;
}

int32_t RPG::System::GetSelectedCondition() const {
	return selected_condition;
}

void RPG::System::SetSelectedCondition(int32_t selected_condition) {
	this->selected_condition = selected_condition;
}

const int32_t& RPG::System::GetSelectedHero() const  {
	return selected_hero;
}

int32_t& RPG::System::GetSelectedHero() {
	return selected_hero;
}

void RPG::System::SetSelectedHero(const int32_t& selected_hero) {
	this->selected_hero = selected_hero;
}

const std::string& RPG::System::GetBattletestBackground() const  {
	return battletest_background;
}

std::string& RPG::System::GetBattletestBackground() {
	return battletest_background;
}

void RPG::System::SetBattletestBackground(const std::string& battletest_background) {
	this->battletest_background = battletest_background;
}

const std::vector<RPG::TestBattler>& RPG::System::GetBattletestData() const  {
	return battletest_data;
}

std::vector<RPG::TestBattler>& RPG::System::GetBattletestData() {
	return battletest_data;
}

int32_t RPG::System::GetSaveCount() const {
	return save_count;
}

void RPG::System::SetSaveCount(int32_t save_count) {
	this->save_count = save_count;
}

const int32_t& RPG::System::GetBattletestTerrain() const  {
	return battletest_terrain;
}

int32_t& RPG::System::GetBattletestTerrain() {
	return battletest_terrain;
}

void RPG::System::SetBattletestTerrain(const int32_t& battletest_terrain) {
	this->battletest_terrain = battletest_terrain;
}

const int32_t& RPG::System::GetBattletestFormation() const  {
	return battletest_formation;
}

int32_t& RPG::System::GetBattletestFormation() {
	return battletest_formation;
}

void RPG::System::SetBattletestFormation(const int32_t& battletest_formation) {
	this->battletest_formation = battletest_formation;
}

const int32_t& RPG::System::GetBattletestCondition() const  {
	return battletest_condition;
}

int32_t& RPG::System::GetBattletestCondition() {
	return battletest_condition;
}

void RPG::System::SetBattletestCondition(const int32_t& battletest_condition) {
	this->battletest_condition = battletest_condition;
}

int32_t RPG::System::GetUnknown61() const {
	return unknown_61;
}

void RPG::System::SetUnknown61(int32_t unknown_61) {
	this->unknown_61 = unknown_61;
}

bool RPG::System::GetShowFrame() const {
	return show_frame;
}

void RPG::System::SetShowFrame(bool show_frame) {
	this->show_frame = show_frame;
}

const std::string& RPG::System::GetFrameName() const  {
	return frame_name;
}

std::string& RPG::System::GetFrameName() {
	return frame_name;
}

void RPG::System::SetFrameName(const std::string& frame_name) {
	this->frame_name = frame_name;
}

bool RPG::System::GetInvertAnimations() const {
	return invert_animations;
}

void RPG::System::SetInvertAnimations(bool invert_animations) {
	this->invert_animations = invert_animations;
}

bool RPG::System::GetShowTitle() const {
	return show_title;
}

void RPG::System::SetShowTitle(bool show_title) {
	this->show_title = show_title;
}

