#include <iostream>
using namespace std;

int main() {
    int a[10], n{0}, s{0}, i{0};
    for(;i<10;i++){
        cin >> a[i];
        if(a[i]==0){
            break;
        }
        if(a[i]%2==0){
            n++;
            s += a[i];
        }
    }
    cout << n << " " << s;
    return 0;
}