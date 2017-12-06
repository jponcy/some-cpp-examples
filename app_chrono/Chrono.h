/*
 * Chrono.h
 *
 *  Created on: 5 déc. 2017
 *      Author: jonathan
 */

#ifndef APP_CHRONO_H_
#define APP_CHRONO_H_

#include <iostream>

namespace app {

class Chrono {
public:
  Chrono(const Chrono &origin);
  /** The only one constructor. */
  Chrono(int hours, int minutes, int seconds);
  /** The destructor. */
  virtual ~Chrono();

  /** Output stream override. */
  friend std::ostream &operator<<(std::ostream &os, const Chrono &c) {
    os << c.h << ":" << c.m << ":" << c.s;
    return os;
  }

  /** Minus operation. */
  Chrono operator-(Chrono second) {
    Chrono res(*this);

    res.sec(second.s);

    return res;
  }

  /** Converts the given hour/minute/second number to a sumation second. */
  static int toSec(int hours, int minutes, int seconds) { return hours * 3600 + minutes * 60 + seconds; }

  void sec(int seconds) {
    int ret;

    s   = (s + seconds) % 3600;
    ret = s / 60;
    s %= 60;

    m   = ret + m;
    ret = m / 60;
    m %= 60;

    h += seconds / 3600 + ret;
  }

private:
  int h, m, s;
};

} /* namespace app */

#endif /* APP_CHRONO_H_ */
