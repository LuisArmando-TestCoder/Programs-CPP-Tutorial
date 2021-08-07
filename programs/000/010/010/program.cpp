#include <iostream>

using namespace std;

int main() {
	int x = 3, *xAddress;

	xAddress = &x;

	cout << "variable: " << *xAddress << endl;
	cout << "memory address: " << xAddress << endl;

	cout << "variable: " << x << endl;
	cout << "memory address: " << &x << endl;

	cin.get();

	return 0;
}