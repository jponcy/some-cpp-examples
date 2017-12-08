#include "ChronoTest.hpp"
#include <Chrono.hpp>
#include <cassert>

namespace app {
class Chrono;

void ChronoTest::runAll() { this->testChronoToSec(); }

/** Tests the toSec method into Chrono. */
void ChronoTest::testChronoToSec() {
  using namespace app;

  assert(Chrono::toSec(1, 0, 0) == 3600);
  assert(Chrono::toSec(0, 0, 1) == 1);
  assert(Chrono::toSec(1, 0, 1) == 3601);
  assert(Chrono::toSec(0, 1, 0) == 60);
  assert(Chrono::toSec(1, 1, 1) == 3661);
  assert(Chrono::toSec(7, 5, 10) == 25510);
}

} // namespace app
