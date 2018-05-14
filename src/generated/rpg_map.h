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

#ifndef LCF_RPG_MAP_H
#define LCF_RPG_MAP_H

// Headers
#include "rpg_base.h"
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_event.h"

/**
 * RPG::Map class.
 */
namespace RPG {
	class Map : public Base {
	public:
		enum ScrollType {
			ScrollType_none = 0,
			ScrollType_vertical = 1,
			ScrollType_horizontal = 2,
			ScrollType_both = 3
		};
		enum GeneratorMode {
			GeneratorMode_single_passage = 0,
			GeneratorMode_linked_rooms = 1,
			GeneratorMode_maze_passage = 2,
			GeneratorMode_open_room = 3
		};
		enum GeneratorTiles {
			GeneratorTiles_one = 0,
			GeneratorTiles_two = 1
		};

		Map() {}
		int32_t chipset_id = 1;
		int32_t width = 20;
		int32_t height = 15;
		int32_t scroll_type = 0;
		bool parallax_flag = false;
		std::string parallax_name;
		bool parallax_loop_x = false;
		bool parallax_loop_y = false;
		bool parallax_auto_loop_x = false;
		int32_t parallax_sx = 0;
		bool parallax_auto_loop_y = false;
		int32_t parallax_sy = 0;
		bool generator_flag = false;
		int32_t generator_mode = 0;
		bool top_level = false;
		int32_t generator_tiles = 0;
		int32_t generator_width = 4;
		int32_t generator_height = 1;
		bool generator_surround = true;
		bool generator_upper_wall = true;
		bool generator_floor_b = true;
		bool generator_floor_c = true;
		bool generator_extra_b = true;
		bool generator_extra_c = true;
		std::vector<uint32_t> generator_x;
		std::vector<uint32_t> generator_y;
		std::vector<int16_t> generator_tile_ids;
		std::vector<int16_t> lower_layer;
		std::vector<int16_t> upper_layer;
		std::vector<Event> events;
		int32_t save_count = 0;
		int32_t GetChipsetId() const;
		void SetChipsetId(int32_t chipset_id);

		int32_t GetWidth() const;
		void SetWidth(int32_t width);

		int32_t GetHeight() const;
		void SetHeight(int32_t height);

		const int32_t& GetScrollType() const;
		int32_t& GetScrollType();
		void SetScrollType(const int32_t& scroll_type);

		bool GetParallaxFlag() const;
		void SetParallaxFlag(bool parallax_flag);

		const std::string& GetParallaxName() const;
		std::string& GetParallaxName();
		void SetParallaxName(const std::string& parallax_name);

		bool GetParallaxLoopX() const;
		void SetParallaxLoopX(bool parallax_loop_x);

		bool GetParallaxLoopY() const;
		void SetParallaxLoopY(bool parallax_loop_y);

		bool GetParallaxAutoLoopX() const;
		void SetParallaxAutoLoopX(bool parallax_auto_loop_x);

		int32_t GetParallaxSx() const;
		void SetParallaxSx(int32_t parallax_sx);

		bool GetParallaxAutoLoopY() const;
		void SetParallaxAutoLoopY(bool parallax_auto_loop_y);

		int32_t GetParallaxSy() const;
		void SetParallaxSy(int32_t parallax_sy);

		bool GetGeneratorFlag() const;
		void SetGeneratorFlag(bool generator_flag);

		const int32_t& GetGeneratorMode() const;
		int32_t& GetGeneratorMode();
		void SetGeneratorMode(const int32_t& generator_mode);

		bool GetTopLevel() const;
		void SetTopLevel(bool top_level);

		const int32_t& GetGeneratorTiles() const;
		int32_t& GetGeneratorTiles();
		void SetGeneratorTiles(const int32_t& generator_tiles);

		int32_t GetGeneratorWidth() const;
		void SetGeneratorWidth(int32_t generator_width);

		int32_t GetGeneratorHeight() const;
		void SetGeneratorHeight(int32_t generator_height);

		bool GetGeneratorSurround() const;
		void SetGeneratorSurround(bool generator_surround);

		bool GetGeneratorUpperWall() const;
		void SetGeneratorUpperWall(bool generator_upper_wall);

		bool GetGeneratorFloorB() const;
		void SetGeneratorFloorB(bool generator_floor_b);

		bool GetGeneratorFloorC() const;
		void SetGeneratorFloorC(bool generator_floor_c);

		bool GetGeneratorExtraB() const;
		void SetGeneratorExtraB(bool generator_extra_b);

		bool GetGeneratorExtraC() const;
		void SetGeneratorExtraC(bool generator_extra_c);

		const std::vector<uint32_t>& GetGeneratorX() const;
		std::vector<uint32_t>& GetGeneratorX();

		const std::vector<uint32_t>& GetGeneratorY() const;
		std::vector<uint32_t>& GetGeneratorY();

		const std::vector<int16_t>& GetGeneratorTileIds() const;
		std::vector<int16_t>& GetGeneratorTileIds();

		const std::vector<int16_t>& GetLowerLayer() const;
		std::vector<int16_t>& GetLowerLayer();

		const std::vector<int16_t>& GetUpperLayer() const;
		std::vector<int16_t>& GetUpperLayer();

		const std::vector<Event>& GetEvents() const;
		std::vector<Event>& GetEvents();

		int32_t GetSaveCount() const;
		void SetSaveCount(int32_t save_count);

	};
}

#endif
