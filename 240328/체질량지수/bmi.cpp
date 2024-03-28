#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h, w, b;
    cin >> h >> w;
    b = 10000*w/(h*h);
    cout << b;
    if (b >= 25) {
        cout << "Obesity";
    }
    
    return 0;
}