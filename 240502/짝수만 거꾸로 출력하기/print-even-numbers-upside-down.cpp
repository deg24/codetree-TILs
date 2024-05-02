#include <iostream>
using namespace std;

int main() {
    int n{0}, a[100], b[100], j{0};
    cin >> n;
    for(int i{0};i<n;i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            b[j] = a[i];
            j++;
        }
    }
    for(;j>0;j--){
        cout << b[j-1] << " ";
    }
    return 0;
}