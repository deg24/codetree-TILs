#include <iostream>
using namespace std;

int main() {
	int n, q, arr[100] = { 0, }, k, a, b, s, e;
	cin >> n >> q;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < q; i++) {
		cin >> k;
		if (k == 1) {
			cin >> a;
			cout << arr[a - 1] << "\n";
		}
		if (k == 2) {
			int cnt = 0;
			cin >> b;
			for (int j = 0; j < n; j++) {
				if (b == arr[j]) {
					cout << j + 1 << "\n";
					cnt++;
					break;
				}
			}
			if (cnt == 0) {
				cout << 0 << "\n";
			}
		}
		if (k == 3) {
			cin >> s >> e;
			for (int j = e; j <= s;j++) {
				if (j == s) {
					cout << arr[j - 1] << "\n";
				}
				else {
					cout << arr[j - 1] << " ";
				}
			}
		}
	}

	return 0;
}