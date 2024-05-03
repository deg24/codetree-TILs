#include <iostream>
using namespace std;

int main() {
    int a[100];
    cin >> a[0] >> a[1];
    for (int i{ 0 }; i < 10; i++) {
        a[i + 2] = a[i + 1] + a[i] * 2;
        cout << a[i] << " ";
    }
    return 0;
}