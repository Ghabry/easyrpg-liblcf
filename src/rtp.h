
/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RTP_H
#define LCF_RTP_H

#include <string>
#include <vector>

namespace RTP {
    struct RtpInfo {
        std::string name;
        int rtp_id;
        int hits;
        int max;
        std::vector<std::string> found;
        std::vector<std::string> missing;
    };

    using RtpDetectFunc = bool (*)(const char* type, const char* name);

    std::vector<RtpInfo> Detect(RtpDetectFunc rtp_detect_func, bool log_found_missing = false);
/* TODO
	// Takes a func where all filenames are passed
	std::vector<RtpHitInfo> DetectRtpType(func)
	// Takes a name in the passed RTP and returns all other RTP mappings to it.
	// skip_equal: if true don't return values that are equal to name
	std::vector<RtpEntry> LookupRtpToAny(RtpType, category, name)
	// Takes a name that can belong to any RTP and returns all entries in the target RTP
	std::vector<RtpEntry> LookupAnyToRtp(RtpType, category, name)
	// Takes a source and a destination RTP, maps source name to destination name and returns it
	RtpEntry LookupRtpToRtp(RtpType, RtpType, category, name)
    }*/

    /*
    FileFinder usage:
    		last_tree = tree;
		auto rtp_detect_func = [] (const char* dir, const char* name) -> bool {
			std::string ret;
			if (!strcmp("sound", dir)) {
				static const char* SOUND_TYPES[] = { ".wav", NULL };
				ret = FindFile(*last_tree, dir, name, SOUND_TYPES);
			} else if (!strcmp("music", dir)) {
				static const char* MUSIC_TYPES[] = { ".wav", ".mid", NULL };
				ret = FindFile(*last_tree, dir, name, MUSIC_TYPES);
			} else if (!strcmp("movie", dir)) {
				static const char* MOVIE_TYPES[] = { ".avi", NULL };
				ret = FindFile(*last_tree, dir, name, MOVIE_TYPES);
			} else {
				static const char* IMAGE_TYPES[] = { ".png", NULL };
				ret = FindFile(*last_tree, dir, name, IMAGE_TYPES);
			}
			return !ret.empty();
		};

		RTP::Detect(rtp_detect_func);
    */
}

#endif
