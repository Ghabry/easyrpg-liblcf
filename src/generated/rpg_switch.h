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

#ifndef LCF_RPG_SWITCH_H
#define LCF_RPG_SWITCH_H

// Headers
#include <string>
#include "rpg_base.h"

/**
 * RPG::Switch class.
 */
namespace RPG {
	class Switch : Base {
	public:
		Switch() {}
		Switch(rapidjson::Value& json_values);
		int ID = 0;
		std::string name;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

	};
}

#endif
