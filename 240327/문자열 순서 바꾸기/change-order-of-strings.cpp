#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string t;
    string c;

    cin >> s >> t >> c;

    c = s;
    s = t;
    t = c;

    cout << s << endl << t;
    return 0;
}