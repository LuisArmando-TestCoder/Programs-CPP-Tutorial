#include <iostream>

using namespace std;

int main() {
	// one way to store matrices
	int matrixA[2][3] = {
		1, 2, 3,
		4, 5, 6
	};

	cout << matrixA[0][0] /*1*/ << " " << matrixA[1][0] /*4*/ << endl;
	cout << "Out of array boundarie" << *matrixA[15] << endl;

	const int x = 2;
	const int y = 2;
	int matrixB[x][y] = {
		{1, 2},
		{4, 5}
	};

	cout << "Run Through Matrix B" << endl;

	for (int* arrayReference : matrixB) {
		for (int i = 0; i < x; i++) {
			cout << arrayReference[i] << endl;
		}
	}

	const int xSize = 2;
	const int ySize = 2;
	int matrixC[xSize][ySize] = {
		{1, 2},
		{4, 5}
	};

	cout << "Run Through Matrix C" << endl;

	for (int y = 0; y < ySize; y++) {
		for (int x = 0; x < xSize; x++) {
			cout << x << "_" << y << " " << matrixC[y][x] << endl;
		}
	}

	cin.get();

	return 0;
}