#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int getRandomInteger(
	int minimum = 0,
	int maximum = 100
) {
	srand(time(NULL));

	double PI = atan(1) * 4;
	double semiRandom = double(rand()) / PI;

	// this is only for academic puroposes
	double integerPart;

	// get fractional part of division
	// the &integerPart just keeps the integer
	// modf can assign 2 values to 2 different variables at once 
	double fractionalPart = modf(semiRandom, &integerPart) * 1000000;

	return minimum + int(fractionalPart) % (maximum - minimum);
}

int main() {
	cout << "getRandomInteger(): " << getRandomInteger() << endl;
	cout << "getRandomInteger(2, 4): " << getRandomInteger(2, 4) << endl;

	int random;

	do {
		random = getRandomInteger();
		cout << random << endl;
	} while (random < 40 || random > 60);

	cin.get();

	return 0;
}