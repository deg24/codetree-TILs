#include <iostream>
using namespace std;

int main() {
	int a, b, p=1;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		p *= i;
	}
	cout << p;
	return 0;
}