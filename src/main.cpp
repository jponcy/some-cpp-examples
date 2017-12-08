#include <iostream>
#include <Chrono.hpp>

using namespace app;

int main() {
	using namespace std;

	Chrono c(0, 0, 0);
	cout << c << endl;

	cout << "Je suis le programme !" << endl;

	return EXIT_SUCCESS;
}
