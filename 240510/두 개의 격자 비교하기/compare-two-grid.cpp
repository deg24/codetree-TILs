#include <iostream>
using namespace std;

int main() {
	int a[10][10], b[10][10], n{ 0 }, m{ 0 };
	cin >> n >> m;
	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < m; j++) {
			cin >> b[i][j];
		}
	}
	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < m; j++) {
			if (a[i][j] == b[i][j]) a[i][j] = 0;
			else a[i][j] = 1;
		}
	}
	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}