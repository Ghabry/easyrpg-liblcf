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

#ifndef LCF_RPG_SAVECOMMONEVENT_H
#define LCF_RPG_SAVECOMMONEVENT_H

// Headers
#include "rpg_base.h"
#include "rpg_saveeventdata.h"

/**
 * RPG::SaveCommonEvent class.
 */
namespace RPG {
	class SaveCommonEvent : public Base {
	public:
		SaveCommonEvent() {}
		int ID = 0;
		SaveEventData event_data;
		const SaveEventData& GetEventData() const;
		SaveEventData& GetEventData();
		void SetEventData(const SaveEventData& event_data);

	};
}

#endif
