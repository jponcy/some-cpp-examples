#include <Chrono.hpp>
#include <iostream>
#include <cassert>
#include "chrono/ChronoTest.hpp"

/** Runs all tests. */
int main() {
  using namespace std;

  app::ChronoTest ct;
  ct.runAll();

  cout << "Tous les tests sont passés !" << endl;

  return EXIT_SUCCESS;
}
