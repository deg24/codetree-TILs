#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n{0}, a[1000];
    cin >> n;
    for(int i{0};i<n;i++){
        cin >> a[i];
    }
    int max{-1};
    for(int i{0};i<n;i++){
        if(max == a[i]) max = a[i] = -1;
        else if(max < a[i]) max = a[i];
    }
    cout << max;
    return 0;
}