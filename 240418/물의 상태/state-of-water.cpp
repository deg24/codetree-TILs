#include <iostream>
using namespace std;

int main() {
    int n{0};

    cin >> n;

    if (n<0) {
        cout << "ice";
    }
    else if (n<100) {
        cout << "water";
    }
    else {
        cout << "vapor";
    }

    return 0;
}