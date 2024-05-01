#include <iostream>
using namespace std;

int main() {
    int a[10], n{0}, i{0};
    for(;i<10;i++){
        cin >> a[i];
        if(a[i] == 0){
            break;
        }
    }

    for(int j{0};j<10;j++,i--){
        if(i>0){
        cout << a[i-1] << " ";
        }
    }
    return 0;
}