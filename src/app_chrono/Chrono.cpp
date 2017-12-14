/*
 * Chrono.cpp
 *
 *  Created on: 5 déc. 2017
 *      Author: jonathan
 */

#include <Chrono.hpp>
#include <iostream>

namespace app {

Chrono::Chrono(const Chrono &origin) : h(origin.h), m(origin.m), s(origin.s) {}
Chrono::Chrono() : Chrono(0, 0, 0) {}
Chrono::Chrono(unsigned short hours, unsigned short minutes, unsigned short seconds)
		: h(hours), m(minutes), s(seconds) {}
Chrono::~Chrono() {}

unsigned short Chrono::hours() { return this->h; }
unsigned short Chrono::minutes() { return this->m; }
unsigned short Chrono::seconds() { return this->s; }

Chrono Chrono::operator+(Chrono second) {
	Chrono res(*this);
	res += second;
	return res;
}

Chrono Chrono::operator+=(Chrono second) {
	this->addSecs(Chrono::toSec(second.h, second.m, second.s));
	return *this;
}

void Chrono::addSecs(unsigned int seconds) {
	int ret;

	s   = (s + seconds) % 3600;
	ret = s / 60;
	s %= 60;

	m   = ret + m;
	ret = m / 60;
	m %= 60;

	h += seconds / 3600 + ret;
}

int Chrono::toSec(unsigned int hours, unsigned int minutes, unsigned int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}

} /* namespace app */
