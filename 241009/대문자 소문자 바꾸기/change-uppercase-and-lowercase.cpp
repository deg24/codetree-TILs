#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int temp;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            temp = s[i] - ('a' - 'A');
            cout << (char)temp;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            temp = s[i] + ('a' - 'A');
            cout << (char)temp;
        }
    }

    return 0;
}