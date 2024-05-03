#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[100];
    int m{INT_MIN};

    for(int i{0}; i<10;i++){
        cin >> a[i];
        if(a[i]>m){
            m = a[i];
        }
    }
    cout << m;
    return 0;
}