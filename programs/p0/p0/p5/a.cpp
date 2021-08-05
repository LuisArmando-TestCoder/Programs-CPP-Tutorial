#include<iostream>

using namespace std;

int main() {
    int x = 0;

    x += 4;
    x /= 2;
    x *= 4;
    x *= -1;
    x -= 4;

    cout << "x: " << x << endl;

    // % is available for float as well?
    cout << "x % 10: " << x % 10 << endl;

    // pause
    cin.get();
    cin.get();

    return 0;
}