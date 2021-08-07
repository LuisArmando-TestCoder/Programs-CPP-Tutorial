#include <iostream>

using namespace std;

int main() {
	int numbers[] = {343,1,2,3,4,5,6,7};
	int *address;

	address = numbers;

	for (int i = 0; numbers[i]; i++) {
		cout << *address++ << endl;
	}

	cin.get();

	return 0;
}