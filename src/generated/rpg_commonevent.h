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

#ifndef LCF_RPG_COMMONEVENT_H
#define LCF_RPG_COMMONEVENT_H

// Headers
#include <string>
#include <vector>
#include "rpg_base.h"
#include "rpg_eventcommand.h"

/**
 * RPG::CommonEvent class.
 */
namespace RPG {
	class CommonEvent : Base {
	public:
		enum Trigger {
			Trigger_automatic = 3,
			Trigger_parallel = 4,
			Trigger_call = 5
		};

		CommonEvent() {}
		CommonEvent(rapidjson::Value& json_values);
		int ID = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int GetTrigger() const;
		void SetTrigger(int trigger);

		bool GetSwitchFlag() const;
		void SetSwitchFlag(bool switch_flag);

		int GetSwitchId() const;
		void SetSwitchId(int switch_id);


		const std::vector<EventCommand>& GetEventCommands() const;
		std::vector<EventCommand>& GetEventCommands();

	};
}

#endif
