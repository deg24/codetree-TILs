#include <iostream>
using namespace std;

int main() {
    int n{0}, a[100];
    cin >> n;
    for(int i{0}, k{0};i<2;k++){
        a[k] = n*(k+1);
        cout << a[k] << " ";
        if(a[k] % 5 == 0){
            i++;
        }
    }
    return 0;
}