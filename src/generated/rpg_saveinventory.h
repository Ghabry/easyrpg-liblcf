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

#ifndef LCF_RPG_SAVEINVENTORY_H
#define LCF_RPG_SAVEINVENTORY_H

// Headers
#include <stdint.h>
#include <vector>

/**
 * RPG::SaveInventory class.
 */
namespace RPG {
	class SaveInventory {
	public:
		void Setup();
		int32_t party_size = -1;
		std::vector<int16_t> party;
		int32_t items_size = -1;
		std::vector<int16_t> item_ids;
		std::vector<uint8_t> item_counts;
		std::vector<uint8_t> item_usage;
		int32_t gold = 0;
		int32_t timer1_secs = 0;
		bool timer1_active = false;
		bool timer1_visible = false;
		bool timer1_battle = false;
		int32_t timer2_secs = 0;
		bool timer2_active = false;
		bool timer2_visible = false;
		bool timer2_battle = false;
		int32_t battles = 0;
		int32_t defeats = 0;
		int32_t escapes = 0;
		int32_t victories = 0;
		int32_t turns = 0;
		int32_t steps = 0;
		int32_t GetPartySize() const;
		void SetPartySize(int32_t party_size);

		const std::vector<int16_t>& GetParty() const;
		std::vector<int16_t>& GetParty();

		int32_t GetItemsSize() const;
		void SetItemsSize(int32_t items_size);

		const std::vector<int16_t>& GetItemIds() const;
		std::vector<int16_t>& GetItemIds();

		const std::vector<uint8_t>& GetItemCounts() const;
		std::vector<uint8_t>& GetItemCounts();

		const std::vector<uint8_t>& GetItemUsage() const;
		std::vector<uint8_t>& GetItemUsage();

		int32_t GetGold() const;
		void SetGold(int32_t gold);

		int32_t GetTimer1Secs() const;
		void SetTimer1Secs(int32_t timer1_secs);

		bool GetTimer1Active() const;
		void SetTimer1Active(bool timer1_active);

		bool GetTimer1Visible() const;
		void SetTimer1Visible(bool timer1_visible);

		bool GetTimer1Battle() const;
		void SetTimer1Battle(bool timer1_battle);

		int32_t GetTimer2Secs() const;
		void SetTimer2Secs(int32_t timer2_secs);

		bool GetTimer2Active() const;
		void SetTimer2Active(bool timer2_active);

		bool GetTimer2Visible() const;
		void SetTimer2Visible(bool timer2_visible);

		bool GetTimer2Battle() const;
		void SetTimer2Battle(bool timer2_battle);

		int32_t GetBattles() const;
		void SetBattles(int32_t battles);

		int32_t GetDefeats() const;
		void SetDefeats(int32_t defeats);

		int32_t GetEscapes() const;
		void SetEscapes(int32_t escapes);

		int32_t GetVictories() const;
		void SetVictories(int32_t victories);

		int32_t GetTurns() const;
		void SetTurns(int32_t turns);

		int32_t GetSteps() const;
		void SetSteps(int32_t steps);

	};
}

#endif
