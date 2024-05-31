#include <iostream>
using namespace std;

int main() {
	int n, a[100];
	cin >> n;
	for (int i{ 0 }; i < n; i++) {
		cin >> a[i];
	}
	for (int i{ 0 }; i < n; i++) {
		if (a[i] % 2 == 1 && a[i] % 3 == 0) {
			cout << a[i] << "\n";
		}
	}
	
	return 0;
}