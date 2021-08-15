#include <iostream>
#include <string>
#include "head.h"

auto main() -> int {
	bank::PiggyBank piggyBank;

	std::cout << "Savings 0: " << piggyBank.getSavings() << std::endl;
	piggyBank.addNewSavings(1000);

	std::cout << "Savings 1: " << piggyBank.getSavings() << std::endl;

	delete &piggyBank;

	std::cin.get();
}