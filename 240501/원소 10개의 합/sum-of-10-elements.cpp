#include <iostream>
using namespace std;

int main() {
    int a[10], s{0};
    for(int i{0};i<10;i++){
        cin >> a[i];
        s += a[i];
    }
    cout << s;
    return 0;
}