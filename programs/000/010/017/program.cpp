#include <iostream>

using namespace std;

int main() {
	// one way to store matrices
	int matrixA[2][3] = {
		1, 2, 3,
		4, 5, 6
	};

	cout << matrixA[0][0] /*1*/ << " " << matrixA[1][0] /*4*/ << endl;
	cout << *matrixA[15] << endl;

	int matrixB[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << matrixB[1][0] << endl;
	cin.get();

	return 0;
}