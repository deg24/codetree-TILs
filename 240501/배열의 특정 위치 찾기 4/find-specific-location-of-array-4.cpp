#include <iostream>
using namespace std;

int main() {
    int a[10], n{-1}, s{0}, i{0};
    for(;i<10;i++){
        cin >> a[i];
        if(a[i]%2==0){
            n++;
            s += a[i];
        }
        if(a[i]==0){
            break;
        }
    }
    cout << n << " " << s;
    return 0;
}