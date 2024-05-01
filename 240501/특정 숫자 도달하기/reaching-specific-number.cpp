#include <iostream>
using namespace std;

int main() {
    int a[10], i{0};
    double s{0};
    for(int i{0};i<10;i++){
        cin >> a[i];
    }
    for(;i<10;i++){
        if(a[i] < 250){
            s += a[i];
        }
        if(a[i] >= 250){
            break;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << (int)s << " " << s/i;
    return 0;
}