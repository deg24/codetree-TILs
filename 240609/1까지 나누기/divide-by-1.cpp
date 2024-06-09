#include <iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n;
	a = n;
	for (int i = 1; i <= a; i++) {
		n = n / i;
		if (n == 0) {
			cout << i;
			break;
		}
	}
	return 0;
}