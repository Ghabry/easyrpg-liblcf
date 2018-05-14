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

#ifndef LCF_RPG_TREEMAP_H
#define LCF_RPG_TREEMAP_H

// Headers
#include <stdint.h>
#include <vector>
#include "rpg_mapinfo.h"
#include "rpg_start.h"

/**
 * RPG::TreeMap class.
 */
namespace RPG {
	class TreeMap {
	public:
		enum MapType {
			MapType_root = 0,
			MapType_map = 1,
			MapType_area = 2
		};

		std::vector<MapInfo> maps;
		std::vector<int32_t> tree_order;
		int32_t active_node = 0;
		Start start;
		const std::vector<MapInfo>& GetMaps() const;
		std::vector<MapInfo>& GetMaps();

		const std::vector<int32_t>& GetTreeOrder() const;
		std::vector<int32_t>& GetTreeOrder();

		int32_t GetActiveNode() const;
		void SetActiveNode(int32_t active_node);

		const Start& GetStart() const;
		Start& GetStart();
		void SetStart(const Start& start);

	};
}

#endif
