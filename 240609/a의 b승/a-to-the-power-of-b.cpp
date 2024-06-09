#include <iostream>
using namespace std;

int main() {
	int a, b, p = 1;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		p *= a;
	}
	cout << p;
	return 0;
}