/*
 * Chrono.h
 *
 *  Created on: 5 déc. 2017
 *      Author: jonathan
 */

#ifndef APP_CHRONO_H_
#define APP_CHRONO_H_

#include <iostream>
#include <sstream>

namespace app {

class Chrono {
public:
	Chrono(const Chrono &origin);
	/** The only one constructor. */
	Chrono(int hours, int minutes, int seconds);
	/** The destructor. */
	virtual ~Chrono();

	/** Gets the hours number. */
	short hours();
	/** Gets the minutes number. */
	short minutes();
	/** Gets the seconds number. */
	short seconds();

	/** Output stream override. */
	friend std::ostream &operator<<(std::ostream &os, const Chrono &c) {
		os << c.h << ":" << c.m << ":" << c.s;
		return os;
	}

	std::string describe() const {
		std::stringstream ss;
		ss << this->h << ":" << this->m << ":" << this->s;
		return ss.str();
	}

	/** Plus operation. */
	Chrono operator+(Chrono second);

	/** Converts the given hour/minute/second number to a sumation second. */
	static int toSec(int hours, int minutes, int seconds) { return hours * 3600 + minutes * 60 + seconds; }

private:
	short h, m, s;
	void addSecs(int seconds);
};
} /* namespace app */

#endif /* APP_CHRONO_H_ */
