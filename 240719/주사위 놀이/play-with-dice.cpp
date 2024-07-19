#include <iostream>
using namespace std;

int main() {
	int a[10], b[6] = { 0, }, n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[a[i] - 1]++;
	}

	for (int i = 0; i < 9; i++) {
		cout << i+1 << " - " << b[i] << "\n";
	}

	return 0;
}