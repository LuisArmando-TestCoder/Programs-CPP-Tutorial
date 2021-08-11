#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	char nameA[] = {'A', 'r', 'm', 'a', 'n', 'd', 'o'};
	
	// this is better because it show the string as is
	char nameB[] = "Armando";

	cout << nameA << " " << nameB << endl;

	int nameSize = 20;
	char name[nameSize];

	cout << "Digite su nombre: ";
	cin.getline(name, nameSize, '\n');

	cout << name << " -> longitud -> " << strlen(name) << endl;

	char nameCopy[nameSize];

	strcpy(nameCopy, name);

	cout << "Copia con strcpy: " << nameCopy << endl;

	getch(); // from conio

	return 0;
}