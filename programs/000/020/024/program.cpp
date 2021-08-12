// https://www.tutorialspoint.com/cplusplus/cpp_variable_scope.htm
#include <iostream>

using namespace std;

string globalVariable = "GLOBAL VARIABLE!!!";

int main() {
	cout << "This is a " << globalVariable;

	cin.get();

	return 0;
}