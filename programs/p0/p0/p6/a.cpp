#include <iostream>
#include <math.h>

using namespace std;

float getNRoot(float base, float number) {
    return pow(base, 1 / number);
}

int main() {
    float x = 2, y = 4;

    float potencia = pow(x, y);
    cout << "x^y: " << potencia << endl;

    float raiz = sqrt(potencia);
    cout << "sqrt(x^y): " << raiz << endl;

    float raizN = getNRoot(potencia, y);
    cout << "raizN(x^y, y) = x: " << raizN << endl;

    // pause
    cin.get();
    cin.get();

    return 0;
}