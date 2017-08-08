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

#ifndef LCF_RPG_SAVETARGET_H
#define LCF_RPG_SAVETARGET_H

// Headers
#include "rpg_base.h"

/**
 * RPG::SaveTarget class.
 */
namespace RPG {
	class SaveTarget : Base {
	public:
		SaveTarget() {}
		SaveTarget(rapidjson::Value& json_values);
		int ID = 0;
		int GetMapId() const;
		void SetMapId(int map_id);

		int GetMapX() const;
		void SetMapX(int map_x);

		int GetMapY() const;
		void SetMapY(int map_y);

		bool GetSwitchOn() const;
		void SetSwitchOn(bool switch_on);

		int GetSwitchId() const;
		void SetSwitchId(int switch_id);

	};
}

#endif
