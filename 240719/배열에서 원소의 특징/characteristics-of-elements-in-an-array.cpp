#include <iostream>
using namespace std;

int main() {
	int a[10];

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		if (a[i] % 3 == 0) {
			cout << a[i - 1];
			break;
		}
	}

	return 0;
}