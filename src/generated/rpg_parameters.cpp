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
#include "rpg_parameters.h"


const std::vector<int16_t>& RPG::Parameters::GetMaxhp() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("maxhp");
}

std::vector<int16_t>& RPG::Parameters::GetMaxhp() {
	return vector_getter<std::vector<int16_t>&, int16_t>("maxhp");
}

const std::vector<int16_t>& RPG::Parameters::GetMaxsp() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("maxsp");
}

std::vector<int16_t>& RPG::Parameters::GetMaxsp() {
	return vector_getter<std::vector<int16_t>&, int16_t>("maxsp");
}

const std::vector<int16_t>& RPG::Parameters::GetAttack() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("attack");
}

std::vector<int16_t>& RPG::Parameters::GetAttack() {
	return vector_getter<std::vector<int16_t>&, int16_t>("attack");
}

const std::vector<int16_t>& RPG::Parameters::GetDefense() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("defense");
}

std::vector<int16_t>& RPG::Parameters::GetDefense() {
	return vector_getter<std::vector<int16_t>&, int16_t>("defense");
}

const std::vector<int16_t>& RPG::Parameters::GetSpirit() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("spirit");
}

std::vector<int16_t>& RPG::Parameters::GetSpirit() {
	return vector_getter<std::vector<int16_t>&, int16_t>("spirit");
}

const std::vector<int16_t>& RPG::Parameters::GetAgility() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("agility");
}

std::vector<int16_t>& RPG::Parameters::GetAgility() {
	return vector_getter<std::vector<int16_t>&, int16_t>("agility");
}

