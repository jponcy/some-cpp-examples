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
Chrono::Chrono(int hours, int minutes, int seconds) : h(hours), m(minutes), s(seconds) {}
Chrono::~Chrono() {}

short Chrono::hours() { return this->h; }
short Chrono::minutes() { return this->m; }
short Chrono::seconds() { return this->s; }

Chrono Chrono::operator+(Chrono second) {
  Chrono res(*this);
  res.addSecs(Chrono::toSec(second.h, second.m, second.s));
  return res;
}

void Chrono::addSecs(int seconds) {
  int ret;

  s   = (s + seconds) % 3600;
  ret = s / 60;
  s  %= 60;

  m   = ret + m;
  ret = m / 60;
  m  %= 60;

  h += seconds / 3600 + ret;
}

} /* namespace app */
