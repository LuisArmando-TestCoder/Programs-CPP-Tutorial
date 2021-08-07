#include <iostream>

using namespace std;

int main() {
	int numbers[] = {343,1,2,3,4,5,6,7};
	int *address;

	// se le asigna la posición en memoria del primer elemento
	address = numbers;

	// los arreglos tienen elementos con posiciones de momoria contiguas
	cout << *address << endl;

	address = &numbers[0];

	cout << *address << endl << endl;

	// fast version with truthy/falsy switch
	for (int i = 0; numbers[i]; i++) {
		cout << numbers[i] << endl;
	}

	cout << "Virtual size of array: " << sizeof(numbers) << endl;
	cout << "Virtual size of first array item: " << sizeof(numbers[0]) << endl;

	// true array size
	float arraySize = sizeof(numbers) / sizeof(numbers[0]);
	cout << "array size: " << arraySize << endl;

	for (int i = 0; i < arraySize; i++) {
		cout << numbers[i] << endl;
	}

	cin.get();

	return 0;
}