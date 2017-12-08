#ifndef ChronoTest_H
#define ChronoTest_H

namespace app {

class ChronoTest {
public:
  ChronoTest();
  ~ChronoTest();

  /** Runs all tests. */
  void runAll();

private:
  /** Tests the toSec method. */
  void testToSec();
  /** Tests the + operator. */
  void testOperatorPlus();
};

} // namespace app
#endif
