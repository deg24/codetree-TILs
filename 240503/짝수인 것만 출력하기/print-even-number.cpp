#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], n{0}, j{0}, s{0};
    cin >> n;
    for(int i{0};i<n;i++){
        cin >> a[i];
        if(a[i]%2==0){
            b[j] = a[i];
            j++;
        }
    }
    for(;s<j;s++){
        cout << b[s] << " ";
    }
    return 0;
}