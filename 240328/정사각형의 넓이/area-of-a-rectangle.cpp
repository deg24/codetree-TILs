#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n*n << "\n";
    if (n<5){
        cout << "tiny";
    }
    return 0;
}