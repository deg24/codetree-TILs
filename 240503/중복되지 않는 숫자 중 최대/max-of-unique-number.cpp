#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n{0}, a[1000];
    cin >> n;
    for(int i{0};i<n;i++){
        cin >> a[i];
    }
    int max{INT_MIN};
    for(int i{0};i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
        else if(a[i] == max){
            max = -1;
        }
    }
    cout << max;
    return 0;
}