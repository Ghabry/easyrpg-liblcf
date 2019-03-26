/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <array>
#include "rtp.h"

namespace RTP {
    extern const char* rtp_table_2k[][5];
    extern const char* rtp_table_2k3[][7];
}

using RtpDetectFunc = bool (*)(const char* type, const char* name);

struct RtpType {
    int version;
    const char* name;
    int items;
};

const std::array<const struct RtpType, 10> rtp_names = {{
    {2000, "Official Japanese", 465},
    {2000, "Official English", 465},
    {2000, "Don Miguel English Translation", 500},
    {2000, "Don Miguel RTP Addon", 503},
    {2003, "Official Japanese", 675},
    {2003, "Official English", 674},
    {2003, "RPG Advocate English Translation", 675},
    {2003, "Vlad Russian Translation", 350},
    {2003, "RPG Universe Spanish Translation", 600},
    {2003, "Korean Translation", 675}
}};

std::vector<RTP::RtpInfo> RTP::Detect(RtpDetectFunc rtp_detect_func, bool log_found_missing) {
    std::vector<RtpInfo> hits;
    for (const auto& rtp : rtp_names) {
        hits.push_back({rtp.name, rtp.version, 0, rtp.items});
    }

    // TODO: UGLY!!!
    for (int i = 0; rtp_table_2k[i][0] != nullptr; ++i) {
        for (int j = 1; j < 5; ++j) {
            if (rtp_table_2k[i][j] != nullptr && rtp_detect_func(rtp_table_2k[i][0], rtp_table_2k[i][j])) {
                hits[j - 1].hits++;
            } else if (rtp_table_2k[i][j] != nullptr) {
                hits[j - 1].missing.push_back(std::string(rtp_table_2k[i][0]) + " " + rtp_table_2k[i][j]);
            }
        }
    }

    for (int i = 0; rtp_table_2k3[i][0] != nullptr; ++i) {
        for (int j = 1; j < 7; ++j) {
            if (rtp_table_2k3[i][j] != nullptr && rtp_detect_func(rtp_table_2k3[i][0], rtp_table_2k3[i][j])) {
                hits[j + 3].hits++;
            } else if (rtp_table_2k3[i][j] != nullptr) {
                hits[j + 3].missing.push_back(std::string(rtp_table_2k3[i][0]) + " " + rtp_table_2k3[i][j]);
            }
        }
    }

    return hits;
}
