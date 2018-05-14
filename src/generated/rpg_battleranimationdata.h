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

#ifndef LCF_RPG_BATTLERANIMATIONDATA_H
#define LCF_RPG_BATTLERANIMATIONDATA_H

// Headers
#include <stdint.h>

/**
 * RPG::BattlerAnimationData class.
 */
namespace RPG {
	class BattlerAnimationData {
	public:
		enum Movement {
			Movement_none = 0,
			Movement_step = 1,
			Movement_jump = 2,
			Movement_move = 3
		};
		enum AfterImage {
			AfterImage_none = 0,
			AfterImage_add = 1
		};

		int ID = 0;
		int32_t move = 0;
		int32_t after_image = 0;
		int32_t pose = 0;
		const int32_t& GetMove() const;
		int32_t& GetMove();
		void SetMove(const int32_t& move);

		const int32_t& GetAfterImage() const;
		int32_t& GetAfterImage();
		void SetAfterImage(const int32_t& after_image);

		int32_t GetPose() const;
		void SetPose(int32_t pose);

	};
}

#endif
