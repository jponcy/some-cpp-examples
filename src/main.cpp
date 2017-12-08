#include <Chrono.hpp>
#include <functional>
#include <iostream>
#include <vector>

#define MAX 10

int main() {
  using namespace app;
  using namespace std;

  unsigned short pres = std::to_string(MAX).length();
  Chrono         c;

  for (unsigned short i = 1; i <= MAX; ++i) {
    Chrono turn(0, rand() % 60, rand() % 60);
    cout << "Turn n°" << std::setw(pres) << std::setfill(' ') << i << " with chrono: " << turn << endl;
    c = c + turn;
  }

  cout << endl << "Final chrono: " << c << endl;

  cout << "Je suis le programme !" << endl;

  return EXIT_SUCCESS;
}
