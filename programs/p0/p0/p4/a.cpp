#include<iostream>

using namespace std;

int main() {
	float a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "\na + b: " << a + b << endl;
    cout << "a - b: " << a - b << endl;
    
    cout.precision(2);
    cout << "a / b: " << a / b << endl;
    cout << "a * b: " << a * b << endl;

    // pause
    cin.get();
    cin.get();

    return 0;
}