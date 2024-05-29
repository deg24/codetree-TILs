#include <iostream>
using namespace std;

int main() {
	int a, b, i{ a };
	cin >> a >> b;
	while(a <= b) {
		cout << a << " ";
		a += 2;
	}
	return 0;
}