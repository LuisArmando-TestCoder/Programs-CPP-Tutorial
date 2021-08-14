#include <iostream>

using namespace std;

// the #include keyword is a replacement for
// all the contents of some file, that is why we get
// all the functions without specifing which ones to use

// the inline keyword for function invocations, replaces
// the function name with all of its internal code, and
// the arguments placed in the specific parts in which
// these are being called

// how does linking work 
// https://www.youtube.com/watch?v=H4s55GgAg0I

// how does static work 
// https://www.youtube.com/watch?v=f3FVU-iwNuA

// Static makes this variable unreachable from other files
static const int value = 2;

int main() {
	cout << value << endl;

	cin.get();

	return 0;
}