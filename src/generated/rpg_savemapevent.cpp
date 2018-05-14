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
#include "rpg_savemapevent.h"


bool RPG::SaveMapEvent::GetActive() const {
	return getter<bool>("active");
}

void RPG::SaveMapEvent::SetActive(bool active) {
	setter<bool>("active", active);
}

int32_t RPG::SaveMapEvent::GetMapId() const {
	return getter<int32_t>("map_id");
}

void RPG::SaveMapEvent::SetMapId(int32_t map_id) {
	setter<int32_t>("map_id", map_id);
}

int32_t RPG::SaveMapEvent::GetPositionX() const {
	return getter<int32_t>("position_x");
}

void RPG::SaveMapEvent::SetPositionX(int32_t position_x) {
	setter<int32_t>("position_x", position_x);
}

int32_t RPG::SaveMapEvent::GetPositionY() const {
	return getter<int32_t>("position_y");
}

void RPG::SaveMapEvent::SetPositionY(int32_t position_y) {
	setter<int32_t>("position_y", position_y);
}

int32_t RPG::SaveMapEvent::GetDirection() const {
	return getter<int32_t>("direction");
}

void RPG::SaveMapEvent::SetDirection(int32_t direction) {
	setter<int32_t>("direction", direction);
}

int32_t RPG::SaveMapEvent::GetSpriteDirection() const {
	return getter<int32_t>("sprite_direction");
}

void RPG::SaveMapEvent::SetSpriteDirection(int32_t sprite_direction) {
	setter<int32_t>("sprite_direction", sprite_direction);
}

int32_t RPG::SaveMapEvent::GetAnimFrame() const {
	return getter<int32_t>("anim_frame");
}

void RPG::SaveMapEvent::SetAnimFrame(int32_t anim_frame) {
	setter<int32_t>("anim_frame", anim_frame);
}

int32_t RPG::SaveMapEvent::GetTransparency() const {
	return getter<int32_t>("transparency");
}

void RPG::SaveMapEvent::SetTransparency(int32_t transparency) {
	setter<int32_t>("transparency", transparency);
}

int32_t RPG::SaveMapEvent::GetRemainingStep() const {
	return getter<int32_t>("remaining_step");
}

void RPG::SaveMapEvent::SetRemainingStep(int32_t remaining_step) {
	setter<int32_t>("remaining_step", remaining_step);
}

int32_t RPG::SaveMapEvent::GetMoveFrequency() const {
	return getter<int32_t>("move_frequency");
}

void RPG::SaveMapEvent::SetMoveFrequency(int32_t move_frequency) {
	setter<int32_t>("move_frequency", move_frequency);
}

int32_t RPG::SaveMapEvent::GetLayer() const {
	return getter<int32_t>("layer");
}

void RPG::SaveMapEvent::SetLayer(int32_t layer) {
	setter<int32_t>("layer", layer);
}

bool RPG::SaveMapEvent::GetOverlapForbidden() const {
	return getter<bool>("overlap_forbidden");
}

void RPG::SaveMapEvent::SetOverlapForbidden(bool overlap_forbidden) {
	setter<bool>("overlap_forbidden", overlap_forbidden);
}

const int32_t& RPG::SaveMapEvent::GetAnimationType() const {
	return getter<const int32_t&>("animation_type");
}

int32_t& RPG::SaveMapEvent::GetAnimationType() {
	return getter<int32_t&>("animation_type");
}

void RPG::SaveMapEvent::SetAnimationType(const int32_t& animation_type) {
	setter<int32_t>("animation_type", animation_type);
}

bool RPG::SaveMapEvent::GetLockFacing() const {
	return getter<bool>("lock_facing");
}

void RPG::SaveMapEvent::SetLockFacing(bool lock_facing) {
	setter<bool>("lock_facing", lock_facing);
}

int32_t RPG::SaveMapEvent::GetMoveSpeed() const {
	return getter<int32_t>("move_speed");
}

void RPG::SaveMapEvent::SetMoveSpeed(int32_t move_speed) {
	setter<int32_t>("move_speed", move_speed);
}

const RPG::MoveRoute& RPG::SaveMapEvent::GetMoveRoute() const {
	return getter<const RPG::MoveRoute&>("move_route");
}

RPG::MoveRoute& RPG::SaveMapEvent::GetMoveRoute() {
	return getter<RPG::MoveRoute&>("move_route");
}

void RPG::SaveMapEvent::SetMoveRoute(const RPG::MoveRoute& move_route) {
	setter<RPG::MoveRoute>("move_route", move_route);
}

bool RPG::SaveMapEvent::GetMoveRouteOverwrite() const {
	return getter<bool>("move_route_overwrite");
}

void RPG::SaveMapEvent::SetMoveRouteOverwrite(bool move_route_overwrite) {
	setter<bool>("move_route_overwrite", move_route_overwrite);
}

int32_t RPG::SaveMapEvent::GetMoveRouteIndex() const {
	return getter<int32_t>("move_route_index");
}

void RPG::SaveMapEvent::SetMoveRouteIndex(int32_t move_route_index) {
	setter<int32_t>("move_route_index", move_route_index);
}

bool RPG::SaveMapEvent::GetMoveRouteRepeated() const {
	return getter<bool>("move_route_repeated");
}

void RPG::SaveMapEvent::SetMoveRouteRepeated(bool move_route_repeated) {
	setter<bool>("move_route_repeated", move_route_repeated);
}

int32_t RPG::SaveMapEvent::GetUnknown2fOverlap() const {
	return getter<int32_t>("unknown_2f_overlap");
}

void RPG::SaveMapEvent::SetUnknown2fOverlap(int32_t unknown_2f_overlap) {
	setter<int32_t>("unknown_2f_overlap", unknown_2f_overlap);
}

int32_t RPG::SaveMapEvent::GetAnimPaused() const {
	return getter<int32_t>("anim_paused");
}

void RPG::SaveMapEvent::SetAnimPaused(int32_t anim_paused) {
	setter<int32_t>("anim_paused", anim_paused);
}

bool RPG::SaveMapEvent::GetThrough() const {
	return getter<bool>("through");
}

void RPG::SaveMapEvent::SetThrough(bool through) {
	setter<bool>("through", through);
}

int32_t RPG::SaveMapEvent::GetStopCount() const {
	return getter<int32_t>("stop_count");
}

void RPG::SaveMapEvent::SetStopCount(int32_t stop_count) {
	setter<int32_t>("stop_count", stop_count);
}

int32_t RPG::SaveMapEvent::GetAnimCount() const {
	return getter<int32_t>("anim_count");
}

void RPG::SaveMapEvent::SetAnimCount(int32_t anim_count) {
	setter<int32_t>("anim_count", anim_count);
}

int32_t RPG::SaveMapEvent::GetMaxStopCount() const {
	return getter<int32_t>("max_stop_count");
}

void RPG::SaveMapEvent::SetMaxStopCount(int32_t max_stop_count) {
	setter<int32_t>("max_stop_count", max_stop_count);
}

bool RPG::SaveMapEvent::GetJumping() const {
	return getter<bool>("jumping");
}

void RPG::SaveMapEvent::SetJumping(bool jumping) {
	setter<bool>("jumping", jumping);
}

int32_t RPG::SaveMapEvent::GetBeginJumpX() const {
	return getter<int32_t>("begin_jump_x");
}

void RPG::SaveMapEvent::SetBeginJumpX(int32_t begin_jump_x) {
	setter<int32_t>("begin_jump_x", begin_jump_x);
}

int32_t RPG::SaveMapEvent::GetBeginJumpY() const {
	return getter<int32_t>("begin_jump_y");
}

void RPG::SaveMapEvent::SetBeginJumpY(int32_t begin_jump_y) {
	setter<int32_t>("begin_jump_y", begin_jump_y);
}

int32_t RPG::SaveMapEvent::GetUnknown47Pause() const {
	return getter<int32_t>("unknown_47_pause");
}

void RPG::SaveMapEvent::SetUnknown47Pause(int32_t unknown_47_pause) {
	setter<int32_t>("unknown_47_pause", unknown_47_pause);
}

bool RPG::SaveMapEvent::GetFlying() const {
	return getter<bool>("flying");
}

void RPG::SaveMapEvent::SetFlying(bool flying) {
	setter<bool>("flying", flying);
}

const std::string& RPG::SaveMapEvent::GetSpriteName() const {
	return getter<const std::string&>("sprite_name");
}

std::string& RPG::SaveMapEvent::GetSpriteName() {
	return getter<std::string&>("sprite_name");
}

void RPG::SaveMapEvent::SetSpriteName(const std::string& sprite_name) {
	setter<std::string>("sprite_name", sprite_name);
}

int32_t RPG::SaveMapEvent::GetSpriteId() const {
	return getter<int32_t>("sprite_id");
}

void RPG::SaveMapEvent::SetSpriteId(int32_t sprite_id) {
	setter<int32_t>("sprite_id", sprite_id);
}

int32_t RPG::SaveMapEvent::GetUnknown4bSpriteMove() const {
	return getter<int32_t>("unknown_4b_sprite_move");
}

void RPG::SaveMapEvent::SetUnknown4bSpriteMove(int32_t unknown_4b_sprite_move) {
	setter<int32_t>("unknown_4b_sprite_move", unknown_4b_sprite_move);
}

int32_t RPG::SaveMapEvent::GetFlashRed() const {
	return getter<int32_t>("flash_red");
}

void RPG::SaveMapEvent::SetFlashRed(int32_t flash_red) {
	setter<int32_t>("flash_red", flash_red);
}

int32_t RPG::SaveMapEvent::GetFlashGreen() const {
	return getter<int32_t>("flash_green");
}

void RPG::SaveMapEvent::SetFlashGreen(int32_t flash_green) {
	setter<int32_t>("flash_green", flash_green);
}

int32_t RPG::SaveMapEvent::GetFlashBlue() const {
	return getter<int32_t>("flash_blue");
}

void RPG::SaveMapEvent::SetFlashBlue(int32_t flash_blue) {
	setter<int32_t>("flash_blue", flash_blue);
}

double RPG::SaveMapEvent::GetFlashCurrentLevel() const {
	return getter<double>("flash_current_level");
}

void RPG::SaveMapEvent::SetFlashCurrentLevel(double flash_current_level) {
	setter<double>("flash_current_level", flash_current_level);
}

int32_t RPG::SaveMapEvent::GetFlashTimeLeft() const {
	return getter<int32_t>("flash_time_left");
}

void RPG::SaveMapEvent::SetFlashTimeLeft(int32_t flash_time_left) {
	setter<int32_t>("flash_time_left", flash_time_left);
}

bool RPG::SaveMapEvent::GetRunning() const {
	return getter<bool>("running");
}

void RPG::SaveMapEvent::SetRunning(bool running) {
	setter<bool>("running", running);
}

int32_t RPG::SaveMapEvent::GetOriginalMoveRouteIndex() const {
	return getter<int32_t>("original_move_route_index");
}

void RPG::SaveMapEvent::SetOriginalMoveRouteIndex(int32_t original_move_route_index) {
	setter<int32_t>("original_move_route_index", original_move_route_index);
}

bool RPG::SaveMapEvent::GetPending() const {
	return getter<bool>("pending");
}

void RPG::SaveMapEvent::SetPending(bool pending) {
	setter<bool>("pending", pending);
}

const RPG::SaveEventData& RPG::SaveMapEvent::GetEventData() const {
	return getter<const RPG::SaveEventData&>("event_data");
}

RPG::SaveEventData& RPG::SaveMapEvent::GetEventData() {
	return getter<RPG::SaveEventData&>("event_data");
}

void RPG::SaveMapEvent::SetEventData(const RPG::SaveEventData& event_data) {
	setter<RPG::SaveEventData>("event_data", event_data);
}

