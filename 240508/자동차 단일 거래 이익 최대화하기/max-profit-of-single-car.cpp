#include <iostream>
using namespace std;

int main() {
    int n{ 0 }, a[1000];
    cin >> n;
    for (int i{ 0 }; i < n; i++) {
        cin >> a[i];
    }
    int pro{ 0 };
    for (int i{ 0 }; i < n; i++) {
        for (int j{ i + 1 }; j < n; j++) {
            if (a[i] < a[j] && a[j] - a[i] > pro) {
                pro = a[j] - a[i];
            }
        }
    }
    cout << pro;
    return 0;
}