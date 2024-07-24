#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i - 1][j - 1] + a[i][j - 1] + a[i - 1][j];
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