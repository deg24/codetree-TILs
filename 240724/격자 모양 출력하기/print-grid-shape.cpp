#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int a[10][10] = { 0, };
	for (int j = 0; j < m; j++) {
		int k, l;
		cin >> k >> l;
		a[k - 1][l - 1] = k * l;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}