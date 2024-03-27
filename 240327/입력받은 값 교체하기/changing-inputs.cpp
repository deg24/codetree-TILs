#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b;
    return 0;
}