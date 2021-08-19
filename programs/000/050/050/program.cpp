#include <iostream>
#include <string>
#include "head.h"

struct A {
	std::string name;
};

int main()
{
	A a;

	// https://stackoverflow.com/questions/36506588/how-can-i-access-a-struct-property-by-string-name
	// https://stackoverflow.com/questions/17549906/c-json-serialization/34165367#34165367
	a.name = "testoo";
	// a["name"] = "testoo"; // niet

	std::cout << a.name << std::endl;

	std::cin.get();
}