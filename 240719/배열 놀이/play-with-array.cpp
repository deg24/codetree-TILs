#include <iostream>
using namespace std;

int main() {
	int n, q, a[100] = { 0, }, b, c, d;
	cin >> n >> q;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < q; i++) {
		cin >> b;
		if (b == 1) {
			cin >> c;
			cout << a[c - 1] << "\n";
		}
		if (b == 2) {
			cin >> c;
			for (int j = 0; j < n; j++) {
				if (c == a[j]) {
					cout << j + 1 << "\n";
					continue;
				}
				if (j == n - 1 && c != a[j]) {
					cout << 0 << "\n";
					continue;
				}
			}
		}
		if (b == 3) {
			cin >> c >> d;
			for (int j = c; j <= d;j++) {
				if (j == d) {
					cout << a[j - 1] << "\n";
				}
				else {
					cout << a[j - 1] << " ";
				}
			}
		}
	}

	return 0;
}