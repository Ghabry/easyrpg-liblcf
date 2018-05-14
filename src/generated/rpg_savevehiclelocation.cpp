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
	return getter<bool>("active");
}

void RPG::SaveVehicleLocation::SetActive(bool active) {
	setter<bool>("active", active);
}

int32_t RPG::SaveVehicleLocation::GetMapId() const {
	return getter<int32_t>("map_id");
}

void RPG::SaveVehicleLocation::SetMapId(int32_t map_id) {
	setter<int32_t>("map_id", map_id);
}

int32_t RPG::SaveVehicleLocation::GetPositionX() const {
	return getter<int32_t>("position_x");
}

void RPG::SaveVehicleLocation::SetPositionX(int32_t position_x) {
	setter<int32_t>("position_x", position_x);
}

int32_t RPG::SaveVehicleLocation::GetPositionY() const {
	return getter<int32_t>("position_y");
}

void RPG::SaveVehicleLocation::SetPositionY(int32_t position_y) {
	setter<int32_t>("position_y", position_y);
}

int32_t RPG::SaveVehicleLocation::GetDirection() const {
	return getter<int32_t>("direction");
}

void RPG::SaveVehicleLocation::SetDirection(int32_t direction) {
	setter<int32_t>("direction", direction);
}

int32_t RPG::SaveVehicleLocation::GetSpriteDirection() const {
	return getter<int32_t>("sprite_direction");
}

void RPG::SaveVehicleLocation::SetSpriteDirection(int32_t sprite_direction) {
	setter<int32_t>("sprite_direction", sprite_direction);
}

int32_t RPG::SaveVehicleLocation::GetAnimFrame() const {
	return getter<int32_t>("anim_frame");
}

void RPG::SaveVehicleLocation::SetAnimFrame(int32_t anim_frame) {
	setter<int32_t>("anim_frame", anim_frame);
}

int32_t RPG::SaveVehicleLocation::GetTransparency() const {
	return getter<int32_t>("transparency");
}

void RPG::SaveVehicleLocation::SetTransparency(int32_t transparency) {
	setter<int32_t>("transparency", transparency);
}

int32_t RPG::SaveVehicleLocation::GetRemainingStep() const {
	return getter<int32_t>("remaining_step");
}

void RPG::SaveVehicleLocation::SetRemainingStep(int32_t remaining_step) {
	setter<int32_t>("remaining_step", remaining_step);
}

int32_t RPG::SaveVehicleLocation::GetMoveFrequency() const {
	return getter<int32_t>("move_frequency");
}

void RPG::SaveVehicleLocation::SetMoveFrequency(int32_t move_frequency) {
	setter<int32_t>("move_frequency", move_frequency);
}

int32_t RPG::SaveVehicleLocation::GetLayer() const {
	return getter<int32_t>("layer");
}

void RPG::SaveVehicleLocation::SetLayer(int32_t layer) {
	setter<int32_t>("layer", layer);
}

bool RPG::SaveVehicleLocation::GetOverlapForbidden() const {
	return getter<bool>("overlap_forbidden");
}

void RPG::SaveVehicleLocation::SetOverlapForbidden(bool overlap_forbidden) {
	setter<bool>("overlap_forbidden", overlap_forbidden);
}

const int32_t& RPG::SaveVehicleLocation::GetAnimationType() const {
	return getter<const int32_t&>("animation_type");
}

int32_t& RPG::SaveVehicleLocation::GetAnimationType() {
	return getter<int32_t&>("animation_type");
}

void RPG::SaveVehicleLocation::SetAnimationType(const int32_t& animation_type) {
	setter<int32_t>("animation_type", animation_type);
}

bool RPG::SaveVehicleLocation::GetLockFacing() const {
	return getter<bool>("lock_facing");
}

void RPG::SaveVehicleLocation::SetLockFacing(bool lock_facing) {
	setter<bool>("lock_facing", lock_facing);
}

int32_t RPG::SaveVehicleLocation::GetMoveSpeed() const {
	return getter<int32_t>("move_speed");
}

void RPG::SaveVehicleLocation::SetMoveSpeed(int32_t move_speed) {
	setter<int32_t>("move_speed", move_speed);
}

const RPG::MoveRoute& RPG::SaveVehicleLocation::GetMoveRoute() const {
	return getter<const RPG::MoveRoute&>("move_route");
}

RPG::MoveRoute& RPG::SaveVehicleLocation::GetMoveRoute() {
	return getter<RPG::MoveRoute&>("move_route");
}

void RPG::SaveVehicleLocation::SetMoveRoute(const RPG::MoveRoute& move_route) {
	setter<RPG::MoveRoute>("move_route", move_route);
}

bool RPG::SaveVehicleLocation::GetMoveRouteOverwrite() const {
	return getter<bool>("move_route_overwrite");
}

void RPG::SaveVehicleLocation::SetMoveRouteOverwrite(bool move_route_overwrite) {
	setter<bool>("move_route_overwrite", move_route_overwrite);
}

int32_t RPG::SaveVehicleLocation::GetMoveRouteIndex() const {
	return getter<int32_t>("move_route_index");
}

void RPG::SaveVehicleLocation::SetMoveRouteIndex(int32_t move_route_index) {
	setter<int32_t>("move_route_index", move_route_index);
}

bool RPG::SaveVehicleLocation::GetMoveRouteRepeated() const {
	return getter<bool>("move_route_repeated");
}

void RPG::SaveVehicleLocation::SetMoveRouteRepeated(bool move_route_repeated) {
	setter<bool>("move_route_repeated", move_route_repeated);
}

int32_t RPG::SaveVehicleLocation::GetAnimPaused() const {
	return getter<int32_t>("anim_paused");
}

void RPG::SaveVehicleLocation::SetAnimPaused(int32_t anim_paused) {
	setter<int32_t>("anim_paused", anim_paused);
}

bool RPG::SaveVehicleLocation::GetThrough() const {
	return getter<bool>("through");
}

void RPG::SaveVehicleLocation::SetThrough(bool through) {
	setter<bool>("through", through);
}

int32_t RPG::SaveVehicleLocation::GetStopCount() const {
	return getter<int32_t>("stop_count");
}

void RPG::SaveVehicleLocation::SetStopCount(int32_t stop_count) {
	setter<int32_t>("stop_count", stop_count);
}

int32_t RPG::SaveVehicleLocation::GetAnimCount() const {
	return getter<int32_t>("anim_count");
}

void RPG::SaveVehicleLocation::SetAnimCount(int32_t anim_count) {
	setter<int32_t>("anim_count", anim_count);
}

int32_t RPG::SaveVehicleLocation::GetMaxStopCount() const {
	return getter<int32_t>("max_stop_count");
}

void RPG::SaveVehicleLocation::SetMaxStopCount(int32_t max_stop_count) {
	setter<int32_t>("max_stop_count", max_stop_count);
}

bool RPG::SaveVehicleLocation::GetJumping() const {
	return getter<bool>("jumping");
}

void RPG::SaveVehicleLocation::SetJumping(bool jumping) {
	setter<bool>("jumping", jumping);
}

int32_t RPG::SaveVehicleLocation::GetBeginJumpX() const {
	return getter<int32_t>("begin_jump_x");
}

void RPG::SaveVehicleLocation::SetBeginJumpX(int32_t begin_jump_x) {
	setter<int32_t>("begin_jump_x", begin_jump_x);
}

int32_t RPG::SaveVehicleLocation::GetBeginJumpY() const {
	return getter<int32_t>("begin_jump_y");
}

void RPG::SaveVehicleLocation::SetBeginJumpY(int32_t begin_jump_y) {
	setter<int32_t>("begin_jump_y", begin_jump_y);
}

int32_t RPG::SaveVehicleLocation::GetUnknown47Pause() const {
	return getter<int32_t>("unknown_47_pause");
}

void RPG::SaveVehicleLocation::SetUnknown47Pause(int32_t unknown_47_pause) {
	setter<int32_t>("unknown_47_pause", unknown_47_pause);
}

bool RPG::SaveVehicleLocation::GetFlying() const {
	return getter<bool>("flying");
}

void RPG::SaveVehicleLocation::SetFlying(bool flying) {
	setter<bool>("flying", flying);
}

const std::string& RPG::SaveVehicleLocation::GetSpriteName() const {
	return getter<const std::string&>("sprite_name");
}

std::string& RPG::SaveVehicleLocation::GetSpriteName() {
	return getter<std::string&>("sprite_name");
}

void RPG::SaveVehicleLocation::SetSpriteName(const std::string& sprite_name) {
	setter<std::string>("sprite_name", sprite_name);
}

int32_t RPG::SaveVehicleLocation::GetSpriteId() const {
	return getter<int32_t>("sprite_id");
}

void RPG::SaveVehicleLocation::SetSpriteId(int32_t sprite_id) {
	setter<int32_t>("sprite_id", sprite_id);
}

int32_t RPG::SaveVehicleLocation::GetUnknown4bSpriteMove() const {
	return getter<int32_t>("unknown_4b_sprite_move");
}

void RPG::SaveVehicleLocation::SetUnknown4bSpriteMove(int32_t unknown_4b_sprite_move) {
	setter<int32_t>("unknown_4b_sprite_move", unknown_4b_sprite_move);
}

int32_t RPG::SaveVehicleLocation::GetFlashRed() const {
	return getter<int32_t>("flash_red");
}

void RPG::SaveVehicleLocation::SetFlashRed(int32_t flash_red) {
	setter<int32_t>("flash_red", flash_red);
}

int32_t RPG::SaveVehicleLocation::GetFlashGreen() const {
	return getter<int32_t>("flash_green");
}

void RPG::SaveVehicleLocation::SetFlashGreen(int32_t flash_green) {
	setter<int32_t>("flash_green", flash_green);
}

int32_t RPG::SaveVehicleLocation::GetFlashBlue() const {
	return getter<int32_t>("flash_blue");
}

void RPG::SaveVehicleLocation::SetFlashBlue(int32_t flash_blue) {
	setter<int32_t>("flash_blue", flash_blue);
}

double RPG::SaveVehicleLocation::GetFlashCurrentLevel() const {
	return getter<double>("flash_current_level");
}

void RPG::SaveVehicleLocation::SetFlashCurrentLevel(double flash_current_level) {
	setter<double>("flash_current_level", flash_current_level);
}

int32_t RPG::SaveVehicleLocation::GetFlashTimeLeft() const {
	return getter<int32_t>("flash_time_left");
}

void RPG::SaveVehicleLocation::SetFlashTimeLeft(int32_t flash_time_left) {
	setter<int32_t>("flash_time_left", flash_time_left);
}

int32_t RPG::SaveVehicleLocation::GetVehicle() const {
	return getter<int32_t>("vehicle");
}

void RPG::SaveVehicleLocation::SetVehicle(int32_t vehicle) {
	setter<int32_t>("vehicle", vehicle);
}

int32_t RPG::SaveVehicleLocation::GetOriginalMoveRouteIndex() const {
	return getter<int32_t>("original_move_route_index");
}

void RPG::SaveVehicleLocation::SetOriginalMoveRouteIndex(int32_t original_move_route_index) {
	setter<int32_t>("original_move_route_index", original_move_route_index);
}

int32_t RPG::SaveVehicleLocation::GetRemainingAscent() const {
	return getter<int32_t>("remaining_ascent");
}

void RPG::SaveVehicleLocation::SetRemainingAscent(int32_t remaining_ascent) {
	setter<int32_t>("remaining_ascent", remaining_ascent);
}

int32_t RPG::SaveVehicleLocation::GetRemainingDescent() const {
	return getter<int32_t>("remaining_descent");
}

void RPG::SaveVehicleLocation::SetRemainingDescent(int32_t remaining_descent) {
	setter<int32_t>("remaining_descent", remaining_descent);
}

const std::string& RPG::SaveVehicleLocation::GetSprite2Name() const {
	return getter<const std::string&>("sprite2_name");
}

std::string& RPG::SaveVehicleLocation::GetSprite2Name() {
	return getter<std::string&>("sprite2_name");
}

void RPG::SaveVehicleLocation::SetSprite2Name(const std::string& sprite2_name) {
	setter<std::string>("sprite2_name", sprite2_name);
}

int32_t RPG::SaveVehicleLocation::GetSprite2Id() const {
	return getter<int32_t>("sprite2_id");
}

void RPG::SaveVehicleLocation::SetSprite2Id(int32_t sprite2_id) {
	setter<int32_t>("sprite2_id", sprite2_id);
}

