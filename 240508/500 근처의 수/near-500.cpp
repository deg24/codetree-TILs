#include <iostream>
using namespace std;

int main() {
    int a[10];
    for (int i{ 0 }; i < 10; i++) {
        cin >> a[i];
    }
    int max{ 1 }, min{ 1000 };
    for (int i{ 0 }; i < 10; i++) {
        if (a[i] > 500 && a[i] < min) {
            min = a[i];
        }
        if (a[i] < 500 && a[i] > max) {
            max = a[i];
        }
    }
    cout << max << " " << min;
    return 0;
}