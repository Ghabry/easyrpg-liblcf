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
#include "rpg_base.h"
#include <string>
#include <vector>
#include "rpg_eventcommand.h"

/**
 * RPG::CommonEvent class.
 */
namespace RPG {
	class CommonEvent : public Base {
	public:
		enum Trigger {
			Trigger_automatic = 3,
			Trigger_parallel = 4,
			Trigger_call = 5
		};

		CommonEvent() {}
		int ID = 0;
		std::string name;
		int32_t trigger = 0;
		bool switch_flag = false;
		int32_t switch_id = 1;
		std::vector<EventCommand> event_commands;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const int32_t& GetTrigger() const;
		int32_t& GetTrigger();
		void SetTrigger(const int32_t& trigger);

		bool GetSwitchFlag() const;
		void SetSwitchFlag(bool switch_flag);

		const int32_t& GetSwitchId() const;
		int32_t& GetSwitchId();
		void SetSwitchId(const int32_t& switch_id);


		const std::vector<EventCommand>& GetEventCommands() const;
		std::vector<EventCommand>& GetEventCommands();

	};
}

#endif
