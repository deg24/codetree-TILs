#include <iostream>
using namespace std;

int main() {
    int wid, leng;
    cin >> wid >> leng;
    wid += 8;
    leng *= 3;
    cout << wid << endl << leng << endl << wid * leng;
    return 0;
}