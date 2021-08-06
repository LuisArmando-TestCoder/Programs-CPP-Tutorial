#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char b = 'b';

    while (b == 'b') {
        cout << "press b to continue or any other and double enter to exit: ";
        cin >> b;
    }

    // to hold execution
    getch();

    return 0;
}