#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[100], n{0};
    cin >> n;
    for(int i{0};i<n;i++){
        cin >> a[i];
    }
    int max{a[0]};
    for(int i{1};i<n;i++){
        if(a[i] > max) {
            max = a[i];
            a[i] = INT_MIN;
        }
    }
    int sec{a[0]};
    for(int i{1};i<n;i++){
        if(a[i] < max && a[i] > sec){
            sec = a[i];
        }
    }
    cout << max << " " << sec;
    return 0;
}