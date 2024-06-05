#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[10], s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1 && a[i] % 3 == 0) {
			s += a[i];
		}
	}
	cout << s;
	return 0;
}