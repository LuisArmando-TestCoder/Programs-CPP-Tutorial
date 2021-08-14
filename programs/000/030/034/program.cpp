#include <iostream>

int main() {
	/**
	 * Registers are faster than memory to access, so the 
	 * variables which are most frequently used in a C
	 * program can be put in registers using register keyword.
	 * 
	 * The keyword register hints to compiler that a given
	 * variable can be put in a register.
	 * 
	 * It's compiler's choice to put it in a register or not.
	 * 
	 * Generally, compilers themselves do optimizations and
	 * put the variables in register.
	 */
	register int number = 10;

	std::cout << "number: " << number << std::endl;

	std::cin.get();

	// register
	// https://en.cppreference.com/w/cpp/keyword/register
	// ¡Important! The keyword is unused and reserved.

	return 0;
}