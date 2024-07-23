#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[15][15] = { 0, };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (j == 0) {
				a[i][j] = 1;
			}
			else if (i == j) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}