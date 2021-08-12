#include <iostream>
#include <stdlib.h>
#include <typeinfo>

using namespace std;

int main() {
	char characters[] = "12.34";

	float number = atof(characters); // to do it the other way, use atoi

	cout << "float() is a " << typeid(float()).name() << endl; // FfvE ?
	cout << number << " is a " << typeid(number).name() << endl; // f ?
	cout << characters << " is a " << typeid(characters).name() << endl; // A6_c ?
	cout << characters[0] << " is a " << typeid(characters[0]).name() << endl; // c ?

	cin.get();

	return 0;
}