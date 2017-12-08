#include <iostream>
#include <cassert>
#include <Chrono.hpp>
// #include <chrono/ChronoTest.hpp>

/** Tests the toSec method into Chrono. */
void testChronoToSec() {
  using namespace app;

  assert(Chrono::toSec( 1,  0,  0) ==  3600);
  assert(Chrono::toSec( 0,  0,  1) ==     1);
  assert(Chrono::toSec( 1,  0,  1) ==  3601);
  assert(Chrono::toSec( 0,  1,  0) ==    60);
  assert(Chrono::toSec( 1,  1,  1) ==  3661);
  assert(Chrono::toSec( 7,  5, 10) == 25510);
}

/** Runs all tests. */
int main() {
  using namespace std;

  testChronoToSec();
  cout << "Tous les tests sont passés !" << endl;

  return EXIT_SUCCESS;
}
