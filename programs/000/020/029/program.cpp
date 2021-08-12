#include <iostream>

using namespace std;

/* String Literals */

/**
 * You can break a long line into multiple lines
 * using string literals and separate them using whitespaces.
 */

// "hello, dear"

// "hello, " "d" "ear"

int main() {
	string a = "hello, dear";

	string b =
	"hello, "
	"dear";
	cout << a << " " << b << endl;

	cin.get();

	return 0;
}