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
	return active;
}

void RPG::SavePartyLocation::SetActive(bool active) {
	this->active = active;
}

int32_t RPG::SavePartyLocation::GetMapId() const {
	return map_id;
}

void RPG::SavePartyLocation::SetMapId(int32_t map_id) {
	this->map_id = map_id;
}

int32_t RPG::SavePartyLocation::GetPositionX() const {
	return position_x;
}

void RPG::SavePartyLocation::SetPositionX(int32_t position_x) {
	this->position_x = position_x;
}

int32_t RPG::SavePartyLocation::GetPositionY() const {
	return position_y;
}

void RPG::SavePartyLocation::SetPositionY(int32_t position_y) {
	this->position_y = position_y;
}

int32_t RPG::SavePartyLocation::GetDirection() const {
	return direction;
}

void RPG::SavePartyLocation::SetDirection(int32_t direction) {
	this->direction = direction;
}

int32_t RPG::SavePartyLocation::GetSpriteDirection() const {
	return sprite_direction;
}

void RPG::SavePartyLocation::SetSpriteDirection(int32_t sprite_direction) {
	this->sprite_direction = sprite_direction;
}

int32_t RPG::SavePartyLocation::GetAnimFrame() const {
	return anim_frame;
}

void RPG::SavePartyLocation::SetAnimFrame(int32_t anim_frame) {
	this->anim_frame = anim_frame;
}

int32_t RPG::SavePartyLocation::GetTransparency() const {
	return transparency;
}

void RPG::SavePartyLocation::SetTransparency(int32_t transparency) {
	this->transparency = transparency;
}

int32_t RPG::SavePartyLocation::GetRemainingStep() const {
	return remaining_step;
}

void RPG::SavePartyLocation::SetRemainingStep(int32_t remaining_step) {
	this->remaining_step = remaining_step;
}

int32_t RPG::SavePartyLocation::GetMoveFrequency() const {
	return move_frequency;
}

void RPG::SavePartyLocation::SetMoveFrequency(int32_t move_frequency) {
	this->move_frequency = move_frequency;
}

int32_t RPG::SavePartyLocation::GetLayer() const {
	return layer;
}

void RPG::SavePartyLocation::SetLayer(int32_t layer) {
	this->layer = layer;
}

bool RPG::SavePartyLocation::GetOverlapForbidden() const {
	return overlap_forbidden;
}

void RPG::SavePartyLocation::SetOverlapForbidden(bool overlap_forbidden) {
	this->overlap_forbidden = overlap_forbidden;
}

const int32_t& RPG::SavePartyLocation::GetAnimationType() const  {
	return animation_type;
}

int32_t& RPG::SavePartyLocation::GetAnimationType() {
	return animation_type;
}

void RPG::SavePartyLocation::SetAnimationType(const int32_t& animation_type) {
	this->animation_type = animation_type;
}

bool RPG::SavePartyLocation::GetLockFacing() const {
	return lock_facing;
}

void RPG::SavePartyLocation::SetLockFacing(bool lock_facing) {
	this->lock_facing = lock_facing;
}

int32_t RPG::SavePartyLocation::GetMoveSpeed() const {
	return move_speed;
}

void RPG::SavePartyLocation::SetMoveSpeed(int32_t move_speed) {
	this->move_speed = move_speed;
}

const RPG::MoveRoute& RPG::SavePartyLocation::GetMoveRoute() const  {
	return move_route;
}

RPG::MoveRoute& RPG::SavePartyLocation::GetMoveRoute() {
	return move_route;
}

void RPG::SavePartyLocation::SetMoveRoute(const RPG::MoveRoute& move_route) {
	this->move_route = move_route;
}

bool RPG::SavePartyLocation::GetMoveRouteOverwrite() const {
	return move_route_overwrite;
}

void RPG::SavePartyLocation::SetMoveRouteOverwrite(bool move_route_overwrite) {
	this->move_route_overwrite = move_route_overwrite;
}

int32_t RPG::SavePartyLocation::GetMoveRouteIndex() const {
	return move_route_index;
}

void RPG::SavePartyLocation::SetMoveRouteIndex(int32_t move_route_index) {
	this->move_route_index = move_route_index;
}

bool RPG::SavePartyLocation::GetMoveRouteRepeated() const {
	return move_route_repeated;
}

void RPG::SavePartyLocation::SetMoveRouteRepeated(bool move_route_repeated) {
	this->move_route_repeated = move_route_repeated;
}

bool RPG::SavePartyLocation::GetSpriteTransparent() const {
	return sprite_transparent;
}

void RPG::SavePartyLocation::SetSpriteTransparent(bool sprite_transparent) {
	this->sprite_transparent = sprite_transparent;
}

int32_t RPG::SavePartyLocation::GetUnknown2fOverlap() const {
	return unknown_2f_overlap;
}

void RPG::SavePartyLocation::SetUnknown2fOverlap(int32_t unknown_2f_overlap) {
	this->unknown_2f_overlap = unknown_2f_overlap;
}

int32_t RPG::SavePartyLocation::GetAnimPaused() const {
	return anim_paused;
}

void RPG::SavePartyLocation::SetAnimPaused(int32_t anim_paused) {
	this->anim_paused = anim_paused;
}

bool RPG::SavePartyLocation::GetThrough() const {
	return through;
}

void RPG::SavePartyLocation::SetThrough(bool through) {
	this->through = through;
}

int32_t RPG::SavePartyLocation::GetStopCount() const {
	return stop_count;
}

void RPG::SavePartyLocation::SetStopCount(int32_t stop_count) {
	this->stop_count = stop_count;
}

int32_t RPG::SavePartyLocation::GetAnimCount() const {
	return anim_count;
}

void RPG::SavePartyLocation::SetAnimCount(int32_t anim_count) {
	this->anim_count = anim_count;
}

int32_t RPG::SavePartyLocation::GetMaxStopCount() const {
	return max_stop_count;
}

void RPG::SavePartyLocation::SetMaxStopCount(int32_t max_stop_count) {
	this->max_stop_count = max_stop_count;
}

bool RPG::SavePartyLocation::GetJumping() const {
	return jumping;
}

void RPG::SavePartyLocation::SetJumping(bool jumping) {
	this->jumping = jumping;
}

int32_t RPG::SavePartyLocation::GetBeginJumpX() const {
	return begin_jump_x;
}

void RPG::SavePartyLocation::SetBeginJumpX(int32_t begin_jump_x) {
	this->begin_jump_x = begin_jump_x;
}

int32_t RPG::SavePartyLocation::GetBeginJumpY() const {
	return begin_jump_y;
}

void RPG::SavePartyLocation::SetBeginJumpY(int32_t begin_jump_y) {
	this->begin_jump_y = begin_jump_y;
}

int32_t RPG::SavePartyLocation::GetUnknown47Pause() const {
	return unknown_47_pause;
}

void RPG::SavePartyLocation::SetUnknown47Pause(int32_t unknown_47_pause) {
	this->unknown_47_pause = unknown_47_pause;
}

bool RPG::SavePartyLocation::GetFlying() const {
	return flying;
}

void RPG::SavePartyLocation::SetFlying(bool flying) {
	this->flying = flying;
}

const std::string& RPG::SavePartyLocation::GetSpriteName() const  {
	return sprite_name;
}

std::string& RPG::SavePartyLocation::GetSpriteName() {
	return sprite_name;
}

void RPG::SavePartyLocation::SetSpriteName(const std::string& sprite_name) {
	this->sprite_name = sprite_name;
}

int32_t RPG::SavePartyLocation::GetSpriteId() const {
	return sprite_id;
}

void RPG::SavePartyLocation::SetSpriteId(int32_t sprite_id) {
	this->sprite_id = sprite_id;
}

int32_t RPG::SavePartyLocation::GetUnknown4bSpriteMove() const {
	return unknown_4b_sprite_move;
}

void RPG::SavePartyLocation::SetUnknown4bSpriteMove(int32_t unknown_4b_sprite_move) {
	this->unknown_4b_sprite_move = unknown_4b_sprite_move;
}

int32_t RPG::SavePartyLocation::GetFlashRed() const {
	return flash_red;
}

void RPG::SavePartyLocation::SetFlashRed(int32_t flash_red) {
	this->flash_red = flash_red;
}

int32_t RPG::SavePartyLocation::GetFlashGreen() const {
	return flash_green;
}

void RPG::SavePartyLocation::SetFlashGreen(int32_t flash_green) {
	this->flash_green = flash_green;
}

int32_t RPG::SavePartyLocation::GetFlashBlue() const {
	return flash_blue;
}

void RPG::SavePartyLocation::SetFlashBlue(int32_t flash_blue) {
	this->flash_blue = flash_blue;
}

double RPG::SavePartyLocation::GetFlashCurrentLevel() const {
	return flash_current_level;
}

void RPG::SavePartyLocation::SetFlashCurrentLevel(double flash_current_level) {
	this->flash_current_level = flash_current_level;
}

int32_t RPG::SavePartyLocation::GetFlashTimeLeft() const {
	return flash_time_left;
}

void RPG::SavePartyLocation::SetFlashTimeLeft(int32_t flash_time_left) {
	this->flash_time_left = flash_time_left;
}

bool RPG::SavePartyLocation::GetBoarding() const {
	return boarding;
}

void RPG::SavePartyLocation::SetBoarding(bool boarding) {
	this->boarding = boarding;
}

bool RPG::SavePartyLocation::GetAboard() const {
	return aboard;
}

void RPG::SavePartyLocation::SetAboard(bool aboard) {
	this->aboard = aboard;
}

const int32_t& RPG::SavePartyLocation::GetVehicle() const  {
	return vehicle;
}

int32_t& RPG::SavePartyLocation::GetVehicle() {
	return vehicle;
}

void RPG::SavePartyLocation::SetVehicle(const int32_t& vehicle) {
	this->vehicle = vehicle;
}

bool RPG::SavePartyLocation::GetUnboarding() const {
	return unboarding;
}

void RPG::SavePartyLocation::SetUnboarding(bool unboarding) {
	this->unboarding = unboarding;
}

int32_t RPG::SavePartyLocation::GetPreboardMoveSpeed() const {
	return preboard_move_speed;
}

void RPG::SavePartyLocation::SetPreboardMoveSpeed(int32_t preboard_move_speed) {
	this->preboard_move_speed = preboard_move_speed;
}

int32_t RPG::SavePartyLocation::GetUnknown6cMenuCalling() const {
	return unknown_6c_menu_calling;
}

void RPG::SavePartyLocation::SetUnknown6cMenuCalling(int32_t unknown_6c_menu_calling) {
	this->unknown_6c_menu_calling = unknown_6c_menu_calling;
}

int32_t RPG::SavePartyLocation::GetPanState() const {
	return pan_state;
}

void RPG::SavePartyLocation::SetPanState(int32_t pan_state) {
	this->pan_state = pan_state;
}

int32_t RPG::SavePartyLocation::GetPanCurrentX() const {
	return pan_current_x;
}

void RPG::SavePartyLocation::SetPanCurrentX(int32_t pan_current_x) {
	this->pan_current_x = pan_current_x;
}

int32_t RPG::SavePartyLocation::GetPanCurrentY() const {
	return pan_current_y;
}

void RPG::SavePartyLocation::SetPanCurrentY(int32_t pan_current_y) {
	this->pan_current_y = pan_current_y;
}

int32_t RPG::SavePartyLocation::GetPanFinishX() const {
	return pan_finish_x;
}

void RPG::SavePartyLocation::SetPanFinishX(int32_t pan_finish_x) {
	this->pan_finish_x = pan_finish_x;
}

int32_t RPG::SavePartyLocation::GetPanFinishY() const {
	return pan_finish_y;
}

void RPG::SavePartyLocation::SetPanFinishY(int32_t pan_finish_y) {
	this->pan_finish_y = pan_finish_y;
}

int32_t RPG::SavePartyLocation::GetPanSpeed() const {
	return pan_speed;
}

void RPG::SavePartyLocation::SetPanSpeed(int32_t pan_speed) {
	this->pan_speed = pan_speed;
}

int32_t RPG::SavePartyLocation::GetEncounterSteps() const {
	return encounter_steps;
}

void RPG::SavePartyLocation::SetEncounterSteps(int32_t encounter_steps) {
	this->encounter_steps = encounter_steps;
}

bool RPG::SavePartyLocation::GetUnknown7dEncounterCalling() const {
	return unknown_7d_encounter_calling;
}

void RPG::SavePartyLocation::SetUnknown7dEncounterCalling(bool unknown_7d_encounter_calling) {
	this->unknown_7d_encounter_calling = unknown_7d_encounter_calling;
}

int32_t RPG::SavePartyLocation::GetMapSaveCount() const {
	return map_save_count;
}

void RPG::SavePartyLocation::SetMapSaveCount(int32_t map_save_count) {
	this->map_save_count = map_save_count;
}

int32_t RPG::SavePartyLocation::GetDatabaseSaveCount() const {
	return database_save_count;
}

void RPG::SavePartyLocation::SetDatabaseSaveCount(int32_t database_save_count) {
	this->database_save_count = database_save_count;
}

