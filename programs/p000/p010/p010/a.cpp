#include <iostream>

using namespace std;

int main() {
	string names[] = { "a", "b", "c", "d", "e" };

	for (const string name : names) {
		cout << name << endl;
	}

	cin.get();

	return 0;
}