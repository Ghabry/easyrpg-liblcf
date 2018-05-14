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
#include "rpg_savepicture.h"


const std::string& RPG::SavePicture::GetName() const  {
	return name;
}

std::string& RPG::SavePicture::GetName() {
	return name;
}

void RPG::SavePicture::SetName(const std::string& name) {
	this->name = name;
}

double RPG::SavePicture::GetStartX() const {
	return start_x;
}

void RPG::SavePicture::SetStartX(double start_x) {
	this->start_x = start_x;
}

double RPG::SavePicture::GetStartY() const {
	return start_y;
}

void RPG::SavePicture::SetStartY(double start_y) {
	this->start_y = start_y;
}

double RPG::SavePicture::GetCurrentX() const {
	return current_x;
}

void RPG::SavePicture::SetCurrentX(double current_x) {
	this->current_x = current_x;
}

double RPG::SavePicture::GetCurrentY() const {
	return current_y;
}

void RPG::SavePicture::SetCurrentY(double current_y) {
	this->current_y = current_y;
}

bool RPG::SavePicture::GetFixedToMap() const {
	return fixed_to_map;
}

void RPG::SavePicture::SetFixedToMap(bool fixed_to_map) {
	this->fixed_to_map = fixed_to_map;
}

double RPG::SavePicture::GetCurrentMagnify() const {
	return current_magnify;
}

void RPG::SavePicture::SetCurrentMagnify(double current_magnify) {
	this->current_magnify = current_magnify;
}

double RPG::SavePicture::GetCurrentTopTrans() const {
	return current_top_trans;
}

void RPG::SavePicture::SetCurrentTopTrans(double current_top_trans) {
	this->current_top_trans = current_top_trans;
}

bool RPG::SavePicture::GetTransparency() const {
	return transparency;
}

void RPG::SavePicture::SetTransparency(bool transparency) {
	this->transparency = transparency;
}

double RPG::SavePicture::GetCurrentRed() const {
	return current_red;
}

void RPG::SavePicture::SetCurrentRed(double current_red) {
	this->current_red = current_red;
}

double RPG::SavePicture::GetCurrentGreen() const {
	return current_green;
}

void RPG::SavePicture::SetCurrentGreen(double current_green) {
	this->current_green = current_green;
}

double RPG::SavePicture::GetCurrentBlue() const {
	return current_blue;
}

void RPG::SavePicture::SetCurrentBlue(double current_blue) {
	this->current_blue = current_blue;
}

double RPG::SavePicture::GetCurrentSat() const {
	return current_sat;
}

void RPG::SavePicture::SetCurrentSat(double current_sat) {
	this->current_sat = current_sat;
}

int32_t RPG::SavePicture::GetEffectMode() const {
	return effect_mode;
}

void RPG::SavePicture::SetEffectMode(int32_t effect_mode) {
	this->effect_mode = effect_mode;
}

double RPG::SavePicture::GetCurrentEffect() const {
	return current_effect;
}

void RPG::SavePicture::SetCurrentEffect(double current_effect) {
	this->current_effect = current_effect;
}

double RPG::SavePicture::GetCurrentBotTrans() const {
	return current_bot_trans;
}

void RPG::SavePicture::SetCurrentBotTrans(double current_bot_trans) {
	this->current_bot_trans = current_bot_trans;
}

int32_t RPG::SavePicture::GetSpritesheetCols() const {
	return spritesheet_cols;
}

void RPG::SavePicture::SetSpritesheetCols(int32_t spritesheet_cols) {
	this->spritesheet_cols = spritesheet_cols;
}

int32_t RPG::SavePicture::GetSpritesheetRows() const {
	return spritesheet_rows;
}

void RPG::SavePicture::SetSpritesheetRows(int32_t spritesheet_rows) {
	this->spritesheet_rows = spritesheet_rows;
}

int32_t RPG::SavePicture::GetSpritesheetFrame() const {
	return spritesheet_frame;
}

void RPG::SavePicture::SetSpritesheetFrame(int32_t spritesheet_frame) {
	this->spritesheet_frame = spritesheet_frame;
}

int32_t RPG::SavePicture::GetSpritesheetSpeed() const {
	return spritesheet_speed;
}

void RPG::SavePicture::SetSpritesheetSpeed(int32_t spritesheet_speed) {
	this->spritesheet_speed = spritesheet_speed;
}

int32_t RPG::SavePicture::GetFrames() const {
	return frames;
}

void RPG::SavePicture::SetFrames(int32_t frames) {
	this->frames = frames;
}

bool RPG::SavePicture::GetSpritesheetPlayOnce() const {
	return spritesheet_play_once;
}

void RPG::SavePicture::SetSpritesheetPlayOnce(bool spritesheet_play_once) {
	this->spritesheet_play_once = spritesheet_play_once;
}

const int32_t& RPG::SavePicture::GetMapLayer() const  {
	return map_layer;
}

int32_t& RPG::SavePicture::GetMapLayer() {
	return map_layer;
}

void RPG::SavePicture::SetMapLayer(const int32_t& map_layer) {
	this->map_layer = map_layer;
}

const int32_t& RPG::SavePicture::GetBattleLayer() const  {
	return battle_layer;
}

int32_t& RPG::SavePicture::GetBattleLayer() {
	return battle_layer;
}

void RPG::SavePicture::SetBattleLayer(const int32_t& battle_layer) {
	this->battle_layer = battle_layer;
}

const RPG::SavePicture::Flags& RPG::SavePicture::GetFlags() const  {
	return flags;
}

RPG::SavePicture::Flags& RPG::SavePicture::GetFlags() {
	return flags;
}

void RPG::SavePicture::SetFlags(const RPG::SavePicture::Flags& flags) {
	this->flags = flags;
}

double RPG::SavePicture::GetFinishX() const {
	return finish_x;
}

void RPG::SavePicture::SetFinishX(double finish_x) {
	this->finish_x = finish_x;
}

double RPG::SavePicture::GetFinishY() const {
	return finish_y;
}

void RPG::SavePicture::SetFinishY(double finish_y) {
	this->finish_y = finish_y;
}

int32_t RPG::SavePicture::GetFinishMagnify() const {
	return finish_magnify;
}

void RPG::SavePicture::SetFinishMagnify(int32_t finish_magnify) {
	this->finish_magnify = finish_magnify;
}

int32_t RPG::SavePicture::GetFinishTopTrans() const {
	return finish_top_trans;
}

void RPG::SavePicture::SetFinishTopTrans(int32_t finish_top_trans) {
	this->finish_top_trans = finish_top_trans;
}

int32_t RPG::SavePicture::GetFinishBotTrans() const {
	return finish_bot_trans;
}

void RPG::SavePicture::SetFinishBotTrans(int32_t finish_bot_trans) {
	this->finish_bot_trans = finish_bot_trans;
}

int32_t RPG::SavePicture::GetFinishRed() const {
	return finish_red;
}

void RPG::SavePicture::SetFinishRed(int32_t finish_red) {
	this->finish_red = finish_red;
}

int32_t RPG::SavePicture::GetFinishGreen() const {
	return finish_green;
}

void RPG::SavePicture::SetFinishGreen(int32_t finish_green) {
	this->finish_green = finish_green;
}

int32_t RPG::SavePicture::GetFinishBlue() const {
	return finish_blue;
}

void RPG::SavePicture::SetFinishBlue(int32_t finish_blue) {
	this->finish_blue = finish_blue;
}

int32_t RPG::SavePicture::GetFinishSat() const {
	return finish_sat;
}

void RPG::SavePicture::SetFinishSat(int32_t finish_sat) {
	this->finish_sat = finish_sat;
}

int32_t RPG::SavePicture::GetFinishEffect() const {
	return finish_effect;
}

void RPG::SavePicture::SetFinishEffect(int32_t finish_effect) {
	this->finish_effect = finish_effect;
}

int32_t RPG::SavePicture::GetTimeLeft() const {
	return time_left;
}

void RPG::SavePicture::SetTimeLeft(int32_t time_left) {
	this->time_left = time_left;
}

double RPG::SavePicture::GetCurrentRotation() const {
	return current_rotation;
}

void RPG::SavePicture::SetCurrentRotation(double current_rotation) {
	this->current_rotation = current_rotation;
}

int32_t RPG::SavePicture::GetCurrentWaver() const {
	return current_waver;
}

void RPG::SavePicture::SetCurrentWaver(int32_t current_waver) {
	this->current_waver = current_waver;
}

