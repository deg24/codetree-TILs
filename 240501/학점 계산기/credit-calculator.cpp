#include <iostream>
using namespace std;

int main() {

    cout << fixed;
    cout.precision(1);

    int n{0};
    cin >> n;
    double a[100], s{0}, m{0};
    for(int i{0};i<n;i++){
        cin >> a[i];
        s += a[i];
    }

    m = s/n;

    if(m>= 4.0){
        cout << m << "\nPerfect";
    }
    else if(m>=3.0){
        cout << m << "\nGood";
    }
    else cout << m << "\nPoor";
    
    return 0;
}