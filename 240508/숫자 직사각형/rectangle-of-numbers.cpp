#include <iostream>
using namespace std;

int main() {
	int n{ 0 }, m{ 0 }, a[100][100], num{ 1 };
	cin >> n >> m;
	for (int i{ 0 }; i < n; i++) {
		for (int j{ 0 }; j < m; j++) {
			cout << num << " ";
			num += 1;
		}
		cout << "\n";
	}

	return 0;
}