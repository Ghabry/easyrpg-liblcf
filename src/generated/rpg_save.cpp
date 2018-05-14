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


const RPG::SaveTitle& RPG::Save::GetTitle() const {
	return getter<const RPG::SaveTitle&>("title");
}

RPG::SaveTitle& RPG::Save::GetTitle() {
	return getter<RPG::SaveTitle&>("title");
}

void RPG::Save::SetTitle(const RPG::SaveTitle& title) {
	setter<RPG::SaveTitle>("title", title);
}

const RPG::SaveSystem& RPG::Save::GetSystem() const {
	return getter<const RPG::SaveSystem&>("system");
}

RPG::SaveSystem& RPG::Save::GetSystem() {
	return getter<RPG::SaveSystem&>("system");
}

void RPG::Save::SetSystem(const RPG::SaveSystem& system) {
	setter<RPG::SaveSystem>("system", system);
}

const RPG::SaveScreen& RPG::Save::GetScreen() const {
	return getter<const RPG::SaveScreen&>("screen");
}

RPG::SaveScreen& RPG::Save::GetScreen() {
	return getter<RPG::SaveScreen&>("screen");
}

void RPG::Save::SetScreen(const RPG::SaveScreen& screen) {
	setter<RPG::SaveScreen>("screen", screen);
}

const std::vector<RPG::SavePicture>& RPG::Save::GetPictures() const {
	return vector_getter<const std::vector<RPG::SavePicture>&, RPG::SavePicture>("pictures");
}

std::vector<RPG::SavePicture>& RPG::Save::GetPictures() {
	return vector_getter<std::vector<RPG::SavePicture>&, RPG::SavePicture>("pictures");
}

const RPG::SavePartyLocation& RPG::Save::GetPartyLocation() const {
	return getter<const RPG::SavePartyLocation&>("party_location");
}

RPG::SavePartyLocation& RPG::Save::GetPartyLocation() {
	return getter<RPG::SavePartyLocation&>("party_location");
}

void RPG::Save::SetPartyLocation(const RPG::SavePartyLocation& party_location) {
	setter<RPG::SavePartyLocation>("party_location", party_location);
}

const RPG::SaveVehicleLocation& RPG::Save::GetBoatLocation() const {
	return getter<const RPG::SaveVehicleLocation&>("boat_location");
}

RPG::SaveVehicleLocation& RPG::Save::GetBoatLocation() {
	return getter<RPG::SaveVehicleLocation&>("boat_location");
}

void RPG::Save::SetBoatLocation(const RPG::SaveVehicleLocation& boat_location) {
	setter<RPG::SaveVehicleLocation>("boat_location", boat_location);
}

const RPG::SaveVehicleLocation& RPG::Save::GetShipLocation() const {
	return getter<const RPG::SaveVehicleLocation&>("ship_location");
}

RPG::SaveVehicleLocation& RPG::Save::GetShipLocation() {
	return getter<RPG::SaveVehicleLocation&>("ship_location");
}

void RPG::Save::SetShipLocation(const RPG::SaveVehicleLocation& ship_location) {
	setter<RPG::SaveVehicleLocation>("ship_location", ship_location);
}

const RPG::SaveVehicleLocation& RPG::Save::GetAirshipLocation() const {
	return getter<const RPG::SaveVehicleLocation&>("airship_location");
}

RPG::SaveVehicleLocation& RPG::Save::GetAirshipLocation() {
	return getter<RPG::SaveVehicleLocation&>("airship_location");
}

void RPG::Save::SetAirshipLocation(const RPG::SaveVehicleLocation& airship_location) {
	setter<RPG::SaveVehicleLocation>("airship_location", airship_location);
}

const std::vector<RPG::SaveActor>& RPG::Save::GetActors() const {
	return vector_getter<const std::vector<RPG::SaveActor>&, RPG::SaveActor>("actors");
}

std::vector<RPG::SaveActor>& RPG::Save::GetActors() {
	return vector_getter<std::vector<RPG::SaveActor>&, RPG::SaveActor>("actors");
}

const RPG::SaveInventory& RPG::Save::GetInventory() const {
	return getter<const RPG::SaveInventory&>("inventory");
}

RPG::SaveInventory& RPG::Save::GetInventory() {
	return getter<RPG::SaveInventory&>("inventory");
}

void RPG::Save::SetInventory(const RPG::SaveInventory& inventory) {
	setter<RPG::SaveInventory>("inventory", inventory);
}

const std::vector<RPG::SaveTarget>& RPG::Save::GetTargets() const {
	return vector_getter<const std::vector<RPG::SaveTarget>&, RPG::SaveTarget>("targets");
}

std::vector<RPG::SaveTarget>& RPG::Save::GetTargets() {
	return vector_getter<std::vector<RPG::SaveTarget>&, RPG::SaveTarget>("targets");
}

const RPG::SaveMapInfo& RPG::Save::GetMapInfo() const {
	return getter<const RPG::SaveMapInfo&>("map_info");
}

RPG::SaveMapInfo& RPG::Save::GetMapInfo() {
	return getter<RPG::SaveMapInfo&>("map_info");
}

void RPG::Save::SetMapInfo(const RPG::SaveMapInfo& map_info) {
	setter<RPG::SaveMapInfo>("map_info", map_info);
}

int32_t RPG::Save::GetPanoramaData() const {
	return getter<int32_t>("panorama_data");
}

void RPG::Save::SetPanoramaData(int32_t panorama_data) {
	setter<int32_t>("panorama_data", panorama_data);
}

const RPG::SaveEventData& RPG::Save::GetEvents() const {
	return getter<const RPG::SaveEventData&>("events");
}

RPG::SaveEventData& RPG::Save::GetEvents() {
	return getter<RPG::SaveEventData&>("events");
}

void RPG::Save::SetEvents(const RPG::SaveEventData& events) {
	setter<RPG::SaveEventData>("events", events);
}

const std::vector<RPG::SaveCommonEvent>& RPG::Save::GetCommonEvents() const {
	return vector_getter<const std::vector<RPG::SaveCommonEvent>&, RPG::SaveCommonEvent>("common_events");
}

std::vector<RPG::SaveCommonEvent>& RPG::Save::GetCommonEvents() {
	return vector_getter<std::vector<RPG::SaveCommonEvent>&, RPG::SaveCommonEvent>("common_events");
}

