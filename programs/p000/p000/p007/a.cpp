#include <iostream>

using namespace std;

char getChar(string message) {
    char theChar;

    cout << message << ": ";
    cin >> theChar;

    return theChar;
}

int main() {
    char anOperator = getChar("operator");
    char a = getChar("a");
    char b = 'b';

    // "*" is a string literal of type char[2]
    // '*' is a char

    // in CPP type of quote matters

    /**
     * Logical and arithmetic operators
     */
    // == != >= > <= < && || ! x++ ++x x-- --x
    // ^	Binary XOR
    // ~	Binary One's Complement
    // <<	Binary Shift Left
    // >>	Binary Shift Right
    if (anOperator == a) {
        cout << "2 + 3: " << 2 + 3;
    } else if (anOperator == b) {
        cout << "2 - 3: " << 2 - 3;
    } // who needs else

    /**
     * Other operators
     */
    // sizeof	returns the size of data type	sizeof(int); // 4
    // ?: 	    returns value based on the condition	string result = (5 > 0) ? "even" : "odd"; // "even"
    // &	    represents memory address of the operand	&num; // address of num
    // .	    accesses members of struct variables or class objects	s1.marks = 92;
    // ->	    used with pointers to access the class or struct variables	ptr->marks = 92;
    // <<	    prints the output value	cout << 5;
    // >>	    gets the input value	cin >> num;

    // pause
    cin.get();
    cin.get();

    return 0;
}