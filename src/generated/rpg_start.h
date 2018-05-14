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

#ifndef LCF_RPG_START_H
#define LCF_RPG_START_H

// Headers
#include "rpg_base.h"
#include <stdint.h>

/**
 * RPG::Start class.
 */
namespace RPG {
	class Start : public Base {
	public:
		Start() {}
		int32_t party_map_id = 0;
		int32_t party_x = 0;
		int32_t party_y = 0;
		int32_t boat_map_id = 0;
		int32_t boat_x = 0;
		int32_t boat_y = 0;
		int32_t ship_map_id = 0;
		int32_t ship_x = 0;
		int32_t ship_y = 0;
		int32_t airship_map_id = 0;
		int32_t airship_x = 0;
		int32_t airship_y = 0;
		const int32_t& GetPartyMapId() const;
		int32_t& GetPartyMapId();
		void SetPartyMapId(const int32_t& party_map_id);

		int32_t GetPartyX() const;
		void SetPartyX(int32_t party_x);

		int32_t GetPartyY() const;
		void SetPartyY(int32_t party_y);

		const int32_t& GetBoatMapId() const;
		int32_t& GetBoatMapId();
		void SetBoatMapId(const int32_t& boat_map_id);

		int32_t GetBoatX() const;
		void SetBoatX(int32_t boat_x);

		int32_t GetBoatY() const;
		void SetBoatY(int32_t boat_y);

		const int32_t& GetShipMapId() const;
		int32_t& GetShipMapId();
		void SetShipMapId(const int32_t& ship_map_id);

		int32_t GetShipX() const;
		void SetShipX(int32_t ship_x);

		int32_t GetShipY() const;
		void SetShipY(int32_t ship_y);

		const int32_t& GetAirshipMapId() const;
		int32_t& GetAirshipMapId();
		void SetAirshipMapId(const int32_t& airship_map_id);

		int32_t GetAirshipX() const;
		void SetAirshipX(int32_t airship_x);

		int32_t GetAirshipY() const;
		void SetAirshipY(int32_t airship_y);

	};
}

#endif
