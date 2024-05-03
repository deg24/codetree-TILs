#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[100], n{0}, m{INT_MAX}, b{0};
    cin >> n;
    for(int i{0};i<n;i++){
        cin >> a[i];
        if(a[i]<m){
            m = a[i];
        }
    }
    for(int i{0};i<n;i++){
        if(a[i] == m){
            b++;
        }
    }
    cout << m << " " << b;
    return 0;
}