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

#ifndef LCF_RPG_EVENTPAGECONDITION_H
#define LCF_RPG_EVENTPAGECONDITION_H

// Headers
#include "rpg_base.h"
#include <stdint.h>

/**
 * RPG::EventPageCondition class.
 */
namespace RPG {
	class EventPageCondition : public Base {
	public:
		enum Comparison {
			Comparison_equal = 0,
			Comparison_greater_equal = 1,
			Comparison_less_equal = 2,
			Comparison_greater = 3,
			Comparison_less = 4,
			Comparison_not_equal = 5
		};

		EventPageCondition() {}
		struct Flags : Flags_Base {
			bool switch_a = false;
			bool switch_b = false;
			bool variable = false;
			bool item = false;
			bool actor = false;
			bool timer = false;
			bool timer2 = false;
		} flags;
		int32_t switch_a_id = 1;
		int32_t switch_b_id = 1;
		int32_t variable_id = 1;
		int32_t variable_value = 0;
		int32_t item_id = 1;
		int32_t actor_id = 1;
		int32_t timer_sec = 0;
		int32_t timer2_sec = 0;
		int32_t compare_operator = 1;
		const Flags& GetFlags() const;
		Flags& GetFlags();
		void SetFlags(const Flags& flags);

		const int32_t& GetSwitchAId() const;
		int32_t& GetSwitchAId();
		void SetSwitchAId(const int32_t& switch_a_id);

		const int32_t& GetSwitchBId() const;
		int32_t& GetSwitchBId();
		void SetSwitchBId(const int32_t& switch_b_id);

		const int32_t& GetVariableId() const;
		int32_t& GetVariableId();
		void SetVariableId(const int32_t& variable_id);

		int32_t GetVariableValue() const;
		void SetVariableValue(int32_t variable_value);

		const int32_t& GetItemId() const;
		int32_t& GetItemId();
		void SetItemId(const int32_t& item_id);

		const int32_t& GetActorId() const;
		int32_t& GetActorId();
		void SetActorId(const int32_t& actor_id);

		int32_t GetTimerSec() const;
		void SetTimerSec(int32_t timer_sec);

		int32_t GetTimer2Sec() const;
		void SetTimer2Sec(int32_t timer2_sec);

		const int32_t& GetCompareOperator() const;
		int32_t& GetCompareOperator();
		void SetCompareOperator(const int32_t& compare_operator);

	};
}

#endif
