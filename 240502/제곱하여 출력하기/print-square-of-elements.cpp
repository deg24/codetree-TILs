#include <iostream>
using namespace std;

int main() {
    int n{0}, a[100];
    cin >> n;
    for(int i{0};i<n;i++){
        cin >> a[i];
        cout << a[i] * a[i] << " ";
    }
    return 0;
}