#include <iostream>

using namespace std;

int main() {
	// An enumeration is a distinct
	// type whose value is restricted to a
	// range of values (see below for details),
	// which may include several explicitly named
	// constants ("enumerators").
	
	// The values of the constants are values of an
	// integral type known as the underlying type of the enumeration.
	enum Color { red, yellow, green = 20, blue };

	Color color = red;

	int n = blue; // n == 21

	cout << red << " " << yellow << " " << n << endl;

	cin.get();

	// enum

	return 0;
}