#ifndef APP_CHRONO_H_
#define APP_CHRONO_H_

#include <iomanip>
#include <iostream>
#include <sstream>
#include <AChrono.hpp>

namespace app {

class Chrono : public AChrono {
public:
  Chrono(const Chrono &origin);
  /** The default constructor. */
  Chrono();
  /** The main constructor. */
  Chrono(unsigned short hours, unsigned short minutes, unsigned short seconds);
  /** The destructor. */
  virtual ~Chrono();

  /** Gets the hours number. */
  unsigned short hours();
  /** Gets the minutes number. */
  unsigned short minutes();
  /** Gets the seconds number. */
  unsigned short seconds();

  /** Output stream override. */
  friend std::ostream &operator<<(std::ostream &os, const Chrono &c) {
    os << std::setw(2) << std::setfill('0') << c.h
				<< ":" << std::setw(2) << std::setfill('0') << c.m <<
				":" << std::setw(2) << std::setfill('0') << c.s;
    return os;
  }

  virtual std::string describe() const {
    std::stringstream ss;
    ss << this->h << ":" << this->m << ":" << this->s;
    return ss.str();
  }

  /** Plus operation. */
  Chrono operator+(Chrono second);
  /** Add operation. */
  Chrono operator+=(Chrono second);

  /** Converts the given hour/minute/second number to seconds. */
  static int toSec(unsigned int hours, unsigned int minutes, unsigned int seconds);

private:
  unsigned short h, m, s;

  void addSecs(unsigned int seconds);
};
} /* namespace app */

#endif /* APP_CHRONO_H_ */
