/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEEVENTEXECFRAME_H
#define LCF_RPG_SAVEEVENTEXECFRAME_H

// Headers
#include <array>
#include <stdint.h>
#include <vector>
#include "lcf/rpg/eventcommand.h"
#include "lcf/context.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveEventExecFrame class.
 */
namespace lcf {
namespace rpg {
	class SaveEventExecFrame {
	public:
		int ID = 0;
		std::vector<EventCommand> commands;
		int32_t current_command = 0;
		int32_t event_id = 0;
		bool triggered_by_decision_key = false;
		std::vector<uint8_t> subcommand_path;
		int32_t maniac_event_info = 0;
		int32_t maniac_event_id = 0;
		int32_t maniac_event_page_id = 0;
		int32_t maniac_loop_info_size = 0;
		std::vector<int32_t> maniac_loop_info;
		struct EasyRpgRuntime_Flags {
			union {
				struct {
					bool conf_override_active;
					bool reserved_1;
					bool reserved_2;
					bool reserved_3;
					bool patch_destiny_on;
					bool patch_destiny_off;
					bool patch_dynrpg_on;
					bool patch_dynrpg_off;
					bool patch_maniac_on;
					bool patch_maniac_of;
					bool patch_common_this_event_on;
					bool patch_common_this_event_off;
					bool patch_unlock_pics_on;
					bool patch_unlock_pics_off;
					bool patch_keypatch_on;
					bool patch_keypatch_off;
					bool patch_rpg2k3_cmds_on;
					bool patch_rpg2k3_cmds_off;
					bool use_rpg2k_battle_system_on;
					bool use_rpg2k_battle_system_off;
				};
				std::array<bool, 20> flags;
			};
			EasyRpgRuntime_Flags() noexcept
			{}
		} easyrpg_runtime_flags;
	};

	inline bool operator==(const SaveEventExecFrame::EasyRpgRuntime_Flags& l, const SaveEventExecFrame::EasyRpgRuntime_Flags& r) {
		return l.flags == r.flags;
	}

	inline bool operator!=(const SaveEventExecFrame::EasyRpgRuntime_Flags& l, const SaveEventExecFrame::EasyRpgRuntime_Flags& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveEventExecFrame::EasyRpgRuntime_Flags& obj);

	inline bool operator==(const SaveEventExecFrame& l, const SaveEventExecFrame& r) {
		return l.commands == r.commands
		&& l.current_command == r.current_command
		&& l.event_id == r.event_id
		&& l.triggered_by_decision_key == r.triggered_by_decision_key
		&& l.subcommand_path == r.subcommand_path
		&& l.maniac_event_info == r.maniac_event_info
		&& l.maniac_event_id == r.maniac_event_id
		&& l.maniac_event_page_id == r.maniac_event_page_id
		&& l.maniac_loop_info_size == r.maniac_loop_info_size
		&& l.maniac_loop_info == r.maniac_loop_info
		&& l.easyrpg_runtime_flags == r.easyrpg_runtime_flags;
	}

	inline bool operator!=(const SaveEventExecFrame& l, const SaveEventExecFrame& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveEventExecFrame& obj);

	template <typename F, typename ParentCtx = Context<void,void>>
	void ForEachString(SaveEventExecFrame& obj, const F& f, const ParentCtx* parent_ctx = nullptr) {
		for (int i = 0; i < static_cast<int>(obj.commands.size()); ++i) {
			const auto ctx1 = Context<SaveEventExecFrame, ParentCtx>{ "commands", i, &obj, parent_ctx };
			ForEachString(obj.commands[i], f, &ctx1);
		}
		(void)obj;
		(void)f;
		(void)parent_ctx;
	}

} // namespace rpg
} // namespace lcf

#endif
