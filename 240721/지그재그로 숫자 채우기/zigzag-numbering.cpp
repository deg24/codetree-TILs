#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int a[100][100];
	for (int i = 0, k = 0; i < m; i++) {
		for (int j = 0; j < n; j++, k++) {
			if (i % 2 == 0) {
				a[j][i] = k;
			}
			else {
				a[n - j - 1][i] = k;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}