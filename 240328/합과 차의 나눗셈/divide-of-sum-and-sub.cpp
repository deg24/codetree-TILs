#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << setprecision(2) << fixed;

    cout << static_cast<double>(a+b)/(a-b);
    return 0;
}