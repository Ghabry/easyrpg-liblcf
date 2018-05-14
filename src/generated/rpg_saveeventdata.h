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

#ifndef LCF_RPG_SAVEEVENTDATA_H
#define LCF_RPG_SAVEEVENTDATA_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <vector>
#include "rpg_saveeventcommands.h"

/**
 * RPG::SaveEventData class.
 */
namespace RPG {
	class SaveEventData : public Base {
	public:
		SaveEventData() {}
		std::vector<SaveEventCommands> commands;
		bool show_message = false;
		int32_t unknown_0b_escape = 0;
		bool wait_movement = false;
		bool keyinput_wait = false;
		uint8_t keyinput_variable = 0;
		bool keyinput_all_directions = false;
		bool keyinput_decision = false;
		bool keyinput_cancel = false;
		bool keyinput_numbers = false;
		bool keyinput_operators = false;
		bool keyinput_shift = false;
		bool keyinput_value_right = false;
		bool keyinput_value_up = false;
		int32_t wait_time = 0;
		int32_t keyinput_time_variable = -1;
		bool keyinput_down = false;
		bool keyinput_left = false;
		bool keyinput_right = false;
		bool keyinput_up = false;
		bool keyinput_timed = false;
		int32_t unknown_2a_time_left = 0;
		const std::vector<SaveEventCommands>& GetCommands() const;
		std::vector<SaveEventCommands>& GetCommands();

		bool GetShowMessage() const;
		void SetShowMessage(bool show_message);

		int32_t GetUnknown0bEscape() const;
		void SetUnknown0bEscape(int32_t unknown_0b_escape);

		bool GetWaitMovement() const;
		void SetWaitMovement(bool wait_movement);

		bool GetKeyinputWait() const;
		void SetKeyinputWait(bool keyinput_wait);

		uint8_t GetKeyinputVariable() const;
		void SetKeyinputVariable(uint8_t keyinput_variable);

		bool GetKeyinputAllDirections() const;
		void SetKeyinputAllDirections(bool keyinput_all_directions);

		bool GetKeyinputDecision() const;
		void SetKeyinputDecision(bool keyinput_decision);

		bool GetKeyinputCancel() const;
		void SetKeyinputCancel(bool keyinput_cancel);

		bool GetKeyinputNumbers() const;
		void SetKeyinputNumbers(bool keyinput_numbers);

		bool GetKeyinputOperators() const;
		void SetKeyinputOperators(bool keyinput_operators);

		bool GetKeyinputShift() const;
		void SetKeyinputShift(bool keyinput_shift);

		bool GetKeyinputValueRight() const;
		void SetKeyinputValueRight(bool keyinput_value_right);

		bool GetKeyinputValueUp() const;
		void SetKeyinputValueUp(bool keyinput_value_up);

		int32_t GetWaitTime() const;
		void SetWaitTime(int32_t wait_time);

		int32_t GetKeyinputTimeVariable() const;
		void SetKeyinputTimeVariable(int32_t keyinput_time_variable);

		bool GetKeyinputDown() const;
		void SetKeyinputDown(bool keyinput_down);

		bool GetKeyinputLeft() const;
		void SetKeyinputLeft(bool keyinput_left);

		bool GetKeyinputRight() const;
		void SetKeyinputRight(bool keyinput_right);

		bool GetKeyinputUp() const;
		void SetKeyinputUp(bool keyinput_up);

		bool GetKeyinputTimed() const;
		void SetKeyinputTimed(bool keyinput_timed);

		int32_t GetUnknown2aTimeLeft() const;
		void SetUnknown2aTimeLeft(int32_t unknown_2a_time_left);

	};
}

#endif
