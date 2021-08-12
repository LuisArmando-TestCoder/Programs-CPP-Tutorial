// https://stackoverflow.com/questions/8534274/is-the-strrev-function-not-available-in-linux

/**
 * To accurately answer your question,
 * Is strrev() not available on Linux?
 * 
 * The functions strrev() available in
 * the string.h library. Functions strrev()
 * including some other string functions
 * such as like strupr(), strlwr(), strrev(),
 * which are only available in ANSI C (Turbo C/C++)
 * and are not available in the standard C-GCC compiler.
 * 
 */

// Use one of the alternative implementations available:

#include <string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (!str || ! *str) return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string getUppercaseString(string text) {
	string uppercaseString = "";

	for (int i = 0; i < text.length(); i++) {
		uppercaseString += toupper(text.c_str()[i]);
	}

	return uppercaseString;
}

int main() {
	string wordA = "solos";
	string wordB = string(wordA.rbegin(), wordA.rend());

	// strcpy(wordB, wordA) // if wordA, wordB are char _[]

	cout << "Normal: " << wordA << endl;

	// strrev(wordA); // if wordA is char wordA[]

	cout << "Reverse: " << wordA << endl;

	string havingPalindromeBooleanWord = wordB == wordA ? "" : "not ";

	cout << "The word " << wordA << " is " << havingPalindromeBooleanWord << "a palindrome" << endl;
	
	// strupr(wordB); strlwr(wordB); // A function which is not defined by every C compile
	
	cout << getUppercaseString(wordB) << "!";

	cin.get();

	return 0;
}