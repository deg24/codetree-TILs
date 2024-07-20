#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[1000] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			int cnt = 0;
			for (int j = i + 1; j < n; j++) {
				if (a[j] == a[i]) {
					a[j] = 0;
					cnt = -1;
				}
			}
			if (cnt == 0) {
				max = a[i];
			}
		}
	}

	if (max == 0) {
		cout << -1;
	}
	else {
		cout << max;
	}

	return 0;
}