#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[100], max{-1000}, min{1000};
    for(int i{0};i<100;i++){
        cin >> a[i];
        if(a[i] == 999 || a[i] == -999) break;
        if(a[i]>max) max = a[i];
        if(a[i]<min) min = a[i];
    }
    cout << max << " " << min;
    return 0;
}