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

#ifndef LCF_RPG_ATTRIBUTE_H
#define LCF_RPG_ATTRIBUTE_H

// Headers
#include <stdint.h>
#include <string>

/**
 * RPG::Attribute class.
 */
namespace RPG {
	class Attribute {
	public:
		enum Type {
			Type_physical = 0,
			Type_magical = 1
		};

		int ID = 0;
		std::string name;
		int32_t type = 0;
		int32_t a_rate = 300;
		int32_t b_rate = 200;
		int32_t c_rate = 100;
		int32_t d_rate = 50;
		int32_t e_rate = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const int32_t& GetType() const;
		int32_t& GetType();
		void SetType(const int32_t& type);

		int32_t GetARate() const;
		void SetARate(int32_t a_rate);

		int32_t GetBRate() const;
		void SetBRate(int32_t b_rate);

		int32_t GetCRate() const;
		void SetCRate(int32_t c_rate);

		int32_t GetDRate() const;
		void SetDRate(int32_t d_rate);

		int32_t GetERate() const;
		void SetERate(int32_t e_rate);

	};
}

#endif
