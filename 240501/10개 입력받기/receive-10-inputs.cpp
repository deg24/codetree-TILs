#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);
    int a[10], s{0}, i{0};

    for(;i<10;i++){
        cin >> a[i];
        s += a[i];
        if(a[i] == 0){
            break;
        }
    }

    cout << s << " " << (double)s/i;
    return 0;
}