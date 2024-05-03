#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[100], n{0}, b[100];
    cin >> n;

    for(int i{0};i<n;i++){
        cin >> a[i];
    }

    for(int j{0};j<n;j++){
        for(int i{0};i<n;i++){
            if(a[i] > b[j]) {
                b[j] = a[i];
            }
        }
        for(int i{0};i<n;i++){
            if(b[j] == a[i]){
                a[i] = INT_MIN;
                break;
            }
        }
    }

    cout << b[0] << " " << b[1];

    return 0;
}