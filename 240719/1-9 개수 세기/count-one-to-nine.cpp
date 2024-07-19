#include <iostream>
using namespace std;

int main() {
	int a[100], b[9] = { 0, }, n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[a[i] - 1]++;
	}

	for (int i = 0; i < 9; i++) {
		cout << b[i] << "\n";
	}

	return 0;
}