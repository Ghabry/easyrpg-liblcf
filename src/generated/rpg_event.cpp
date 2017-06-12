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

// Headers
#include "rpg_event.h"


const std::string& RPG::Event::GetName() const  {
    return name;
}

std::string& RPG::Event::GetName() {
    return name;
}

void RPG::Event::SetName(const std::string& name) {
    this->name = name;
}

int RPG::Event::GetX() const {
    return x;
}

void RPG::Event::SetX(int x) {
    this->x = x;
}

int RPG::Event::GetY() const {
    return y;
}

void RPG::Event::SetY(int y) {
    this->y = y;
}

const std::vector<RPG::EventPage>& RPG::Event::GetPages() const  {
    return pages;
}

std::vector<RPG::EventPage>& RPG::Event::GetPages() {
    return pages;
}

void RPG::Event::SetPages(const std::vector<RPG::EventPage>& pages) {
    this->pages = pages;
}
