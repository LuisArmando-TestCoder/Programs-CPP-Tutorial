#include <iostream>

using namespace std;

int main() {
	int size;


	do {
		cout << "Introduce size of array: ";
		cin >> size;

		int array[size];
		int summation = 0;

		for (int i = 0; i < size; i++) {
			array[i] = i + 1;

			cout << i << ": " << array[i] << endl;

			summation += array[i];
		}

		cout << "Now the inverse" << endl;

		for (int i = size - 1; i >= 0; i--) {
			cout << i << ": " << array[i];

			if (summation - array[i] == array[i]) {
				cout << " summation of rest";
			}

			cout << endl;
		}
	} while (size > 0);

	cin.get();
	cin.get();

	return 0;
}