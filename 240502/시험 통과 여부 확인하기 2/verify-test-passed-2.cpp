#include <iostream>
using namespace std;

int main() {
    int n{0}, a[4], s{0}, b{0};
    cin >> n;
    for(int i{0}; i<n;i++){
        for(int j{0}; j<4;j++){
            cin >> a[j];
            s += a[j];
        }
        if(s/4 >= 60){
            cout << "pass" << "\n";
            ++b;
        }
        else cout << "fail" << "\n";
        s = 0;
    }
    cout << b;

    return 0;
}