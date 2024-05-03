#include <iostream>
using namespace std;

int main() {
    int a[100], n{0};
    cin >> n;
    a[0] = 1;
    a[1] = n;
    for(int i{0};i<100;i++){
        a[i+2] = a[i+1] + a[i];
        cout << a[i] << " ";
        if(a[i]>100) break;
    }
    return 0;
}