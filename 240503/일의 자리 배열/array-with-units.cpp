#include <iostream>
using namespace std;

int main() {
    int a[10], n1{0}, n2{0};
    cin >> n1 >> n2;
    a[0] = n1;
    a[1] = n2;
    for(int i{0};i<10;i++){
        a[i+2] = (a[i+1] + a[i])%10;
    }
    for(int i{0};i<10;i++){
        cout << a[i] << " ";
    }
    return 0;
}