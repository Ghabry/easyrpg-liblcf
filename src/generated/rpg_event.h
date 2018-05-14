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

#ifndef LCF_RPG_EVENT_H
#define LCF_RPG_EVENT_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_eventpage.h"

/**
 * RPG::Event class.
 */
namespace RPG {
	class Event {
	public:
		int ID = 0;
		std::string name;
		int32_t x = 0;
		int32_t y = 0;
		std::vector<EventPage> pages;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int32_t GetX() const;
		void SetX(int32_t x);

		int32_t GetY() const;
		void SetY(int32_t y);

		const std::vector<EventPage>& GetPages() const;
		std::vector<EventPage>& GetPages();

	};
}

#endif
