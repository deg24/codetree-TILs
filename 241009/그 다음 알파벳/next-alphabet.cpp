#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c == 'z') {
        c = 'a';
    }
    int a = (int)c + 1;
    cout << (char)a;

    return 0;
}