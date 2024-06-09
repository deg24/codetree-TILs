#include <iostream>
using namespace std;

int main() {
	int n, p = 1;
	cin >> n;
	for (int i = 1; i <= 10; i++) {
		p *= i;
		if (p >= n) {
			cout << i;
			break;
		}
	}
	return 0;
}