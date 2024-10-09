#include <iostream>
using namespace std;

int main() {
    char ch[20] = { '\0', };
    cin >> ch;
    int sum = 0;
    for (int i = 0; i < 20; i++) {
        if (ch[i] >= '0' && ch[i] <= '9') {
            sum += (int)ch[i] - 48;
        }
    }
    cout << sum;

    return 0;
}