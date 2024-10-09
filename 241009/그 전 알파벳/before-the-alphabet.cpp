#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c == 'a') {
        cout << 'z';
    }
    else {
        int a = (int)c - 1;
        cout << (char)a;
    }

    return 0;
}