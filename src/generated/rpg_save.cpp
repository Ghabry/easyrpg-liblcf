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
#include "rpg_save.h"


const RPG::SaveTitle& RPG::Save::GetTitle() const  {
	return title;
}

RPG::SaveTitle& RPG::Save::GetTitle() {
	return title;
}

void RPG::Save::SetTitle(const RPG::SaveTitle& title) {
	this->title = title;
}

const RPG::SaveSystem& RPG::Save::GetSystem() const  {
	return system;
}

RPG::SaveSystem& RPG::Save::GetSystem() {
	return system;
}

void RPG::Save::SetSystem(const RPG::SaveSystem& system) {
	this->system = system;
}

const RPG::SaveScreen& RPG::Save::GetScreen() const  {
	return screen;
}

RPG::SaveScreen& RPG::Save::GetScreen() {
	return screen;
}

void RPG::Save::SetScreen(const RPG::SaveScreen& screen) {
	this->screen = screen;
}

const std::vector<RPG::SavePicture>& RPG::Save::GetPictures() const  {
	return pictures;
}

std::vector<RPG::SavePicture>& RPG::Save::GetPictures() {
	return pictures;
}

const RPG::SavePartyLocation& RPG::Save::GetPartyLocation() const  {
	return party_location;
}

RPG::SavePartyLocation& RPG::Save::GetPartyLocation() {
	return party_location;
}

void RPG::Save::SetPartyLocation(const RPG::SavePartyLocation& party_location) {
	this->party_location = party_location;
}

const RPG::SaveVehicleLocation& RPG::Save::GetBoatLocation() const  {
	return boat_location;
}

RPG::SaveVehicleLocation& RPG::Save::GetBoatLocation() {
	return boat_location;
}

void RPG::Save::SetBoatLocation(const RPG::SaveVehicleLocation& boat_location) {
	this->boat_location = boat_location;
}

const RPG::SaveVehicleLocation& RPG::Save::GetShipLocation() const  {
	return ship_location;
}

RPG::SaveVehicleLocation& RPG::Save::GetShipLocation() {
	return ship_location;
}

void RPG::Save::SetShipLocation(const RPG::SaveVehicleLocation& ship_location) {
	this->ship_location = ship_location;
}

const RPG::SaveVehicleLocation& RPG::Save::GetAirshipLocation() const  {
	return airship_location;
}

RPG::SaveVehicleLocation& RPG::Save::GetAirshipLocation() {
	return airship_location;
}

void RPG::Save::SetAirshipLocation(const RPG::SaveVehicleLocation& airship_location) {
	this->airship_location = airship_location;
}

const std::vector<RPG::SaveActor>& RPG::Save::GetActors() const  {
	return actors;
}

std::vector<RPG::SaveActor>& RPG::Save::GetActors() {
	return actors;
}

const RPG::SaveInventory& RPG::Save::GetInventory() const  {
	return inventory;
}

RPG::SaveInventory& RPG::Save::GetInventory() {
	return inventory;
}

void RPG::Save::SetInventory(const RPG::SaveInventory& inventory) {
	this->inventory = inventory;
}

const std::vector<RPG::SaveTarget>& RPG::Save::GetTargets() const  {
	return targets;
}

std::vector<RPG::SaveTarget>& RPG::Save::GetTargets() {
	return targets;
}

const RPG::SaveMapInfo& RPG::Save::GetMapInfo() const  {
	return map_info;
}

RPG::SaveMapInfo& RPG::Save::GetMapInfo() {
	return map_info;
}

void RPG::Save::SetMapInfo(const RPG::SaveMapInfo& map_info) {
	this->map_info = map_info;
}

int32_t RPG::Save::GetPanoramaData() const {
	return panorama_data;
}

void RPG::Save::SetPanoramaData(int32_t panorama_data) {
	this->panorama_data = panorama_data;
}

const RPG::SaveEventData& RPG::Save::GetEvents() const  {
	return events;
}

RPG::SaveEventData& RPG::Save::GetEvents() {
	return events;
}

void RPG::Save::SetEvents(const RPG::SaveEventData& events) {
	this->events = events;
}

const std::vector<RPG::SaveCommonEvent>& RPG::Save::GetCommonEvents() const  {
	return common_events;
}

std::vector<RPG::SaveCommonEvent>& RPG::Save::GetCommonEvents() {
	return common_events;
}

