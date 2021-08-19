#include <iostream>
#include <string>
#include <bits/stdc++.h>

std::vector<int> eraseWithIndex(std::vector<int> vector, int index)
// the passed vector is a copy
{
	vector.erase(vector.begin() + index, vector.begin() + index + 1);

	return vector;
}

int main()
{
	std::vector<int> vector = {0, 1, 2, 3, 4, 5, 6, 7};

	for (unsigned int index = 0; index < vector.size(); index++) {
		std::cout << vector[index] << std::endl;
	}

	eraseWithIndex(vector, 1);
	eraseWithIndex(vector, 2);
	eraseWithIndex(vector, 3);

	std::cout << "--------------------------------" << std::endl;

	for (unsigned int index = 0; index < vector.size(); index++) {
		std::cout << vector[index] << std::endl;
	}

	// delete in reverse order
	vector = eraseWithIndex(vector, 3);

	// first later elements
	vector = eraseWithIndex(vector, 2);
	vector = eraseWithIndex(vector, 1);

	std::cout << "--------------------------------" << std::endl;

	for (unsigned int index = 0; index < vector.size(); index++) {
		std::cout << vector[index] << std::endl;
	}

	std::cin.get();
}