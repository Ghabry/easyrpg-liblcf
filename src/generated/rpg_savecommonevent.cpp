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
#include "rpg_savecommonevent.h"


const RPG::SaveEventData& RPG::SaveCommonEvent::GetEventData() const  {
	return event_data;
}

RPG::SaveEventData& RPG::SaveCommonEvent::GetEventData() {
	return event_data;
}

void RPG::SaveCommonEvent::SetEventData(const RPG::SaveEventData& event_data) {
	this->event_data = event_data;
}

