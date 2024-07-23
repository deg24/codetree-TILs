#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[10][10];
	for (int i = 0, cnt = 0, k = n, l = n; i < n; i++) {
		l--;
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				cnt++;
				k--;
				a[k][l] = cnt;
				if (k == 0) {
					k--;
				}
			}
			else {
				cnt++;
				k++;
				a[k][l] = cnt;
				if (k == n - 1) {
					k++;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}