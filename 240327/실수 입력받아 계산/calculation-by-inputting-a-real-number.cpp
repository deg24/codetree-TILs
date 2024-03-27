#include <iostream>
using namespace std;

int main() {
    double a = 0;
    double b = 0;

    cout << fixed;
    cout.precision(2);

    cin >> a >> b;
    cout << a + b;
    return 0;
}