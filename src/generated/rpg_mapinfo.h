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

#ifndef LCF_RPG_MAPINFO_H
#define LCF_RPG_MAPINFO_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_encounter.h"
#include "rpg_music.h"
#include "rpg_rect.h"

/**
 * RPG::MapInfo class.
 */
namespace RPG {
	class MapInfo : public Base {
	public:
		enum MusicType {
			MusicType_parent = 0,
			MusicType_event = 1,
			MusicType_specific = 2
		};
		enum BGMType {
			BGMType_parent = 0,
			BGMType_terrain = 1,
			BGMType_specific = 2
		};
		enum TriState {
			TriState_parent = 0,
			TriState_allow = 1,
			TriState_forbid = 2
		};

		MapInfo();
		void Init();
		int ID = 0;
		std::string name;
		int32_t parent_map = 0;
		int32_t indentation = 0;
		int32_t type = -1;
		int32_t scrollbar_x = 0;
		int32_t scrollbar_y = 0;
		bool expanded_node = false;
		int32_t music_type = 0;
		Music music;
		int32_t background_type = 0;
		std::string background_name;
		int32_t teleport = 0;
		int32_t escape = 0;
		int32_t save = 0;
		std::vector<Encounter> encounters;
		int32_t encounter_steps = 25;
		Rect area_rect;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const int32_t& GetParentMap() const;
		int32_t& GetParentMap();
		void SetParentMap(const int32_t& parent_map);

		int32_t GetIndentation() const;
		void SetIndentation(int32_t indentation);

		const int32_t& GetType() const;
		int32_t& GetType();
		void SetType(const int32_t& type);

		int32_t GetScrollbarX() const;
		void SetScrollbarX(int32_t scrollbar_x);

		int32_t GetScrollbarY() const;
		void SetScrollbarY(int32_t scrollbar_y);

		bool GetExpandedNode() const;
		void SetExpandedNode(bool expanded_node);

		const int32_t& GetMusicType() const;
		int32_t& GetMusicType();
		void SetMusicType(const int32_t& music_type);

		const Music& GetMusic() const;
		Music& GetMusic();
		void SetMusic(const Music& music);

		const int32_t& GetBackgroundType() const;
		int32_t& GetBackgroundType();
		void SetBackgroundType(const int32_t& background_type);

		const std::string& GetBackgroundName() const;
		std::string& GetBackgroundName();
		void SetBackgroundName(const std::string& background_name);

		const int32_t& GetTeleport() const;
		int32_t& GetTeleport();
		void SetTeleport(const int32_t& teleport);

		const int32_t& GetEscape() const;
		int32_t& GetEscape();
		void SetEscape(const int32_t& escape);

		const int32_t& GetSave() const;
		int32_t& GetSave();
		void SetSave(const int32_t& save);

		const std::vector<Encounter>& GetEncounters() const;
		std::vector<Encounter>& GetEncounters();

		int32_t GetEncounterSteps() const;
		void SetEncounterSteps(int32_t encounter_steps);

		const Rect& GetAreaRect() const;
		Rect& GetAreaRect();
		void SetAreaRect(const Rect& area_rect);

	};
}

#endif
