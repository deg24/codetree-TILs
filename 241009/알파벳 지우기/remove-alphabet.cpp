#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string aa, bb;
    for (int i = 0, j = 0; i < 8; i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            aa[j] = a[i];
            j++;
        }
    }
    for (int i = 0, j = 0; i < 8; i++) {
        if (b[i] >= '0' && b[i] <= '9') {
            bb[j] = b[i];
            j++;
        }
    }
    cout << stoi(aa) + stoi(bb);

    return 0;
}