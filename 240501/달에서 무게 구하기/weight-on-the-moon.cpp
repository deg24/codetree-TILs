#include <iostream>
using namespace std;

int main() {

    cout << fixed;

    double a{13}, b{0.165};

    cout.precision(6);


    cout << a << " * " << b << " = " << a * b;
    return 0;
}