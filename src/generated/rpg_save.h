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

#ifndef LCF_RPG_SAVE_H
#define LCF_RPG_SAVE_H

// Headers
#include <stdint.h>
#include <vector>
#include "rpg_saveactor.h"
#include "rpg_savecommonevent.h"
#include "rpg_saveeventdata.h"
#include "rpg_saveinventory.h"
#include "rpg_savemapinfo.h"
#include "rpg_savepartylocation.h"
#include "rpg_savepicture.h"
#include "rpg_savescreen.h"
#include "rpg_savesystem.h"
#include "rpg_savetarget.h"
#include "rpg_savetitle.h"
#include "rpg_savevehiclelocation.h"

/**
 * RPG::Save class.
 */
namespace RPG {
	class Save {
	public:
		void Setup();
		SaveTitle title;
		SaveSystem system;
		SaveScreen screen;
		std::vector<SavePicture> pictures;
		SavePartyLocation party_location;
		SaveVehicleLocation boat_location;
		SaveVehicleLocation ship_location;
		SaveVehicleLocation airship_location;
		std::vector<SaveActor> actors;
		SaveInventory inventory;
		std::vector<SaveTarget> targets;
		SaveMapInfo map_info;
		int32_t panorama_data = -1;
		SaveEventData events;
		std::vector<SaveCommonEvent> common_events;
		const SaveTitle& GetTitle() const;
		SaveTitle& GetTitle();
		void SetTitle(const SaveTitle& title);

		const SaveSystem& GetSystem() const;
		SaveSystem& GetSystem();
		void SetSystem(const SaveSystem& system);

		const SaveScreen& GetScreen() const;
		SaveScreen& GetScreen();
		void SetScreen(const SaveScreen& screen);

		const std::vector<SavePicture>& GetPictures() const;
		std::vector<SavePicture>& GetPictures();

		const SavePartyLocation& GetPartyLocation() const;
		SavePartyLocation& GetPartyLocation();
		void SetPartyLocation(const SavePartyLocation& party_location);

		const SaveVehicleLocation& GetBoatLocation() const;
		SaveVehicleLocation& GetBoatLocation();
		void SetBoatLocation(const SaveVehicleLocation& boat_location);

		const SaveVehicleLocation& GetShipLocation() const;
		SaveVehicleLocation& GetShipLocation();
		void SetShipLocation(const SaveVehicleLocation& ship_location);

		const SaveVehicleLocation& GetAirshipLocation() const;
		SaveVehicleLocation& GetAirshipLocation();
		void SetAirshipLocation(const SaveVehicleLocation& airship_location);

		const std::vector<SaveActor>& GetActors() const;
		std::vector<SaveActor>& GetActors();

		const SaveInventory& GetInventory() const;
		SaveInventory& GetInventory();
		void SetInventory(const SaveInventory& inventory);

		const std::vector<SaveTarget>& GetTargets() const;
		std::vector<SaveTarget>& GetTargets();

		const SaveMapInfo& GetMapInfo() const;
		SaveMapInfo& GetMapInfo();
		void SetMapInfo(const SaveMapInfo& map_info);

		int32_t GetPanoramaData() const;
		void SetPanoramaData(int32_t panorama_data);

		const SaveEventData& GetEvents() const;
		SaveEventData& GetEvents();
		void SetEvents(const SaveEventData& events);

		const std::vector<SaveCommonEvent>& GetCommonEvents() const;
		std::vector<SaveCommonEvent>& GetCommonEvents();

	};
}

#endif
