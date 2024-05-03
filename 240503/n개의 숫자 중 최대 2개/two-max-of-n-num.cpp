#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[100], n{0}, b[100], max{INT_MIN};
    cin >> n;

    for(int i{0};i<n;i++){
        cin >> a[i];
    }

    for(int j{0};j<n;j++){
        for(int i{0};i<n;i++){
            if(a[i] >= max) {
                max = a[i];
            }
        }
        b[j] = max;
        for(int i{0};i<n;i++){
            if(b[j] == a[i]){
                a[i] = INT_MIN;
                break;
            }
        }
        max = INT_MIN;
    }

    cout << b[0] << " " << b[1];

    return 0;
}