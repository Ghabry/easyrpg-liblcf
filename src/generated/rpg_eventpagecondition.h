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

/**
 * RPG::EventPageCondition class.
 */
namespace RPG {
	class EventPageCondition {
	public:
		enum Comparison {
			Comparison_equal = 0,
			Comparison_greater_equal = 1,
			Comparison_less_equal = 2,
			Comparison_greater = 3,
			Comparison_less = 4,
			Comparison_not_equal = 5
		};

		struct Flags {
			bool switch_a;
			bool switch_b;
			bool variable;
			bool item;
			bool actor;
			bool timer;
			bool timer2;
		} flags;
		int switch_a_id = 1;
		int switch_b_id = 1;
		int variable_id = 1;
		int variable_value = 0;
		int item_id = 1;
		int actor_id = 1;
		int timer_sec = 0;
		int timer2_sec = 0;
		int compare_operator = 1;
		const Flags& GetFlags() const;
		Flags& GetFlags();
		void SetFlags(const Flags& flags);

		int GetSwitchAId() const;
		void SetSwitchAId(int switch_a_id);

		int GetSwitchBId() const;
		void SetSwitchBId(int switch_b_id);

		int GetVariableId() const;
		void SetVariableId(int variable_id);

		int GetVariableValue() const;
		void SetVariableValue(int variable_value);

		int GetItemId() const;
		void SetItemId(int item_id);

		int GetActorId() const;
		void SetActorId(int actor_id);

		int GetTimerSec() const;
		void SetTimerSec(int timer_sec);

		int GetTimer2Sec() const;
		void SetTimer2Sec(int timer2_sec);

		int GetCompareOperator() const;
		void SetCompareOperator(int compare_operator);

	};
}

#endif
