#include <iostream>
using namespace std;

int main() {
    char ch[100];
    cin >> ch;
    int temp;
    char a[100] = { '\0', };
    for (int i = 0, j = 0; i < 100; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            temp = (int)ch[i] + (int)'A' - (int)'a';
            a[j] = (char)temp;
            j++;
        }
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            a[j] = ch[i];
            j++;
        }
    }
    cout << a;

    return 0;
}