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
#include "rpg_savepartylocation.h"


bool RPG::SavePartyLocation::GetActive() const {
	return getter<bool>("active");
}

void RPG::SavePartyLocation::SetActive(bool active) {
	setter<bool>("active", active);
}

int32_t RPG::SavePartyLocation::GetMapId() const {
	return getter<int32_t>("map_id");
}

void RPG::SavePartyLocation::SetMapId(int32_t map_id) {
	setter<int32_t>("map_id", map_id);
}

int32_t RPG::SavePartyLocation::GetPositionX() const {
	return getter<int32_t>("position_x");
}

void RPG::SavePartyLocation::SetPositionX(int32_t position_x) {
	setter<int32_t>("position_x", position_x);
}

int32_t RPG::SavePartyLocation::GetPositionY() const {
	return getter<int32_t>("position_y");
}

void RPG::SavePartyLocation::SetPositionY(int32_t position_y) {
	setter<int32_t>("position_y", position_y);
}

int32_t RPG::SavePartyLocation::GetDirection() const {
	return getter<int32_t>("direction");
}

void RPG::SavePartyLocation::SetDirection(int32_t direction) {
	setter<int32_t>("direction", direction);
}

int32_t RPG::SavePartyLocation::GetSpriteDirection() const {
	return getter<int32_t>("sprite_direction");
}

void RPG::SavePartyLocation::SetSpriteDirection(int32_t sprite_direction) {
	setter<int32_t>("sprite_direction", sprite_direction);
}

int32_t RPG::SavePartyLocation::GetAnimFrame() const {
	return getter<int32_t>("anim_frame");
}

void RPG::SavePartyLocation::SetAnimFrame(int32_t anim_frame) {
	setter<int32_t>("anim_frame", anim_frame);
}

int32_t RPG::SavePartyLocation::GetTransparency() const {
	return getter<int32_t>("transparency");
}

void RPG::SavePartyLocation::SetTransparency(int32_t transparency) {
	setter<int32_t>("transparency", transparency);
}

int32_t RPG::SavePartyLocation::GetRemainingStep() const {
	return getter<int32_t>("remaining_step");
}

void RPG::SavePartyLocation::SetRemainingStep(int32_t remaining_step) {
	setter<int32_t>("remaining_step", remaining_step);
}

int32_t RPG::SavePartyLocation::GetMoveFrequency() const {
	return getter<int32_t>("move_frequency");
}

void RPG::SavePartyLocation::SetMoveFrequency(int32_t move_frequency) {
	setter<int32_t>("move_frequency", move_frequency);
}

int32_t RPG::SavePartyLocation::GetLayer() const {
	return getter<int32_t>("layer");
}

void RPG::SavePartyLocation::SetLayer(int32_t layer) {
	setter<int32_t>("layer", layer);
}

bool RPG::SavePartyLocation::GetOverlapForbidden() const {
	return getter<bool>("overlap_forbidden");
}

void RPG::SavePartyLocation::SetOverlapForbidden(bool overlap_forbidden) {
	setter<bool>("overlap_forbidden", overlap_forbidden);
}

const int32_t& RPG::SavePartyLocation::GetAnimationType() const {
	return getter<const int32_t&>("animation_type");
}

int32_t& RPG::SavePartyLocation::GetAnimationType() {
	return getter<int32_t&>("animation_type");
}

void RPG::SavePartyLocation::SetAnimationType(const int32_t& animation_type) {
	setter<int32_t>("animation_type", animation_type);
}

bool RPG::SavePartyLocation::GetLockFacing() const {
	return getter<bool>("lock_facing");
}

void RPG::SavePartyLocation::SetLockFacing(bool lock_facing) {
	setter<bool>("lock_facing", lock_facing);
}

int32_t RPG::SavePartyLocation::GetMoveSpeed() const {
	return getter<int32_t>("move_speed");
}

void RPG::SavePartyLocation::SetMoveSpeed(int32_t move_speed) {
	setter<int32_t>("move_speed", move_speed);
}

const RPG::MoveRoute& RPG::SavePartyLocation::GetMoveRoute() const {
	return getter<const RPG::MoveRoute&>("move_route");
}

RPG::MoveRoute& RPG::SavePartyLocation::GetMoveRoute() {
	return getter<RPG::MoveRoute&>("move_route");
}

void RPG::SavePartyLocation::SetMoveRoute(const RPG::MoveRoute& move_route) {
	setter<RPG::MoveRoute>("move_route", move_route);
}

bool RPG::SavePartyLocation::GetMoveRouteOverwrite() const {
	return getter<bool>("move_route_overwrite");
}

void RPG::SavePartyLocation::SetMoveRouteOverwrite(bool move_route_overwrite) {
	setter<bool>("move_route_overwrite", move_route_overwrite);
}

int32_t RPG::SavePartyLocation::GetMoveRouteIndex() const {
	return getter<int32_t>("move_route_index");
}

void RPG::SavePartyLocation::SetMoveRouteIndex(int32_t move_route_index) {
	setter<int32_t>("move_route_index", move_route_index);
}

bool RPG::SavePartyLocation::GetMoveRouteRepeated() const {
	return getter<bool>("move_route_repeated");
}

void RPG::SavePartyLocation::SetMoveRouteRepeated(bool move_route_repeated) {
	setter<bool>("move_route_repeated", move_route_repeated);
}

bool RPG::SavePartyLocation::GetSpriteTransparent() const {
	return getter<bool>("sprite_transparent");
}

void RPG::SavePartyLocation::SetSpriteTransparent(bool sprite_transparent) {
	setter<bool>("sprite_transparent", sprite_transparent);
}

int32_t RPG::SavePartyLocation::GetUnknown2fOverlap() const {
	return getter<int32_t>("unknown_2f_overlap");
}

void RPG::SavePartyLocation::SetUnknown2fOverlap(int32_t unknown_2f_overlap) {
	setter<int32_t>("unknown_2f_overlap", unknown_2f_overlap);
}

int32_t RPG::SavePartyLocation::GetAnimPaused() const {
	return getter<int32_t>("anim_paused");
}

void RPG::SavePartyLocation::SetAnimPaused(int32_t anim_paused) {
	setter<int32_t>("anim_paused", anim_paused);
}

bool RPG::SavePartyLocation::GetThrough() const {
	return getter<bool>("through");
}

void RPG::SavePartyLocation::SetThrough(bool through) {
	setter<bool>("through", through);
}

int32_t RPG::SavePartyLocation::GetStopCount() const {
	return getter<int32_t>("stop_count");
}

void RPG::SavePartyLocation::SetStopCount(int32_t stop_count) {
	setter<int32_t>("stop_count", stop_count);
}

int32_t RPG::SavePartyLocation::GetAnimCount() const {
	return getter<int32_t>("anim_count");
}

void RPG::SavePartyLocation::SetAnimCount(int32_t anim_count) {
	setter<int32_t>("anim_count", anim_count);
}

int32_t RPG::SavePartyLocation::GetMaxStopCount() const {
	return getter<int32_t>("max_stop_count");
}

void RPG::SavePartyLocation::SetMaxStopCount(int32_t max_stop_count) {
	setter<int32_t>("max_stop_count", max_stop_count);
}

bool RPG::SavePartyLocation::GetJumping() const {
	return getter<bool>("jumping");
}

void RPG::SavePartyLocation::SetJumping(bool jumping) {
	setter<bool>("jumping", jumping);
}

int32_t RPG::SavePartyLocation::GetBeginJumpX() const {
	return getter<int32_t>("begin_jump_x");
}

void RPG::SavePartyLocation::SetBeginJumpX(int32_t begin_jump_x) {
	setter<int32_t>("begin_jump_x", begin_jump_x);
}

int32_t RPG::SavePartyLocation::GetBeginJumpY() const {
	return getter<int32_t>("begin_jump_y");
}

void RPG::SavePartyLocation::SetBeginJumpY(int32_t begin_jump_y) {
	setter<int32_t>("begin_jump_y", begin_jump_y);
}

int32_t RPG::SavePartyLocation::GetUnknown47Pause() const {
	return getter<int32_t>("unknown_47_pause");
}

void RPG::SavePartyLocation::SetUnknown47Pause(int32_t unknown_47_pause) {
	setter<int32_t>("unknown_47_pause", unknown_47_pause);
}

bool RPG::SavePartyLocation::GetFlying() const {
	return getter<bool>("flying");
}

void RPG::SavePartyLocation::SetFlying(bool flying) {
	setter<bool>("flying", flying);
}

const std::string& RPG::SavePartyLocation::GetSpriteName() const {
	return getter<const std::string&>("sprite_name");
}

std::string& RPG::SavePartyLocation::GetSpriteName() {
	return getter<std::string&>("sprite_name");
}

void RPG::SavePartyLocation::SetSpriteName(const std::string& sprite_name) {
	setter<std::string>("sprite_name", sprite_name);
}

int32_t RPG::SavePartyLocation::GetSpriteId() const {
	return getter<int32_t>("sprite_id");
}

void RPG::SavePartyLocation::SetSpriteId(int32_t sprite_id) {
	setter<int32_t>("sprite_id", sprite_id);
}

int32_t RPG::SavePartyLocation::GetUnknown4bSpriteMove() const {
	return getter<int32_t>("unknown_4b_sprite_move");
}

void RPG::SavePartyLocation::SetUnknown4bSpriteMove(int32_t unknown_4b_sprite_move) {
	setter<int32_t>("unknown_4b_sprite_move", unknown_4b_sprite_move);
}

int32_t RPG::SavePartyLocation::GetFlashRed() const {
	return getter<int32_t>("flash_red");
}

void RPG::SavePartyLocation::SetFlashRed(int32_t flash_red) {
	setter<int32_t>("flash_red", flash_red);
}

int32_t RPG::SavePartyLocation::GetFlashGreen() const {
	return getter<int32_t>("flash_green");
}

void RPG::SavePartyLocation::SetFlashGreen(int32_t flash_green) {
	setter<int32_t>("flash_green", flash_green);
}

int32_t RPG::SavePartyLocation::GetFlashBlue() const {
	return getter<int32_t>("flash_blue");
}

void RPG::SavePartyLocation::SetFlashBlue(int32_t flash_blue) {
	setter<int32_t>("flash_blue", flash_blue);
}

double RPG::SavePartyLocation::GetFlashCurrentLevel() const {
	return getter<double>("flash_current_level");
}

void RPG::SavePartyLocation::SetFlashCurrentLevel(double flash_current_level) {
	setter<double>("flash_current_level", flash_current_level);
}

int32_t RPG::SavePartyLocation::GetFlashTimeLeft() const {
	return getter<int32_t>("flash_time_left");
}

void RPG::SavePartyLocation::SetFlashTimeLeft(int32_t flash_time_left) {
	setter<int32_t>("flash_time_left", flash_time_left);
}

bool RPG::SavePartyLocation::GetBoarding() const {
	return getter<bool>("boarding");
}

void RPG::SavePartyLocation::SetBoarding(bool boarding) {
	setter<bool>("boarding", boarding);
}

bool RPG::SavePartyLocation::GetAboard() const {
	return getter<bool>("aboard");
}

void RPG::SavePartyLocation::SetAboard(bool aboard) {
	setter<bool>("aboard", aboard);
}

const int32_t& RPG::SavePartyLocation::GetVehicle() const {
	return getter<const int32_t&>("vehicle");
}

int32_t& RPG::SavePartyLocation::GetVehicle() {
	return getter<int32_t&>("vehicle");
}

void RPG::SavePartyLocation::SetVehicle(const int32_t& vehicle) {
	setter<int32_t>("vehicle", vehicle);
}

bool RPG::SavePartyLocation::GetUnboarding() const {
	return getter<bool>("unboarding");
}

void RPG::SavePartyLocation::SetUnboarding(bool unboarding) {
	setter<bool>("unboarding", unboarding);
}

int32_t RPG::SavePartyLocation::GetPreboardMoveSpeed() const {
	return getter<int32_t>("preboard_move_speed");
}

void RPG::SavePartyLocation::SetPreboardMoveSpeed(int32_t preboard_move_speed) {
	setter<int32_t>("preboard_move_speed", preboard_move_speed);
}

int32_t RPG::SavePartyLocation::GetUnknown6cMenuCalling() const {
	return getter<int32_t>("unknown_6c_menu_calling");
}

void RPG::SavePartyLocation::SetUnknown6cMenuCalling(int32_t unknown_6c_menu_calling) {
	setter<int32_t>("unknown_6c_menu_calling", unknown_6c_menu_calling);
}

int32_t RPG::SavePartyLocation::GetPanState() const {
	return getter<int32_t>("pan_state");
}

void RPG::SavePartyLocation::SetPanState(int32_t pan_state) {
	setter<int32_t>("pan_state", pan_state);
}

int32_t RPG::SavePartyLocation::GetPanCurrentX() const {
	return getter<int32_t>("pan_current_x");
}

void RPG::SavePartyLocation::SetPanCurrentX(int32_t pan_current_x) {
	setter<int32_t>("pan_current_x", pan_current_x);
}

int32_t RPG::SavePartyLocation::GetPanCurrentY() const {
	return getter<int32_t>("pan_current_y");
}

void RPG::SavePartyLocation::SetPanCurrentY(int32_t pan_current_y) {
	setter<int32_t>("pan_current_y", pan_current_y);
}

int32_t RPG::SavePartyLocation::GetPanFinishX() const {
	return getter<int32_t>("pan_finish_x");
}

void RPG::SavePartyLocation::SetPanFinishX(int32_t pan_finish_x) {
	setter<int32_t>("pan_finish_x", pan_finish_x);
}

int32_t RPG::SavePartyLocation::GetPanFinishY() const {
	return getter<int32_t>("pan_finish_y");
}

void RPG::SavePartyLocation::SetPanFinishY(int32_t pan_finish_y) {
	setter<int32_t>("pan_finish_y", pan_finish_y);
}

int32_t RPG::SavePartyLocation::GetPanSpeed() const {
	return getter<int32_t>("pan_speed");
}

void RPG::SavePartyLocation::SetPanSpeed(int32_t pan_speed) {
	setter<int32_t>("pan_speed", pan_speed);
}

int32_t RPG::SavePartyLocation::GetEncounterSteps() const {
	return getter<int32_t>("encounter_steps");
}

void RPG::SavePartyLocation::SetEncounterSteps(int32_t encounter_steps) {
	setter<int32_t>("encounter_steps", encounter_steps);
}

bool RPG::SavePartyLocation::GetUnknown7dEncounterCalling() const {
	return getter<bool>("unknown_7d_encounter_calling");
}

void RPG::SavePartyLocation::SetUnknown7dEncounterCalling(bool unknown_7d_encounter_calling) {
	setter<bool>("unknown_7d_encounter_calling", unknown_7d_encounter_calling);
}

int32_t RPG::SavePartyLocation::GetMapSaveCount() const {
	return getter<int32_t>("map_save_count");
}

void RPG::SavePartyLocation::SetMapSaveCount(int32_t map_save_count) {
	setter<int32_t>("map_save_count", map_save_count);
}

int32_t RPG::SavePartyLocation::GetDatabaseSaveCount() const {
	return getter<int32_t>("database_save_count");
}

void RPG::SavePartyLocation::SetDatabaseSaveCount(int32_t database_save_count) {
	setter<int32_t>("database_save_count", database_save_count);
}

