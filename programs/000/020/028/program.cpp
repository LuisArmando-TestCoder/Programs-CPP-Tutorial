#include <iostream>

using namespace std;

/* Character Literals */

/**
 * Character literals are enclosed in single quotes.
 * If the literal begins with L (uppercase only),
 * it is a wide character literal (e.g., L'x')
 * and should be stored in wchar_t type of variable.
 * Otherwise, it is a narrow character literal (e.g., 'x')
 * and can be stored in a simple variable of char type.
 */

/**
 * A character literal can be a plain character (e.g., 'x'),
 * an escape sequence (e.g., '\t'),
 * or a universal character(e.g., '\u02C0').
 */

/** 
 * There are certain characters in C++ when they are preceded
 * by a backslash they will have special meaning and they are
 * used to represent like newline (\n) or tab (\t). 
 * 
 * Here, you have a list of some of such escape sequence codes −
 */

int main() {
	
	cout << "\\ character" << endl;
	
	cout << "\'	' character" << endl;
	
	cout << "\"	character" << endl;
	
	cout << "\?	? character" << endl;
	
	cout << "\a	Alert or bell" << endl;
	
	cout << "\b	Backspace" << endl;
	
	cout << "\f	Form feed" << endl;
	
	cout << "\n	Newline" << endl;
	
	cout << "\r	Carriage return" << endl;
	
	cout << "\t	Horizontal tab" << endl;
	
	cout << "\v	Vertical tab" << endl;
	
	cout << "\021, \02 Octal number of one to three digits" << endl;
	
	cout << "\xA2 . . .	Hexadecimal number of one or more digit" << endl;

	cin.get();

	return 0;
}