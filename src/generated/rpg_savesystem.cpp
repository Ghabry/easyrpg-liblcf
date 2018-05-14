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
#include "rpg_savesystem.h"


int32_t RPG::SaveSystem::GetScreen() const {
	return screen;
}

void RPG::SaveSystem::SetScreen(int32_t screen) {
	this->screen = screen;
}

int32_t RPG::SaveSystem::GetFrameCount() const {
	return frame_count;
}

void RPG::SaveSystem::SetFrameCount(int32_t frame_count) {
	this->frame_count = frame_count;
}

const std::string& RPG::SaveSystem::GetGraphicsName() const  {
	return graphics_name;
}

std::string& RPG::SaveSystem::GetGraphicsName() {
	return graphics_name;
}

void RPG::SaveSystem::SetGraphicsName(const std::string& graphics_name) {
	this->graphics_name = graphics_name;
}

int32_t RPG::SaveSystem::GetMessageStretch() const {
	return message_stretch;
}

void RPG::SaveSystem::SetMessageStretch(int32_t message_stretch) {
	this->message_stretch = message_stretch;
}

int32_t RPG::SaveSystem::GetFontId() const {
	return font_id;
}

void RPG::SaveSystem::SetFontId(int32_t font_id) {
	this->font_id = font_id;
}

int32_t RPG::SaveSystem::GetSwitchesSize() const {
	return switches_size;
}

void RPG::SaveSystem::SetSwitchesSize(int32_t switches_size) {
	this->switches_size = switches_size;
}

const std::vector<bool>& RPG::SaveSystem::GetSwitches() const  {
	return switches;
}

std::vector<bool>& RPG::SaveSystem::GetSwitches() {
	return switches;
}

int32_t RPG::SaveSystem::GetVariablesSize() const {
	return variables_size;
}

void RPG::SaveSystem::SetVariablesSize(int32_t variables_size) {
	this->variables_size = variables_size;
}

const std::vector<uint32_t>& RPG::SaveSystem::GetVariables() const  {
	return variables;
}

std::vector<uint32_t>& RPG::SaveSystem::GetVariables() {
	return variables;
}

int32_t RPG::SaveSystem::GetMessageTransparent() const {
	return message_transparent;
}

void RPG::SaveSystem::SetMessageTransparent(int32_t message_transparent) {
	this->message_transparent = message_transparent;
}

int32_t RPG::SaveSystem::GetMessagePosition() const {
	return message_position;
}

void RPG::SaveSystem::SetMessagePosition(int32_t message_position) {
	this->message_position = message_position;
}

int32_t RPG::SaveSystem::GetMessagePreventOverlap() const {
	return message_prevent_overlap;
}

void RPG::SaveSystem::SetMessagePreventOverlap(int32_t message_prevent_overlap) {
	this->message_prevent_overlap = message_prevent_overlap;
}

int32_t RPG::SaveSystem::GetMessageContinueEvents() const {
	return message_continue_events;
}

void RPG::SaveSystem::SetMessageContinueEvents(int32_t message_continue_events) {
	this->message_continue_events = message_continue_events;
}

const std::string& RPG::SaveSystem::GetFaceName() const  {
	return face_name;
}

std::string& RPG::SaveSystem::GetFaceName() {
	return face_name;
}

void RPG::SaveSystem::SetFaceName(const std::string& face_name) {
	this->face_name = face_name;
}

int32_t RPG::SaveSystem::GetFaceId() const {
	return face_id;
}

void RPG::SaveSystem::SetFaceId(int32_t face_id) {
	this->face_id = face_id;
}

bool RPG::SaveSystem::GetFaceRight() const {
	return face_right;
}

void RPG::SaveSystem::SetFaceRight(bool face_right) {
	this->face_right = face_right;
}

bool RPG::SaveSystem::GetFaceFlip() const {
	return face_flip;
}

void RPG::SaveSystem::SetFaceFlip(bool face_flip) {
	this->face_flip = face_flip;
}

bool RPG::SaveSystem::GetTransparent() const {
	return transparent;
}

void RPG::SaveSystem::SetTransparent(bool transparent) {
	this->transparent = transparent;
}

int32_t RPG::SaveSystem::GetUnknown3dMusicFadeout() const {
	return unknown_3d_music_fadeout;
}

void RPG::SaveSystem::SetUnknown3dMusicFadeout(int32_t unknown_3d_music_fadeout) {
	this->unknown_3d_music_fadeout = unknown_3d_music_fadeout;
}

const RPG::Music& RPG::SaveSystem::GetTitleMusic() const  {
	return title_music;
}

RPG::Music& RPG::SaveSystem::GetTitleMusic() {
	return title_music;
}

void RPG::SaveSystem::SetTitleMusic(const RPG::Music& title_music) {
	this->title_music = title_music;
}

const RPG::Music& RPG::SaveSystem::GetBattleMusic() const  {
	return battle_music;
}

RPG::Music& RPG::SaveSystem::GetBattleMusic() {
	return battle_music;
}

void RPG::SaveSystem::SetBattleMusic(const RPG::Music& battle_music) {
	this->battle_music = battle_music;
}

const RPG::Music& RPG::SaveSystem::GetBattleEndMusic() const  {
	return battle_end_music;
}

RPG::Music& RPG::SaveSystem::GetBattleEndMusic() {
	return battle_end_music;
}

void RPG::SaveSystem::SetBattleEndMusic(const RPG::Music& battle_end_music) {
	this->battle_end_music = battle_end_music;
}

const RPG::Music& RPG::SaveSystem::GetInnMusic() const  {
	return inn_music;
}

RPG::Music& RPG::SaveSystem::GetInnMusic() {
	return inn_music;
}

void RPG::SaveSystem::SetInnMusic(const RPG::Music& inn_music) {
	this->inn_music = inn_music;
}

const RPG::Music& RPG::SaveSystem::GetCurrentMusic() const  {
	return current_music;
}

RPG::Music& RPG::SaveSystem::GetCurrentMusic() {
	return current_music;
}

void RPG::SaveSystem::SetCurrentMusic(const RPG::Music& current_music) {
	this->current_music = current_music;
}

const RPG::Music& RPG::SaveSystem::GetBeforeVehicleMusic() const  {
	return before_vehicle_music;
}

RPG::Music& RPG::SaveSystem::GetBeforeVehicleMusic() {
	return before_vehicle_music;
}

void RPG::SaveSystem::SetBeforeVehicleMusic(const RPG::Music& before_vehicle_music) {
	this->before_vehicle_music = before_vehicle_music;
}

const RPG::Music& RPG::SaveSystem::GetBeforeBattleMusic() const  {
	return before_battle_music;
}

RPG::Music& RPG::SaveSystem::GetBeforeBattleMusic() {
	return before_battle_music;
}

void RPG::SaveSystem::SetBeforeBattleMusic(const RPG::Music& before_battle_music) {
	this->before_battle_music = before_battle_music;
}

const RPG::Music& RPG::SaveSystem::GetStoredMusic() const  {
	return stored_music;
}

RPG::Music& RPG::SaveSystem::GetStoredMusic() {
	return stored_music;
}

void RPG::SaveSystem::SetStoredMusic(const RPG::Music& stored_music) {
	this->stored_music = stored_music;
}

const RPG::Music& RPG::SaveSystem::GetBoatMusic() const  {
	return boat_music;
}

RPG::Music& RPG::SaveSystem::GetBoatMusic() {
	return boat_music;
}

void RPG::SaveSystem::SetBoatMusic(const RPG::Music& boat_music) {
	this->boat_music = boat_music;
}

const RPG::Music& RPG::SaveSystem::GetShipMusic() const  {
	return ship_music;
}

RPG::Music& RPG::SaveSystem::GetShipMusic() {
	return ship_music;
}

void RPG::SaveSystem::SetShipMusic(const RPG::Music& ship_music) {
	this->ship_music = ship_music;
}

const RPG::Music& RPG::SaveSystem::GetAirshipMusic() const  {
	return airship_music;
}

RPG::Music& RPG::SaveSystem::GetAirshipMusic() {
	return airship_music;
}

void RPG::SaveSystem::SetAirshipMusic(const RPG::Music& airship_music) {
	this->airship_music = airship_music;
}

const RPG::Music& RPG::SaveSystem::GetGameoverMusic() const  {
	return gameover_music;
}

RPG::Music& RPG::SaveSystem::GetGameoverMusic() {
	return gameover_music;
}

void RPG::SaveSystem::SetGameoverMusic(const RPG::Music& gameover_music) {
	this->gameover_music = gameover_music;
}

const RPG::Sound& RPG::SaveSystem::GetCursorSe() const  {
	return cursor_se;
}

RPG::Sound& RPG::SaveSystem::GetCursorSe() {
	return cursor_se;
}

void RPG::SaveSystem::SetCursorSe(const RPG::Sound& cursor_se) {
	this->cursor_se = cursor_se;
}

const RPG::Sound& RPG::SaveSystem::GetDecisionSe() const  {
	return decision_se;
}

RPG::Sound& RPG::SaveSystem::GetDecisionSe() {
	return decision_se;
}

void RPG::SaveSystem::SetDecisionSe(const RPG::Sound& decision_se) {
	this->decision_se = decision_se;
}

const RPG::Sound& RPG::SaveSystem::GetCancelSe() const  {
	return cancel_se;
}

RPG::Sound& RPG::SaveSystem::GetCancelSe() {
	return cancel_se;
}

void RPG::SaveSystem::SetCancelSe(const RPG::Sound& cancel_se) {
	this->cancel_se = cancel_se;
}

const RPG::Sound& RPG::SaveSystem::GetBuzzerSe() const  {
	return buzzer_se;
}

RPG::Sound& RPG::SaveSystem::GetBuzzerSe() {
	return buzzer_se;
}

void RPG::SaveSystem::SetBuzzerSe(const RPG::Sound& buzzer_se) {
	this->buzzer_se = buzzer_se;
}

const RPG::Sound& RPG::SaveSystem::GetBattleSe() const  {
	return battle_se;
}

RPG::Sound& RPG::SaveSystem::GetBattleSe() {
	return battle_se;
}

void RPG::SaveSystem::SetBattleSe(const RPG::Sound& battle_se) {
	this->battle_se = battle_se;
}

const RPG::Sound& RPG::SaveSystem::GetEscapeSe() const  {
	return escape_se;
}

RPG::Sound& RPG::SaveSystem::GetEscapeSe() {
	return escape_se;
}

void RPG::SaveSystem::SetEscapeSe(const RPG::Sound& escape_se) {
	this->escape_se = escape_se;
}

const RPG::Sound& RPG::SaveSystem::GetEnemyAttackSe() const  {
	return enemy_attack_se;
}

RPG::Sound& RPG::SaveSystem::GetEnemyAttackSe() {
	return enemy_attack_se;
}

void RPG::SaveSystem::SetEnemyAttackSe(const RPG::Sound& enemy_attack_se) {
	this->enemy_attack_se = enemy_attack_se;
}

const RPG::Sound& RPG::SaveSystem::GetEnemyDamagedSe() const  {
	return enemy_damaged_se;
}

RPG::Sound& RPG::SaveSystem::GetEnemyDamagedSe() {
	return enemy_damaged_se;
}

void RPG::SaveSystem::SetEnemyDamagedSe(const RPG::Sound& enemy_damaged_se) {
	this->enemy_damaged_se = enemy_damaged_se;
}

const RPG::Sound& RPG::SaveSystem::GetActorDamagedSe() const  {
	return actor_damaged_se;
}

RPG::Sound& RPG::SaveSystem::GetActorDamagedSe() {
	return actor_damaged_se;
}

void RPG::SaveSystem::SetActorDamagedSe(const RPG::Sound& actor_damaged_se) {
	this->actor_damaged_se = actor_damaged_se;
}

const RPG::Sound& RPG::SaveSystem::GetDodgeSe() const  {
	return dodge_se;
}

RPG::Sound& RPG::SaveSystem::GetDodgeSe() {
	return dodge_se;
}

void RPG::SaveSystem::SetDodgeSe(const RPG::Sound& dodge_se) {
	this->dodge_se = dodge_se;
}

const RPG::Sound& RPG::SaveSystem::GetEnemyDeathSe() const  {
	return enemy_death_se;
}

RPG::Sound& RPG::SaveSystem::GetEnemyDeathSe() {
	return enemy_death_se;
}

void RPG::SaveSystem::SetEnemyDeathSe(const RPG::Sound& enemy_death_se) {
	this->enemy_death_se = enemy_death_se;
}

const RPG::Sound& RPG::SaveSystem::GetItemSe() const  {
	return item_se;
}

RPG::Sound& RPG::SaveSystem::GetItemSe() {
	return item_se;
}

void RPG::SaveSystem::SetItemSe(const RPG::Sound& item_se) {
	this->item_se = item_se;
}

uint8_t RPG::SaveSystem::GetTransitionOut() const {
	return transition_out;
}

void RPG::SaveSystem::SetTransitionOut(uint8_t transition_out) {
	this->transition_out = transition_out;
}

uint8_t RPG::SaveSystem::GetTransitionIn() const {
	return transition_in;
}

void RPG::SaveSystem::SetTransitionIn(uint8_t transition_in) {
	this->transition_in = transition_in;
}

uint8_t RPG::SaveSystem::GetBattleStartFadeout() const {
	return battle_start_fadeout;
}

void RPG::SaveSystem::SetBattleStartFadeout(uint8_t battle_start_fadeout) {
	this->battle_start_fadeout = battle_start_fadeout;
}

uint8_t RPG::SaveSystem::GetBattleStartFadein() const {
	return battle_start_fadein;
}

void RPG::SaveSystem::SetBattleStartFadein(uint8_t battle_start_fadein) {
	this->battle_start_fadein = battle_start_fadein;
}

uint8_t RPG::SaveSystem::GetBattleEndFadeout() const {
	return battle_end_fadeout;
}

void RPG::SaveSystem::SetBattleEndFadeout(uint8_t battle_end_fadeout) {
	this->battle_end_fadeout = battle_end_fadeout;
}

uint8_t RPG::SaveSystem::GetBattleEndFadein() const {
	return battle_end_fadein;
}

void RPG::SaveSystem::SetBattleEndFadein(uint8_t battle_end_fadein) {
	this->battle_end_fadein = battle_end_fadein;
}

bool RPG::SaveSystem::GetTeleportAllowed() const {
	return teleport_allowed;
}

void RPG::SaveSystem::SetTeleportAllowed(bool teleport_allowed) {
	this->teleport_allowed = teleport_allowed;
}

bool RPG::SaveSystem::GetEscapeAllowed() const {
	return escape_allowed;
}

void RPG::SaveSystem::SetEscapeAllowed(bool escape_allowed) {
	this->escape_allowed = escape_allowed;
}

bool RPG::SaveSystem::GetSaveAllowed() const {
	return save_allowed;
}

void RPG::SaveSystem::SetSaveAllowed(bool save_allowed) {
	this->save_allowed = save_allowed;
}

bool RPG::SaveSystem::GetMenuAllowed() const {
	return menu_allowed;
}

void RPG::SaveSystem::SetMenuAllowed(bool menu_allowed) {
	this->menu_allowed = menu_allowed;
}

const std::string& RPG::SaveSystem::GetBackground() const  {
	return background;
}

std::string& RPG::SaveSystem::GetBackground() {
	return background;
}

void RPG::SaveSystem::SetBackground(const std::string& background) {
	this->background = background;
}

int32_t RPG::SaveSystem::GetSaveCount() const {
	return save_count;
}

void RPG::SaveSystem::SetSaveCount(int32_t save_count) {
	this->save_count = save_count;
}

int32_t RPG::SaveSystem::GetSaveSlot() const {
	return save_slot;
}

void RPG::SaveSystem::SetSaveSlot(int32_t save_slot) {
	this->save_slot = save_slot;
}

const int32_t& RPG::SaveSystem::GetAtbMode() const  {
	return atb_mode;
}

int32_t& RPG::SaveSystem::GetAtbMode() {
	return atb_mode;
}

void RPG::SaveSystem::SetAtbMode(const int32_t& atb_mode) {
	this->atb_mode = atb_mode;
}

