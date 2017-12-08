#include "ChronoTest.hpp"
#include <Chrono.hpp>
#include <cassert>

namespace app {

ChronoTest::ChronoTest() {}
ChronoTest::~ChronoTest() {}

void ChronoTest::runAll() {
  this->testToSec();
  this->testOperatorPlus();
}

void ChronoTest::testToSec() {
  assert(Chrono::toSec(1, 0, 0) == 3600);
  assert(Chrono::toSec(0, 0, 1) == 1);
  assert(Chrono::toSec(1, 0, 1) == 3601);
  assert(Chrono::toSec(0, 1, 0) == 60);
  assert(Chrono::toSec(1, 1, 1) == 3661);
  assert(Chrono::toSec(7, 5, 10) == 25510);
}

void ChronoTest::testOperatorPlus() {
  Chrono first(1, 57, 0);
  Chrono second(1, 1, 40);

  Chrono t = first + second;

  assert(t.hours() == 2);
  assert(t.minutes() == 58);
  assert(t.seconds() == 40);

  // Add again.
  t += second;
  assert(t.hours() == 4);
  assert(t.minutes() == 0);
  assert(t.seconds() == 20);
}

} // namespace app
