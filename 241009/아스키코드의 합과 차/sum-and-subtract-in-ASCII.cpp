#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if(b>a){
        int temp = a;
        a=b;
        b=temp;
    }
    cout << (int)(a+b) << " " << (int)(a-b);
    return 0;
}