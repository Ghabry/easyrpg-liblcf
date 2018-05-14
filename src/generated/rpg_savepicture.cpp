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


const std::string& RPG::SavePicture::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::SavePicture::GetName() {
	return getter<std::string&>("name");
}

void RPG::SavePicture::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

double RPG::SavePicture::GetStartX() const {
	return getter<double>("start_x");
}

void RPG::SavePicture::SetStartX(double start_x) {
	setter<double>("start_x", start_x);
}

double RPG::SavePicture::GetStartY() const {
	return getter<double>("start_y");
}

void RPG::SavePicture::SetStartY(double start_y) {
	setter<double>("start_y", start_y);
}

double RPG::SavePicture::GetCurrentX() const {
	return getter<double>("current_x");
}

void RPG::SavePicture::SetCurrentX(double current_x) {
	setter<double>("current_x", current_x);
}

double RPG::SavePicture::GetCurrentY() const {
	return getter<double>("current_y");
}

void RPG::SavePicture::SetCurrentY(double current_y) {
	setter<double>("current_y", current_y);
}

bool RPG::SavePicture::GetFixedToMap() const {
	return getter<bool>("fixed_to_map");
}

void RPG::SavePicture::SetFixedToMap(bool fixed_to_map) {
	setter<bool>("fixed_to_map", fixed_to_map);
}

double RPG::SavePicture::GetCurrentMagnify() const {
	return getter<double>("current_magnify");
}

void RPG::SavePicture::SetCurrentMagnify(double current_magnify) {
	setter<double>("current_magnify", current_magnify);
}

double RPG::SavePicture::GetCurrentTopTrans() const {
	return getter<double>("current_top_trans");
}

void RPG::SavePicture::SetCurrentTopTrans(double current_top_trans) {
	setter<double>("current_top_trans", current_top_trans);
}

bool RPG::SavePicture::GetTransparency() const {
	return getter<bool>("transparency");
}

void RPG::SavePicture::SetTransparency(bool transparency) {
	setter<bool>("transparency", transparency);
}

double RPG::SavePicture::GetCurrentRed() const {
	return getter<double>("current_red");
}

void RPG::SavePicture::SetCurrentRed(double current_red) {
	setter<double>("current_red", current_red);
}

double RPG::SavePicture::GetCurrentGreen() const {
	return getter<double>("current_green");
}

void RPG::SavePicture::SetCurrentGreen(double current_green) {
	setter<double>("current_green", current_green);
}

double RPG::SavePicture::GetCurrentBlue() const {
	return getter<double>("current_blue");
}

void RPG::SavePicture::SetCurrentBlue(double current_blue) {
	setter<double>("current_blue", current_blue);
}

double RPG::SavePicture::GetCurrentSat() const {
	return getter<double>("current_sat");
}

void RPG::SavePicture::SetCurrentSat(double current_sat) {
	setter<double>("current_sat", current_sat);
}

int32_t RPG::SavePicture::GetEffectMode() const {
	return getter<int32_t>("effect_mode");
}

void RPG::SavePicture::SetEffectMode(int32_t effect_mode) {
	setter<int32_t>("effect_mode", effect_mode);
}

double RPG::SavePicture::GetCurrentEffect() const {
	return getter<double>("current_effect");
}

void RPG::SavePicture::SetCurrentEffect(double current_effect) {
	setter<double>("current_effect", current_effect);
}

double RPG::SavePicture::GetCurrentBotTrans() const {
	return getter<double>("current_bot_trans");
}

void RPG::SavePicture::SetCurrentBotTrans(double current_bot_trans) {
	setter<double>("current_bot_trans", current_bot_trans);
}

int32_t RPG::SavePicture::GetSpritesheetCols() const {
	return getter<int32_t>("spritesheet_cols");
}

void RPG::SavePicture::SetSpritesheetCols(int32_t spritesheet_cols) {
	setter<int32_t>("spritesheet_cols", spritesheet_cols);
}

int32_t RPG::SavePicture::GetSpritesheetRows() const {
	return getter<int32_t>("spritesheet_rows");
}

void RPG::SavePicture::SetSpritesheetRows(int32_t spritesheet_rows) {
	setter<int32_t>("spritesheet_rows", spritesheet_rows);
}

int32_t RPG::SavePicture::GetSpritesheetFrame() const {
	return getter<int32_t>("spritesheet_frame");
}

void RPG::SavePicture::SetSpritesheetFrame(int32_t spritesheet_frame) {
	setter<int32_t>("spritesheet_frame", spritesheet_frame);
}

int32_t RPG::SavePicture::GetSpritesheetSpeed() const {
	return getter<int32_t>("spritesheet_speed");
}

void RPG::SavePicture::SetSpritesheetSpeed(int32_t spritesheet_speed) {
	setter<int32_t>("spritesheet_speed", spritesheet_speed);
}

int32_t RPG::SavePicture::GetFrames() const {
	return getter<int32_t>("frames");
}

void RPG::SavePicture::SetFrames(int32_t frames) {
	setter<int32_t>("frames", frames);
}

bool RPG::SavePicture::GetSpritesheetPlayOnce() const {
	return getter<bool>("spritesheet_play_once");
}

void RPG::SavePicture::SetSpritesheetPlayOnce(bool spritesheet_play_once) {
	setter<bool>("spritesheet_play_once", spritesheet_play_once);
}

const int32_t& RPG::SavePicture::GetMapLayer() const {
	return getter<const int32_t&>("map_layer");
}

int32_t& RPG::SavePicture::GetMapLayer() {
	return getter<int32_t&>("map_layer");
}

void RPG::SavePicture::SetMapLayer(const int32_t& map_layer) {
	setter<int32_t>("map_layer", map_layer);
}

const int32_t& RPG::SavePicture::GetBattleLayer() const {
	return getter<const int32_t&>("battle_layer");
}

int32_t& RPG::SavePicture::GetBattleLayer() {
	return getter<int32_t&>("battle_layer");
}

void RPG::SavePicture::SetBattleLayer(const int32_t& battle_layer) {
	setter<int32_t>("battle_layer", battle_layer);
}

const RPG::SavePicture::Flags& RPG::SavePicture::GetFlags() const {
	return getter<const RPG::SavePicture::Flags&>("flags");
}

RPG::SavePicture::Flags& RPG::SavePicture::GetFlags() {
	return getter<RPG::SavePicture::Flags&>("flags");
}

void RPG::SavePicture::SetFlags(const RPG::SavePicture::Flags& flags) {
	setter<RPG::SavePicture::Flags>("flags", flags);
}

double RPG::SavePicture::GetFinishX() const {
	return getter<double>("finish_x");
}

void RPG::SavePicture::SetFinishX(double finish_x) {
	setter<double>("finish_x", finish_x);
}

double RPG::SavePicture::GetFinishY() const {
	return getter<double>("finish_y");
}

void RPG::SavePicture::SetFinishY(double finish_y) {
	setter<double>("finish_y", finish_y);
}

int32_t RPG::SavePicture::GetFinishMagnify() const {
	return getter<int32_t>("finish_magnify");
}

void RPG::SavePicture::SetFinishMagnify(int32_t finish_magnify) {
	setter<int32_t>("finish_magnify", finish_magnify);
}

int32_t RPG::SavePicture::GetFinishTopTrans() const {
	return getter<int32_t>("finish_top_trans");
}

void RPG::SavePicture::SetFinishTopTrans(int32_t finish_top_trans) {
	setter<int32_t>("finish_top_trans", finish_top_trans);
}

int32_t RPG::SavePicture::GetFinishBotTrans() const {
	return getter<int32_t>("finish_bot_trans");
}

void RPG::SavePicture::SetFinishBotTrans(int32_t finish_bot_trans) {
	setter<int32_t>("finish_bot_trans", finish_bot_trans);
}

int32_t RPG::SavePicture::GetFinishRed() const {
	return getter<int32_t>("finish_red");
}

void RPG::SavePicture::SetFinishRed(int32_t finish_red) {
	setter<int32_t>("finish_red", finish_red);
}

int32_t RPG::SavePicture::GetFinishGreen() const {
	return getter<int32_t>("finish_green");
}

void RPG::SavePicture::SetFinishGreen(int32_t finish_green) {
	setter<int32_t>("finish_green", finish_green);
}

int32_t RPG::SavePicture::GetFinishBlue() const {
	return getter<int32_t>("finish_blue");
}

void RPG::SavePicture::SetFinishBlue(int32_t finish_blue) {
	setter<int32_t>("finish_blue", finish_blue);
}

int32_t RPG::SavePicture::GetFinishSat() const {
	return getter<int32_t>("finish_sat");
}

void RPG::SavePicture::SetFinishSat(int32_t finish_sat) {
	setter<int32_t>("finish_sat", finish_sat);
}

int32_t RPG::SavePicture::GetFinishEffect() const {
	return getter<int32_t>("finish_effect");
}

void RPG::SavePicture::SetFinishEffect(int32_t finish_effect) {
	setter<int32_t>("finish_effect", finish_effect);
}

int32_t RPG::SavePicture::GetTimeLeft() const {
	return getter<int32_t>("time_left");
}

void RPG::SavePicture::SetTimeLeft(int32_t time_left) {
	setter<int32_t>("time_left", time_left);
}

double RPG::SavePicture::GetCurrentRotation() const {
	return getter<double>("current_rotation");
}

void RPG::SavePicture::SetCurrentRotation(double current_rotation) {
	setter<double>("current_rotation", current_rotation);
}

int32_t RPG::SavePicture::GetCurrentWaver() const {
	return getter<int32_t>("current_waver");
}

void RPG::SavePicture::SetCurrentWaver(int32_t current_waver) {
	setter<int32_t>("current_waver", current_waver);
}

