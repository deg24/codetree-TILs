#include <iostream>
using namespace std;

int main() {
    int a[100], i{0};
    for(;i<100;i++){
        cin >> a[i];
        if(a[i]==0) break;
    }
    for(int j{0};j<i;j++){
        if(a[j]%2==1){
            cout << a[j] + 3 << " ";
        }
        else cout << a[j]/2 << " ";
    }
    return 0;
}