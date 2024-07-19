#include <iostream>
using namespace std;

int main() {
	int a[100], b[9] = { 0, };

	for (int i = 0; i < 100; i++) {
		cin >> a[i];
		if (a[i] >= 10) {
			b[a[i] / 10 - 1]++;
		}
		if (a[i] == 0) break;
	}

	for (int i = 0; i < 9; i++) {
		cout << i+1 << " - " << b[i] << "\n";
	}

	return 0;
}