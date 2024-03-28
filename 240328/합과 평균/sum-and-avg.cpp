#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << setprecision(1) << fixed;
    cout << a + b << " " << (double)(a+b)/2;
    return 0;
}