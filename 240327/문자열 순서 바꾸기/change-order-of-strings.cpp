#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string t;
    string c;

    cin >> s >> t;
    c = s;
    s = t;
    t = c;

    cout << t << endl << s;
    return 0;
}