#include <iostream>

using namespace std;

/* Integer Literals */

// 212         // Legal
// 215u        // Legal
// 0xFeeL      // Legal
// 078         // Illegal: 8 is not an octal digit
// 032UU       // Illegal: cannot repeat a suffix

// 85         // decimal
// 0213       // octal
// 0x4b       // hexadecimal
// 30         // int
// 30u        // unsigned int
// 30l        // long
// 30ul       // unsigned long

int main() {
	cout << 85 << endl;         // decimal
	cout << 0213 << endl;       // octal
	cout << 0x4b << endl;       // hexadecimal
	cout << 30 << endl;         // int
	cout << 30u << endl;        // unsigned int ?
	cout << 30l << endl;        // long
	cout << 30ul << endl;       // unsigned long ?

	// what is unsigned

	// Data type modifiers:

	// signed
	// unsigned
	// long
	// short

	// what is a type modifier?

	/**
	 * Type Modifiers are special keywords
	 * 
	 * Defined in the programming language which are used to
	 * modify the default properties of the Built-in Data types.
	 * 
	 * These are used to modify the range of the data types
	 * and also the memory space allocated to the variable.
	 */

	// https://www.sitesbay.com/cprogramming/c-datatype-modifiers

	cin.get();

	return 0;
}