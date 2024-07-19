#include <iostream>
using namespace std;

int main() {
	int a, b, n[10] = { 0, }, s = 0;
	cin >> a >> b;

	for (int i = 0; i < 1000; i++) {
		n[a % b]++;
		a /= b;
		if (a <= 1) break;
	}

	for (int i = 0; i < 10; i++) {
		s += n[i] * n[i];
	}

	cout << s;

	return 0;
}