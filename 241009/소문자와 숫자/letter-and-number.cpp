#include <iostream>
using namespace std;

int main() {
    char ch[100] = { '\0', };
    cin >> ch;
    int temp;
    char a[100] = { '\0', };
    int cnt = 0;
    for (int i = 0, j = 0; i < 100; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            a[j] = ch[i];
            j++;
            cnt++;
        }
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            temp = (int)ch[i] + 32;
            a[j] = (char)temp;
            j++;
            cnt++;
        }
        if (ch[i] >= '0' && ch[i] <= '9') {
            a[j] = ch[i];
            j++;
            cnt++;
        }
    }
    for (int i = 0; i < cnt; i++) {
        cout << a[i];
    }

    return 0;
}