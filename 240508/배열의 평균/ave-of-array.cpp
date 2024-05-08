#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);
    double a[2][4];
    for (int i{ 0 }; i < 2; i++) {
        for (int j{ 0 }; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    double sum{ 0 };
    for (int i{ 0 }; i < 2; i++) {
        for (int j{ 0 }; j < 4; j++) {
            sum += a[i][j];
        }
        cout << sum / 4 << " ";
        sum = 0;
    }
    cout << "\n";
    for (int i{ 0 }; i < 4; i++) {
        for (int j{ 0 }; j < 2; j++) {
            sum += a[j][i];
        }
        cout << sum / 2 << " ";
        sum = 0;
    }
    cout << "\n";
    for (int i{ 0 }; i < 2; i++) {
        for (int j{ 0 }; j < 4; j++) {
            sum += a[i][j];
        }
    }
    cout << sum / 8;
    return 0;
}