#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);

    double a[8], s{0};
    for(int i{0};i<8;i++){
        cin >> a[i];
        s += a[i];
    }
    cout << s/8;

    return 0;
}