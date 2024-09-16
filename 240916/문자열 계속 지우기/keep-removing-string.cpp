#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int a_len = a.length();
    int b_len = b.length();

    for (int i = 0; i <= a_len - b_len; ) {
        bool same = true;

        for (int j = 0; j < b_len; j++) {
            if (a[i + j] != b[j]) {
                same = false;
                break;
            }
        }

        if (same) {
            a.erase(i, b_len);
            a_len = a.length();
            i = 0;
        }
        else {
            i++;
        }
    }

    cout << a;

    return 0;
}