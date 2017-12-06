/*
 * Chrono.cpp
 *
 *  Created on: 5 déc. 2017
 *      Author: jonathan
 */

#include "Chrono.hpp"
#include <iostream>

namespace app {

Chrono::Chrono(const Chrono &origin) : h(origin.h), m(origin.m), s(origin.s) {}

Chrono::Chrono(int hours, int minutes, int seconds) : h(hours), m(minutes), s(seconds) {}

Chrono::~Chrono() {}

} /* namespace app */
