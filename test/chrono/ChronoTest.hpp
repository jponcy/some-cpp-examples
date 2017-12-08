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
  void testChronoToSec();
};

} // namespace app
#endif
