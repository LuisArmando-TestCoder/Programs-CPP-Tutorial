#include <iostream>
#include <vector>

// https://www.sitesbay.com/cprogramming/c-keywords
int main() {
	auto myAutoString = "Hey"; // assigns the automatically

	// myAutoString = 5; // Illegal -> kind of can make C/C++ a weakly typed language

	std::cout << myAutoString << std::endl;

	std::vector<std::string> strings;

	strings.push_back(myAutoString);
	strings.push_back("Orange");

	for (
		// std::vector<std::string>::iterator it = strings.begin(); // this type is huge
		auto it = strings.begin(); // so let's use auto
		it != strings.end(); it++
	) {
		std::cout << *it << std::endl;
	}

	std::cin.get();

	return 0;
}