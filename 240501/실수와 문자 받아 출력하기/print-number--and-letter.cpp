#include <iostream>
using namespace std;

int main() {
    char c;
    double a;
    double b;
    cout << fixed;
    cout.precision(2);
    cin >> c >> a >> b;
    cout << c << "\n" << a << "\n" << b;
    return 0;
}