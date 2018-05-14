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
#include "rpg_attribute.h"


const std::string& RPG::Attribute::GetName() const  {
	return name;
}

std::string& RPG::Attribute::GetName() {
	return name;
}

void RPG::Attribute::SetName(const std::string& name) {
	this->name = name;
}

const int32_t& RPG::Attribute::GetType() const  {
	return type;
}

int32_t& RPG::Attribute::GetType() {
	return type;
}

void RPG::Attribute::SetType(const int32_t& type) {
	this->type = type;
}

int32_t RPG::Attribute::GetARate() const {
	return a_rate;
}

void RPG::Attribute::SetARate(int32_t a_rate) {
	this->a_rate = a_rate;
}

int32_t RPG::Attribute::GetBRate() const {
	return b_rate;
}

void RPG::Attribute::SetBRate(int32_t b_rate) {
	this->b_rate = b_rate;
}

int32_t RPG::Attribute::GetCRate() const {
	return c_rate;
}

void RPG::Attribute::SetCRate(int32_t c_rate) {
	this->c_rate = c_rate;
}

int32_t RPG::Attribute::GetDRate() const {
	return d_rate;
}

void RPG::Attribute::SetDRate(int32_t d_rate) {
	this->d_rate = d_rate;
}

int32_t RPG::Attribute::GetERate() const {
	return e_rate;
}

void RPG::Attribute::SetERate(int32_t e_rate) {
	this->e_rate = e_rate;
}

