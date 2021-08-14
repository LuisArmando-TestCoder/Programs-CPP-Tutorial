#include <iostream>

int main() {
	// from compiler to compiler
	// the size of something like
	// int is not defined as the
	// same, because cpp standards
	// are minimalistic in that sense

	// normally is 32 bits, but only
	// garanteed 16 bits

	// when having a negative number
	// you need a "signed" bit to store
	// if it negative or not

	// the downside of a signed bit is
	// that it cuts the highest value in half

	// see https://www.youtube.com/watch?v=YrVT09OS7VM

	// so, for an always positive number,
	// we need to use an unsigned value
	// unsigned -> with no sign
	unsigned long long int valueA = 90807060504030201u;
	unsigned long int valueB = 200000001u;

	// unsigned is outdated -> is better -> uint32_t
	uint32_t valueC = 23232323;

	// good for huge positive numbers

	std::cout << valueA << " " << valueB << " " << valueC << std::endl;

	std::cin.get();

	return 0;
}