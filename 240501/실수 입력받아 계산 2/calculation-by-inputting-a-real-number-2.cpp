#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(2);

    double a = 0;
    cin >> a;
    cout << a + 1.5;
    return 0;
}