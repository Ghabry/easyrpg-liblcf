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

#ifndef LCF_RPG_MUSIC_H
#define LCF_RPG_MUSIC_H

// Headers
#include <stdint.h>
#include <string>

/**
 * RPG::Music class.
 */
namespace RPG {
	class Music {
	public:
		std::string name;
		int32_t fadein = 0;
		int32_t volume = 100;
		int32_t tempo = 100;
		int32_t balance = 50;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int32_t GetFadein() const;
		void SetFadein(int32_t fadein);

		int32_t GetVolume() const;
		void SetVolume(int32_t volume);

		int32_t GetTempo() const;
		void SetTempo(int32_t tempo);

		int32_t GetBalance() const;
		void SetBalance(int32_t balance);

	};
}

#endif
