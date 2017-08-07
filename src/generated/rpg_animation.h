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

#ifndef LCF_RPG_ANIMATION_H
#define LCF_RPG_ANIMATION_H

// Headers
#include <string>
#include <vector>
#include "rpg_animationframe.h"
#include "rpg_animationtiming.h"
#include "rpg_base.h"

/**
 * RPG::Animation class.
 */
namespace RPG {
	class Animation : Base {
	public:
		enum Scope {
			Scope_target = 0,
			Scope_screen = 1
		};
		enum Position {
			Position_up = 0,
			Position_middle = 1,
			Position_down = 2
		};

		Animation() {}
		Animation(rapidjson::Value& json_values);
		int ID = 0;
		std::string name;
		std::string animation_name;
		bool large = false;
		std::vector<AnimationTiming> timings;
		int scope = 0;
		int position = 2;
		std::vector<AnimationFrame> frames;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetAnimationName() const;
		std::string& GetAnimationName();
		void SetAnimationName(const std::string& animation_name);

		bool GetLarge() const;
		void SetLarge(bool large);

		const std::vector<AnimationTiming>& GetTimings() const;
		std::vector<AnimationTiming>& GetTimings();

		int GetScope() const;
		void SetScope(int scope);

		int GetPosition() const;
		void SetPosition(int position);

		const std::vector<AnimationFrame>& GetFrames() const;
		std::vector<AnimationFrame>& GetFrames();

	};
}

#endif
