#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    int a = 0;
    if (c == 'z') {
        a = (int)'a' - 1;
    }
    else {
        a = (int)c + 1;
    }
    cout << (char)a;

    return 0;
}