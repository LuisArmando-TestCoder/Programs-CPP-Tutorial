#include <iostream>

using namespace std;

/* Floating-point Literals */

// 3.14159       // Legal
// 314159E-5L    // Legal
// 510E          // Illegal: incomplete exponent
// 210f          // Illegal: no decimal or exponent
// .e55          // Illegal: missing integer or fraction

int main() {
	float f1 = 3.14159;       // Legal
	float f2 = 314159E-5L;    // Legal

	cout << f1 << " " << f2 << endl;	

	cin.get();

	return 0;
}