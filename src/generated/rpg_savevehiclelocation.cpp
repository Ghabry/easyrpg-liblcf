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
#include "rpg_savevehiclelocation.h"


bool RPG::SaveVehicleLocation::GetActive() const {
	return active;
}

void RPG::SaveVehicleLocation::SetActive(bool active) {
	this->active = active;
}

int32_t RPG::SaveVehicleLocation::GetMapId() const {
	return map_id;
}

void RPG::SaveVehicleLocation::SetMapId(int32_t map_id) {
	this->map_id = map_id;
}

int32_t RPG::SaveVehicleLocation::GetPositionX() const {
	return position_x;
}

void RPG::SaveVehicleLocation::SetPositionX(int32_t position_x) {
	this->position_x = position_x;
}

int32_t RPG::SaveVehicleLocation::GetPositionY() const {
	return position_y;
}

void RPG::SaveVehicleLocation::SetPositionY(int32_t position_y) {
	this->position_y = position_y;
}

int32_t RPG::SaveVehicleLocation::GetDirection() const {
	return direction;
}

void RPG::SaveVehicleLocation::SetDirection(int32_t direction) {
	this->direction = direction;
}

int32_t RPG::SaveVehicleLocation::GetSpriteDirection() const {
	return sprite_direction;
}

void RPG::SaveVehicleLocation::SetSpriteDirection(int32_t sprite_direction) {
	this->sprite_direction = sprite_direction;
}

int32_t RPG::SaveVehicleLocation::GetAnimFrame() const {
	return anim_frame;
}

void RPG::SaveVehicleLocation::SetAnimFrame(int32_t anim_frame) {
	this->anim_frame = anim_frame;
}

int32_t RPG::SaveVehicleLocation::GetTransparency() const {
	return transparency;
}

void RPG::SaveVehicleLocation::SetTransparency(int32_t transparency) {
	this->transparency = transparency;
}

int32_t RPG::SaveVehicleLocation::GetRemainingStep() const {
	return remaining_step;
}

void RPG::SaveVehicleLocation::SetRemainingStep(int32_t remaining_step) {
	this->remaining_step = remaining_step;
}

int32_t RPG::SaveVehicleLocation::GetMoveFrequency() const {
	return move_frequency;
}

void RPG::SaveVehicleLocation::SetMoveFrequency(int32_t move_frequency) {
	this->move_frequency = move_frequency;
}

int32_t RPG::SaveVehicleLocation::GetLayer() const {
	return layer;
}

void RPG::SaveVehicleLocation::SetLayer(int32_t layer) {
	this->layer = layer;
}

bool RPG::SaveVehicleLocation::GetOverlapForbidden() const {
	return overlap_forbidden;
}

void RPG::SaveVehicleLocation::SetOverlapForbidden(bool overlap_forbidden) {
	this->overlap_forbidden = overlap_forbidden;
}

const int32_t& RPG::SaveVehicleLocation::GetAnimationType() const  {
	return animation_type;
}

int32_t& RPG::SaveVehicleLocation::GetAnimationType() {
	return animation_type;
}

void RPG::SaveVehicleLocation::SetAnimationType(const int32_t& animation_type) {
	this->animation_type = animation_type;
}

bool RPG::SaveVehicleLocation::GetLockFacing() const {
	return lock_facing;
}

void RPG::SaveVehicleLocation::SetLockFacing(bool lock_facing) {
	this->lock_facing = lock_facing;
}

int32_t RPG::SaveVehicleLocation::GetMoveSpeed() const {
	return move_speed;
}

void RPG::SaveVehicleLocation::SetMoveSpeed(int32_t move_speed) {
	this->move_speed = move_speed;
}

const RPG::MoveRoute& RPG::SaveVehicleLocation::GetMoveRoute() const  {
	return move_route;
}

RPG::MoveRoute& RPG::SaveVehicleLocation::GetMoveRoute() {
	return move_route;
}

void RPG::SaveVehicleLocation::SetMoveRoute(const RPG::MoveRoute& move_route) {
	this->move_route = move_route;
}

bool RPG::SaveVehicleLocation::GetMoveRouteOverwrite() const {
	return move_route_overwrite;
}

void RPG::SaveVehicleLocation::SetMoveRouteOverwrite(bool move_route_overwrite) {
	this->move_route_overwrite = move_route_overwrite;
}

int32_t RPG::SaveVehicleLocation::GetMoveRouteIndex() const {
	return move_route_index;
}

void RPG::SaveVehicleLocation::SetMoveRouteIndex(int32_t move_route_index) {
	this->move_route_index = move_route_index;
}

bool RPG::SaveVehicleLocation::GetMoveRouteRepeated() const {
	return move_route_repeated;
}

void RPG::SaveVehicleLocation::SetMoveRouteRepeated(bool move_route_repeated) {
	this->move_route_repeated = move_route_repeated;
}

int32_t RPG::SaveVehicleLocation::GetAnimPaused() const {
	return anim_paused;
}

void RPG::SaveVehicleLocation::SetAnimPaused(int32_t anim_paused) {
	this->anim_paused = anim_paused;
}

bool RPG::SaveVehicleLocation::GetThrough() const {
	return through;
}

void RPG::SaveVehicleLocation::SetThrough(bool through) {
	this->through = through;
}

int32_t RPG::SaveVehicleLocation::GetStopCount() const {
	return stop_count;
}

void RPG::SaveVehicleLocation::SetStopCount(int32_t stop_count) {
	this->stop_count = stop_count;
}

int32_t RPG::SaveVehicleLocation::GetAnimCount() const {
	return anim_count;
}

void RPG::SaveVehicleLocation::SetAnimCount(int32_t anim_count) {
	this->anim_count = anim_count;
}

int32_t RPG::SaveVehicleLocation::GetMaxStopCount() const {
	return max_stop_count;
}

void RPG::SaveVehicleLocation::SetMaxStopCount(int32_t max_stop_count) {
	this->max_stop_count = max_stop_count;
}

bool RPG::SaveVehicleLocation::GetJumping() const {
	return jumping;
}

void RPG::SaveVehicleLocation::SetJumping(bool jumping) {
	this->jumping = jumping;
}

int32_t RPG::SaveVehicleLocation::GetBeginJumpX() const {
	return begin_jump_x;
}

void RPG::SaveVehicleLocation::SetBeginJumpX(int32_t begin_jump_x) {
	this->begin_jump_x = begin_jump_x;
}

int32_t RPG::SaveVehicleLocation::GetBeginJumpY() const {
	return begin_jump_y;
}

void RPG::SaveVehicleLocation::SetBeginJumpY(int32_t begin_jump_y) {
	this->begin_jump_y = begin_jump_y;
}

int32_t RPG::SaveVehicleLocation::GetUnknown47Pause() const {
	return unknown_47_pause;
}

void RPG::SaveVehicleLocation::SetUnknown47Pause(int32_t unknown_47_pause) {
	this->unknown_47_pause = unknown_47_pause;
}

bool RPG::SaveVehicleLocation::GetFlying() const {
	return flying;
}

void RPG::SaveVehicleLocation::SetFlying(bool flying) {
	this->flying = flying;
}

const std::string& RPG::SaveVehicleLocation::GetSpriteName() const  {
	return sprite_name;
}

std::string& RPG::SaveVehicleLocation::GetSpriteName() {
	return sprite_name;
}

void RPG::SaveVehicleLocation::SetSpriteName(const std::string& sprite_name) {
	this->sprite_name = sprite_name;
}

int32_t RPG::SaveVehicleLocation::GetSpriteId() const {
	return sprite_id;
}

void RPG::SaveVehicleLocation::SetSpriteId(int32_t sprite_id) {
	this->sprite_id = sprite_id;
}

int32_t RPG::SaveVehicleLocation::GetUnknown4bSpriteMove() const {
	return unknown_4b_sprite_move;
}

void RPG::SaveVehicleLocation::SetUnknown4bSpriteMove(int32_t unknown_4b_sprite_move) {
	this->unknown_4b_sprite_move = unknown_4b_sprite_move;
}

int32_t RPG::SaveVehicleLocation::GetFlashRed() const {
	return flash_red;
}

void RPG::SaveVehicleLocation::SetFlashRed(int32_t flash_red) {
	this->flash_red = flash_red;
}

int32_t RPG::SaveVehicleLocation::GetFlashGreen() const {
	return flash_green;
}

void RPG::SaveVehicleLocation::SetFlashGreen(int32_t flash_green) {
	this->flash_green = flash_green;
}

int32_t RPG::SaveVehicleLocation::GetFlashBlue() const {
	return flash_blue;
}

void RPG::SaveVehicleLocation::SetFlashBlue(int32_t flash_blue) {
	this->flash_blue = flash_blue;
}

double RPG::SaveVehicleLocation::GetFlashCurrentLevel() const {
	return flash_current_level;
}

void RPG::SaveVehicleLocation::SetFlashCurrentLevel(double flash_current_level) {
	this->flash_current_level = flash_current_level;
}

int32_t RPG::SaveVehicleLocation::GetFlashTimeLeft() const {
	return flash_time_left;
}

void RPG::SaveVehicleLocation::SetFlashTimeLeft(int32_t flash_time_left) {
	this->flash_time_left = flash_time_left;
}

int32_t RPG::SaveVehicleLocation::GetVehicle() const {
	return vehicle;
}

void RPG::SaveVehicleLocation::SetVehicle(int32_t vehicle) {
	this->vehicle = vehicle;
}

int32_t RPG::SaveVehicleLocation::GetOriginalMoveRouteIndex() const {
	return original_move_route_index;
}

void RPG::SaveVehicleLocation::SetOriginalMoveRouteIndex(int32_t original_move_route_index) {
	this->original_move_route_index = original_move_route_index;
}

int32_t RPG::SaveVehicleLocation::GetRemainingAscent() const {
	return remaining_ascent;
}

void RPG::SaveVehicleLocation::SetRemainingAscent(int32_t remaining_ascent) {
	this->remaining_ascent = remaining_ascent;
}

int32_t RPG::SaveVehicleLocation::GetRemainingDescent() const {
	return remaining_descent;
}

void RPG::SaveVehicleLocation::SetRemainingDescent(int32_t remaining_descent) {
	this->remaining_descent = remaining_descent;
}

const std::string& RPG::SaveVehicleLocation::GetSprite2Name() const  {
	return sprite2_name;
}

std::string& RPG::SaveVehicleLocation::GetSprite2Name() {
	return sprite2_name;
}

void RPG::SaveVehicleLocation::SetSprite2Name(const std::string& sprite2_name) {
	this->sprite2_name = sprite2_name;
}

int32_t RPG::SaveVehicleLocation::GetSprite2Id() const {
	return sprite2_id;
}

void RPG::SaveVehicleLocation::SetSprite2Id(int32_t sprite2_id) {
	this->sprite2_id = sprite2_id;
}

