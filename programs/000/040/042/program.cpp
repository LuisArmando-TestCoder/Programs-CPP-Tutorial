#include <iostream>
#include <string>

class PiggyBank {
    private:
        uint32_t savings = 0;

    public:
        void addNewSavings(uint32_t newSavings) {
            savings += newSavings;
        }

        uint32_t getSavings() {
            return savings;
        }
};

int main() {
	PiggyBank piggyBank;

	std::cout << "Savings 0: " << piggyBank.getSavings() << std::endl;
	piggyBank.addNewSavings(1000);

	std::cout << "Savings 1: " << piggyBank.getSavings() << std::endl;

	delete &piggyBank;

	std::cin.get();
}