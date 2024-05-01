#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    cout.precision(6);

    double a{13}, b{0.165};

    cout << a << " * " << b << " = " << a * b;
    return 0;
}