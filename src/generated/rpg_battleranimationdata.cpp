/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lcf/rpg/battleranimationdata.h"

namespace lcf {
namespace rpg {

std::ostream& operator<<(std::ostream& os, const BattlerAnimationData& obj) {
	os << "BattlerAnimationData{";
	os << "move="<< obj.move;
	os << ", after_image="<< obj.after_image;
	os << ", pose="<< obj.pose;
	os << "}";
	return os;
}

} // namespace rpg
} // namespace lcf
