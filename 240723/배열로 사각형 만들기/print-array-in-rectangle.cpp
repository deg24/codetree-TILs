#include <iostream>
using namespace std;

int main() {
	int a[5][5], n = 5;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0) {
				a[i][j] = 1;
			}
			else if (i != 0 && j == 0) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i - 1][j] + a[i][j - 1];
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