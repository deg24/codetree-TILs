#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[1000] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int max = 0;;) {
		max = 0;
		int num = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > max) {
				max = a[i];
				num = i + 1;
			}
		}
		cout << num << " ";
		if (num == 1) break;
		n = num - 1;
	}

	return 0;
}