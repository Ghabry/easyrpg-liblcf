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
#include "rpg_rect.h"


uint32_t RPG::Rect::GetL() const {
	return getter<uint32_t>("l");
}

void RPG::Rect::SetL(uint32_t l) {
	setter<uint32_t>("l", l);
}

uint32_t RPG::Rect::GetT() const {
	return getter<uint32_t>("t");
}

void RPG::Rect::SetT(uint32_t t) {
	setter<uint32_t>("t", t);
}

uint32_t RPG::Rect::GetR() const {
	return getter<uint32_t>("r");
}

void RPG::Rect::SetR(uint32_t r) {
	setter<uint32_t>("r", r);
}

uint32_t RPG::Rect::GetB() const {
	return getter<uint32_t>("b");
}

void RPG::Rect::SetB(uint32_t b) {
	setter<uint32_t>("b", b);
}

