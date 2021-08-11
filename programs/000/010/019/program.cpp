#include <iostream>

using namespace std;

int main() {
	int sizeY = 3;
	int sizeX = 3;
	int matrix[sizeY][sizeX] = {
		{1, 2, 3},
		{2, 4, 4},
		{3, 5, 7},
	};

	for (int y = 0; y < sizeY; y++) {
		for (int x = 0; x < sizeX; x++) {
			cout << matrix[y][x] << " ";
		}
		cout << endl;
	}

	cout << "Next, the transpose of the matrix" << endl;

	for (int y = 0; y < sizeY; y++) {
		for (int x = 0; x < sizeX; x++) {
			cout << matrix[x][y] << " ";
		}
		cout << endl;
	}

	cout << "The transpose matrix is ";

	bool havingPerfectMatrix = true;

	for (int y = 0; y < sizeY; y++) {
		for (int x = 0; x < sizeX; x++) {
			havingPerfectMatrix = matrix[x][y] == matrix[y][x];
			if (!havingPerfectMatrix) {
				goto stop;
			}
		}
	}

	stop:

	string stringBoolean = !havingPerfectMatrix ? "not " : "";

	cout << stringBoolean << "a perfect matrix";

	cin.get();

	return 0;
}