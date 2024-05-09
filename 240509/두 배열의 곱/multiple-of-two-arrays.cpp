#include <iostream>
using namespace std;

int main() {
	int a[3][3], b[3][3], n{ 3 };
	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < n; j++) {
			cin >> b[i][j];
		}
	}
	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < n; j++) {
			cout << a[i][j] * b[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}