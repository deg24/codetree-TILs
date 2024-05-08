#include <iostream>
using namespace std;

int main() {
    int n{ 0 }, a[10];
    cin >> n;
    for (int i{ 0 }; i < n; i++) cin >> a[i];
    int dif{ 100 };
    for (int i{ 0 }; i < n-1; i++) {
        if (dif > a[i + 1] - a[i]) dif = a[i + 1] - a[i];
    }
    cout << dif;
    return 0;
}