#include <iostream>

using namespace std;

double getMaximumNumber(double *address) {
	double maximumNumber = *address;

	do {
		if (*address > maximumNumber) {
			maximumNumber = *address;
		}
	} while (*address++);

	return maximumNumber;
}

int main() {
	double numbers[] = {13, 2, 3, 62, 5555, 6, 7, 76};
	// The memory address
	// of the first element
	// of the array is being passed
	double maximumNumber = getMaximumNumber(numbers);

	cout << "Maximum number " << maximumNumber << endl;

	cin.get();

	return 0;
}
