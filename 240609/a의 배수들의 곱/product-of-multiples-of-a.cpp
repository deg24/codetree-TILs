#include <iostream>
using namespace std;

int main() {
	int a, b, p=1;
	cin >> a >> b;
	for (int i = 1; i <= b; i++) {
		if (i % a == 0) {
			p *= i;
		}
	}
	cout << p;
	return 0;
}